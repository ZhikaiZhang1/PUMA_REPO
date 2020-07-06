/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "usb_device.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stm32h7xx_hal_uart.h"
#include "G_q.h"
#include "G_q_terminate.h"
#include "rt_nonfinite.h"

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */
typedef struct PINS{
	GPIO_TypeDef* port;
	uint16_t  pin_num;
}PINS;

typedef struct HOME{
	double coords[6];
	bool home_set;
}HOME;

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
#define HIGH 1U
#define LOW  0U
#define NUM_JOINTS 6
#define REV_COUNT_1 17280.0
#define REV_COUNT_2 5756.0
#define REV_COUNT_3 115.0 //assumed, may not be correct
#define G_CONSTANT -9.81
#define PI 3.1415926
const int K_P[] = {550, 550, 570, 1333, 1600, 700};
const int K_V[] = {400, 230, 250, 1100, 600, 600};
const double V_CONSTANT[] = {1.0456,1.0456,1.0456, 0.32,0.32, 0.00091};
const double T_CONSTANT[] = {1.307, 1.307, 1.307, 0.5324, 0.5324, 0.089240515};
const double RESISTANCE[] = {1.7, 1.7, 1.7, 5, 5, 5};
const double test_pos[] = {3.1415926/2.0, 3.1415926/4.0, 3.1415926/3.0, 3.1415926/2.0, 3.1415926/5.0, 3.1415926};
//for measuring CPU cycle
#define  ARM_CM_DEMCR      (*(uint32_t *)0xE000EDFC)

#define  ARM_CM_DWT_CTRL   (*(uint32_t *)0xE0001000)

#define  ARM_CM_DWT_CYCCNT (*(uint32_t *)0xE0001004)


/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

TIM_HandleTypeDef htim1;
TIM_HandleTypeDef htim2;
TIM_HandleTypeDef htim3;
TIM_HandleTypeDef htim5;
TIM_HandleTypeDef htim7;

UART_HandleTypeDef huart1;
UART_HandleTypeDef huart3;

/* USER CODE BEGIN PV */
volatile int Lstate[6];
volatile int val_encoderB[6];
volatile int val_encoderA[6];
volatile int motor_steps[6] = {0};
volatile bool direction [6] = {true};
volatile bool need_control  = true;
volatile double joint_speed[6] = {0};
volatile int delta_pos [6] = {0};
volatile double current_angle[6] = {0};
double backemf [6] = {0};
double desired_pos[6] = {0};
bool start_up = true;
bool homing_state [5] = {false};
bool start_state = true;

//pins: 0,1,2,3,4,7 - PA0(PA15), PA1(PD5), PB2(PA9), PE3(PE4), PD4(PD3), PD7(PE2)
// HAL_GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
PINS encoders[12];
//PE0, PF11, PG8, PG5, PF15, PD10, PG4, PE10, PE12, PD11, PD12, PD13
PINS Driver_P [6];
PINS Driver_N [6];

//Homing coords
HOME Homing;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART3_UART_Init(void);
static void MX_TIM1_Init(void);
static void MX_TIM2_Init(void);
static void MX_TIM3_Init(void);
static void MX_TIM5_Init(void);
static void MX_USART1_UART_Init(void);
static void MX_TIM7_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
extern uint8_t CDC_Transmit_FS(uint8_t* Buf, uint16_t Len);
//handle GPIO interrupt
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	/*typedef struct PINS{
		GPIO_TypeDef* port;
		uint16_t  pin_num;
    }PINS;*/
	//encoder pins: 0,1,2,3,4,7 - PA0(PC10)y, PA1(PD5)y, PB2(PC7)y, PE3(PE4)y, PD4(PD3)y, PD7(PE2)y
	//homing pins: PE5, PF6, 8, 9, 10
	// HAL_GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
	switch (GPIO_Pin){
	case GPIO_PIN_0:
		 Lstate[0] = HAL_GPIO_ReadPin(encoders[0].port, encoders[0].pin_num);
		  if((val_encoderA[0] == LOW) && Lstate[0]==HIGH)
		  {
			val_encoderB[0] = HAL_GPIO_ReadPin(encoders[1].port, encoders[1].pin_num);
		    if(val_encoderB[0] == LOW && direction[0])
		    {
		      direction[0] = false; //Reverse
		    }
		    else if(val_encoderB[0] == HIGH && !direction[0])
		    {
		    	direction[0] = true;  //Forward
		    }
		  }
		  val_encoderA[0] = Lstate[0];

		  if(!direction[0]){
			  motor_steps[0]++;
			  delta_pos[0]++;
		  }
		  else{
			  motor_steps[0]--;
			  delta_pos[0]--;
		  }
		break;

	case GPIO_PIN_1:
		 Lstate[1] = HAL_GPIO_ReadPin(encoders[2].port, encoders[2].pin_num);
		  if((val_encoderA[1] == LOW) && Lstate[1]==HIGH)
		  {
			val_encoderB[1] = HAL_GPIO_ReadPin(encoders[3].port, encoders[3].pin_num);
		    if(val_encoderB[1] == LOW && direction[1])
		    {
		      direction[1] = false; //Reverse
		    }
		    else if(val_encoderB[1] == HIGH && !direction[1])
		    {
		    	direction[1] = true;  //Forward
		    }
		  }
		  val_encoderA[1] = Lstate[1];

		  if(!direction[1]){
			  motor_steps[1]++;
			  delta_pos[1]++;
		  }
		  else{
			  motor_steps[1]--;
			  delta_pos[1]--;
		  }
		break;

	case GPIO_PIN_2:
		 Lstate[2] = HAL_GPIO_ReadPin(encoders[4].port, encoders[4].pin_num);
		  if((val_encoderA[2] == LOW) && Lstate[2]==HIGH)
		  {
			val_encoderB[2] = HAL_GPIO_ReadPin(encoders[5].port, encoders[5].pin_num);
		    if(val_encoderB[2] == LOW && direction[2])
		    {
		      direction[2] = false; //Reverse
		    }
		    else if(val_encoderB[2] == HIGH && !direction[2])
		    {
		    	direction[2] = true;  //Forward
		    }
		  }
		  val_encoderA[2] = Lstate[2];

		  if(!direction[2]){
			  motor_steps[2]++;
			  delta_pos[2]++;
		  }
		  else{
			  motor_steps[2]--;
			  delta_pos[2]--;
		  }
		break;
	case GPIO_PIN_3:
		 Lstate[3] = HAL_GPIO_ReadPin(encoders[6].port, encoders[6].pin_num);
		  if((val_encoderA[3] == LOW) && Lstate[3]==HIGH)
		  {
			val_encoderB[3] = HAL_GPIO_ReadPin(encoders[7].port, encoders[7].pin_num);
		    if(val_encoderB[3] == LOW && direction[3])
		    {
		      direction[3] = false; //Reverse
		    }
		    else if(val_encoderB[3] == HIGH && !direction[3])
		    {
		    	direction[3] = true;  //Forward
		    }
		  }
		  val_encoderA[3] = Lstate[3];

		  if(!direction[3]){
			  motor_steps[3]++;
			  delta_pos[3]++;
		  }
		  else{
			  motor_steps[3]--;
			  delta_pos[3]--;
		  }
		break;
	case GPIO_PIN_4:
		 Lstate[4] = HAL_GPIO_ReadPin(encoders[8].port, encoders[9].pin_num);
		  if((val_encoderA[4] == LOW) && Lstate[4]==HIGH)
		  {
			val_encoderB[4] = HAL_GPIO_ReadPin(encoders[9].port, encoders[9].pin_num);
		    if(val_encoderB[4] == LOW && direction[4])
		    {
		      direction[4] = false; //Reverse
		    }
		    else if(val_encoderB[4] == HIGH && !direction[4])
		    {
		    	direction[4] = true;  //Forward
		    }
		  }
		  val_encoderA[4] = Lstate[4];

		  if(!direction[4]){
			  motor_steps[4]++;
			  delta_pos[4]++;
		  }
		  else{
			  motor_steps[4]--;
			  delta_pos[4]--;
		  }
		break;
	case GPIO_PIN_7:
		 Lstate[5] = HAL_GPIO_ReadPin(encoders[10].port, encoders[10].pin_num);
		  if((val_encoderA[5] == LOW) && Lstate[5]==HIGH)
		  {
			val_encoderB[5] = HAL_GPIO_ReadPin(encoders[11].port, encoders[11].pin_num);
		    if(val_encoderB[5] == LOW && direction[5])
		    {
		      direction[5] = false; //Reverse
		    }
		    else if(val_encoderB[5] == HIGH && !direction[5])
		    {
		    	direction[5] = true;  //Forward
		    }
		  }
		  val_encoderA[5] = Lstate[5];

		  if(!direction[5]){
			  motor_steps[5]++;
			  delta_pos[5]++;
		  }
		  else{
			  motor_steps[5]--;
			  delta_pos[5]--;
		  }
		break;
	case GPIO_PIN_5:
		desired_pos[0] = (double)motor_steps[0] *2.0*3.1415926/REV_COUNT_1*2.0;
		homing_state[0] = true;
		break;
	case GPIO_PIN_6:
		desired_pos[1] = (double)motor_steps[1] *2.0*3.1415926/REV_COUNT_1*2.0;
		homing_state[1] = true;
		break;
	case GPIO_PIN_8:
		desired_pos[2] = (double)motor_steps[2] *2.0*3.1415926/REV_COUNT_1*2.0;
		homing_state[2] = true;
		break;
	case GPIO_PIN_9:
		desired_pos[3] = (double)motor_steps[3] *2.0*3.1415926/REV_COUNT_2*2.0;
		homing_state[3] = true;
		break;
	case GPIO_PIN_10:
		desired_pos[4] = (double)motor_steps[4] *2.0*3.1415926/REV_COUNT_2*2.0;
		homing_state[4] = true;
		break;
	default:
		break;
	}
}

void set_up_encoder_pins(void){
	//pins: 0,1,2,3,4,7 - PA0(PC10)y, PA1(PD5)y, PB2(PC7)y, PE3(PE4)y, PD4(PD3)y, PD7(PE2)y
	// HAL_GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
	encoders[0].port = GPIOA; encoders[0].pin_num = GPIO_PIN_0;
	encoders[1].port = GPIOC; encoders[1].pin_num = GPIO_PIN_10;
	encoders[2].port = GPIOA; encoders[2].pin_num = GPIO_PIN_1;
	encoders[3].port = GPIOD; encoders[3].pin_num = GPIO_PIN_5;
	encoders[4].port = GPIOB; encoders[4].pin_num = GPIO_PIN_2;
	encoders[5].port = GPIOC; encoders[5].pin_num = GPIO_PIN_7;
	encoders[6].port = GPIOE; encoders[6].pin_num = GPIO_PIN_3;
	encoders[7].port = GPIOE; encoders[7].pin_num = GPIO_PIN_4;
	encoders[8].port = GPIOD; encoders[8].pin_num = GPIO_PIN_4;
	encoders[9].port = GPIOD; encoders[9].pin_num = GPIO_PIN_3;
	encoders[10].port = GPIOD; encoders[10].pin_num = GPIO_PIN_7;
    encoders[11].port = GPIOE; encoders[11].pin_num = GPIO_PIN_2;
}
void set_up_driver_pins(void){
	//PE0, PF11, PG8, PG5, PF15, PD10, PG4, PE10, PE12, PD11, PD12, PD13
	Driver_P[0].port = GPIOE; Driver_P[0].pin_num = GPIO_PIN_0;
	Driver_N[0].port = GPIOF; Driver_N[0].pin_num = GPIO_PIN_11;
	Driver_P[1].port = GPIOG; Driver_P[1].pin_num = GPIO_PIN_8;
	Driver_N[1].port = GPIOG; Driver_N[1].pin_num = GPIO_PIN_5;
	Driver_P[2].port = GPIOF; Driver_P[2].pin_num = GPIO_PIN_15;
	Driver_N[2].port = GPIOD; Driver_N[3].pin_num = GPIO_PIN_10;
	Driver_P[3].port = GPIOG; Driver_P[3].pin_num = GPIO_PIN_4;
	Driver_N[3].port = GPIOE; Driver_N[3].pin_num = GPIO_PIN_10;
	Driver_P[4].port = GPIOE; Driver_P[4].pin_num = GPIO_PIN_12;
	Driver_N[4].port = GPIOD; Driver_N[4].pin_num = GPIO_PIN_11;
	Driver_P[5].port = GPIOD; Driver_P[5].pin_num = GPIO_PIN_12;
	Driver_N[5].port = GPIOD; Driver_N[5].pin_num = GPIO_PIN_13;
}

void PWM3_change_duty_cycle (int valuePA6, int valuePB1, int valuePA7){
	TIM_OC_InitTypeDef sConfigOC = {0};
	sConfigOC.OCMode = TIM_OCMODE_PWM1;
	  sConfigOC.Pulse = valuePA6;
	  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
	  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
	  if (HAL_TIM_PWM_ConfigChannel(&htim3, &sConfigOC, TIM_CHANNEL_1) != HAL_OK)
	  {
	    Error_Handler();
	  }
	  /*sConfigOC.Pulse = valuePB0;
	  if (HAL_TIM_PWM_ConfigChannel(&htim3, &sConfigOC, TIM_CHANNEL_3) != HAL_OK)
	  {
	    Error_Handler();
	  }*/
	  sConfigOC.Pulse = valuePB1;
	  if (HAL_TIM_PWM_ConfigChannel(&htim3, &sConfigOC, TIM_CHANNEL_4) != HAL_OK)
	  {
	    Error_Handler();
	  }
	  sConfigOC.Pulse = valuePA7;
	  if (HAL_TIM_PWM_ConfigChannel(&htim3, &sConfigOC, TIM_CHANNEL_2) != HAL_OK)
	  	  {
	  	    Error_Handler();
	  	  }
	  HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
	  HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_2);
	  HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_4);
}
void PWM1_change_duty_cycle (int valuePE11, int valuePE13){
	TIM_OC_InitTypeDef sConfigOC = {0};
	sConfigOC.OCMode = TIM_OCMODE_PWM1;
	  sConfigOC.Pulse = valuePE11;
	  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
	  sConfigOC.OCNPolarity = TIM_OCNPOLARITY_HIGH;
	  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
	  sConfigOC.OCIdleState = TIM_OCIDLESTATE_RESET;
	  sConfigOC.OCNIdleState = TIM_OCNIDLESTATE_RESET;
	  if (HAL_TIM_PWM_ConfigChannel(&htim1, &sConfigOC, TIM_CHANNEL_2) != HAL_OK)
	  {
	    Error_Handler();
	  }
	  sConfigOC.Pulse = valuePE13;
	  if (HAL_TIM_PWM_ConfigChannel(&htim1, &sConfigOC, TIM_CHANNEL_3) != HAL_OK)
	  {
	    Error_Handler();
	  }
	  HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_2);
	  HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_3);
}

//pin PA5
void PWM2_change_duty_cycle (int valuePA5){
	TIM_OC_InitTypeDef sConfigOC = {0};
	sConfigOC.OCMode = TIM_OCMODE_PWM1;
    sConfigOC.Pulse = valuePA5;
	sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
	sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
	if (HAL_TIM_PWM_ConfigChannel(&htim2, &sConfigOC, TIM_CHANNEL_1) != HAL_OK)
	{
	  Error_Handler();
    }
	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);
}
#ifdef __GNUC__
/* With GCC/RAISONANCE, small printf (option LD Linker->Libraries->Small printf
   set to 'Yes') calls __io_putchar() */
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */
PUTCHAR_PROTOTYPE
{
  /* Place your implementation of fputc here */
  /* e.g. write a character to the USART1 and Loop until the end of transmission */
  //HAL_UART_Transmit(&UartHandle, (uint8_t *)&ch, 1, 0xFFFF);
  CDC_Transmit_FS((uint8_t *)&ch, 1);
  return ch;
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
	int j;
	if (htim == &htim7){
		for (j = 0; j < NUM_JOINTS; j++){

			if (j <3){
				current_angle[j] = (double)motor_steps[j] *2.0*3.1415926/REV_COUNT_1*2.0;
				joint_speed[j] = (double)delta_pos[j] *2.0*3.1415926/REV_COUNT_1/0.01*2.0;
			}
			else if (j < 5){
				current_angle[j] = (double)motor_steps[j] *2.0*3.1415926/REV_COUNT_2*2.0;
				joint_speed[j] = (double)delta_pos[j] *2.0*3.1415926/REV_COUNT_2/0.01*2.0;
			}
			else{
				current_angle[j] = (double)motor_steps[j] *2.0*3.1415926/REV_COUNT_3*2.0;
				joint_speed[j] = (double)delta_pos[j] *2.0*3.1415926/REV_COUNT_3/0.01*2.0;
			}
			delta_pos[j] = 0;
		}

		need_control = true;
	}
}


void Joint_controller(bool homing, creal_T* G_q_vector){
	int k;
	int PWM_val [6] = {0};
	double G_q_r [6] = {0};
	G_q(G_CONSTANT, current_angle[2], current_angle[3], current_angle[4], current_angle[5], G_q_vector);
	for (k = 0; k < NUM_JOINTS; k++){
		//set duty cycle with PD+Gravity control
		G_q_r[k] = (double)G_q_vector[k].re;
		backemf[k] = joint_speed[k] * V_CONSTANT[k];
		G_q_r[k] *= 1024;
		G_q_r[k] /= (12.0 - backemf[k])/RESISTANCE[k]*T_CONSTANT[k];
		PWM_val[k] = G_q_r[k] + K_P[k] * (desired_pos[k] - current_angle[k]) - K_V[k] * joint_speed[k];
		if (PWM_val[k] > 1024){
			PWM_val[k] = 1024;
		}
		else if (PWM_val[k] < -1024){
			PWM_val[k] = -1024;
		}

		//set directions
		if (PWM_val[k] < 0){
			HAL_GPIO_WritePin(Driver_P[k].port, Driver_P[k].pin_num, 0);
			HAL_GPIO_WritePin(Driver_N[k].port, Driver_N[k].pin_num, 1);
			PWM_val[k] = 0-PWM_val[k];
		}
		else if (PWM_val[k] > 0){
			HAL_GPIO_WritePin(Driver_P[k].port, Driver_P[k].pin_num, 1);
			HAL_GPIO_WritePin(Driver_N[k].port, Driver_N[k].pin_num, 0);
		}
		else{
			HAL_GPIO_WritePin(Driver_P[k].port, Driver_P[k].pin_num, 0);
			HAL_GPIO_WritePin(Driver_N[k].port, Driver_N[k].pin_num, 0);
		}

	}
	PWM1_change_duty_cycle(PWM_val[0], PWM_val[1]);
	PWM2_change_duty_cycle(PWM_val[2]);
	PWM3_change_duty_cycle(PWM_val[3], PWM_val[4], PWM_val[5]);
}

void homing (void){
	//start_state = false;
	// need to set to false, don't forget
	/*int g = 0;
	for (g = 0; g < NUM_JOINTS; g++){
		current_angle[g] = 0;
		motor_steps[g] = 0;
	}*/
	//after everything is finished for homing it will set all coords to 0

	start_state = false;

}
void StartUp(void){

	//spin motors
	PWM1_change_duty_cycle(500, 500);
	PWM2_change_duty_cycle(500);
	PWM3_change_duty_cycle(500, 500, 0);
}

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
	char* msg = "Hello Nucleo Fun!\n\r";
	char* EOL = "]\n\r";
	char* EOJ = ", ";
	char* timer_tester = "timed\n\r";
	char one_motor[10];
	char print_string[60];
	int i;
	uint32_t  start;
	uint32_t  stop;
	uint32_t  delta;
	creal_T G_q_vector[6];

	//setting up pins
	set_up_encoder_pins();
	set_up_driver_pins();

    for(i = 0; i < NUM_JOINTS; i++){
    	val_encoderA [i] = HIGH;
    	val_encoderB [i] = HIGH;
    	direction [i] = true;
    	desired_pos[i] = test_pos[i];
    }
    Homing.home_set = false;
    //for CPU cycle counts
    if (ARM_CM_DWT_CTRL != 0) {        // See if DWT is available

        ARM_CM_DEMCR      |= 1 << 24;  // Set bit 24

        ARM_CM_DWT_CYCCNT  = 0;

        ARM_CM_DWT_CTRL   |= 1 << 0;   // Set bit 0

    }

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART3_UART_Init();
  MX_TIM1_Init();
  MX_TIM2_Init();
  MX_TIM3_Init();
  MX_TIM5_Init();
  MX_USART1_UART_Init();
  MX_USB_DEVICE_Init();
  MX_TIM7_Init();
  /* USER CODE BEGIN 2 */
  //PWM3_change_duty_cycle(1024, 500, 100);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	  start_up = !(homing_state[0] && homing_state[1] && homing_state[2] && homing_state[3] && homing_state[4]) && start_state;
	  Homing.home_set = (homing_state[0] && homing_state[1] && homing_state[2] && homing_state[3] && homing_state[4]) && start_state;
	  if (Homing.home_set){
		  homing();
		  break;
	  }
	  else if (start_up){
		  StartUp();
		  break;
	  }
	  //printf(msg);
	  if (HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13)){
		  itoa(motor_steps[0], one_motor, 10);
		  strcpy(print_string, one_motor);
		  for (i = 1; i < NUM_JOINTS; i++){
			  itoa(motor_steps[i], one_motor, 10);
			  strcat(print_string, EOJ);
			  strcat(print_string, one_motor);
		  }
		  strcat(print_string, EOL);
		  CDC_Transmit_FS((uint8_t*)"motor is at [", strlen(msg));
		  HAL_Delay(2);
		  CDC_Transmit_FS((uint8_t*)print_string, strlen(print_string));
		  HAL_Delay(2);
	  }
	  if (need_control){
		  start = ARM_CM_DWT_CYCCNT;
		  Joint_controller(false, G_q_vector);
		  stop  = ARM_CM_DWT_CYCCNT;
		  delta = stop - start;
		  need_control = false;
		  //CDC_Transmit_FS((uint8_t*)timer_tester, strlen(timer_tester));
		  //HAL_Delay(1);
	  }

	  //HAL_UART_Transmit(&huart1, (uint8_t*)msg, strlen(msg), 100);
	  //CDC_Transmit_FS(msg, sizeof(msg));
  }
  G_q_terminate();
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {0};

  /** Supply configuration update enable 
  */
  HAL_PWREx_ConfigSupply(PWR_LDO_SUPPLY);
  /** Configure the main internal regulator output voltage 
  */
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  while(!__HAL_PWR_GET_FLAG(PWR_FLAG_VOSRDY)) {}
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_BYPASS;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 1;
  RCC_OscInitStruct.PLL.PLLN = 54;
  RCC_OscInitStruct.PLL.PLLP = 2;
  RCC_OscInitStruct.PLL.PLLQ = 9;
  RCC_OscInitStruct.PLL.PLLR = 2;
  RCC_OscInitStruct.PLL.PLLRGE = RCC_PLL1VCIRANGE_3;
  RCC_OscInitStruct.PLL.PLLVCOSEL = RCC_PLL1VCOWIDE;
  RCC_OscInitStruct.PLL.PLLFRACN = 0;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2
                              |RCC_CLOCKTYPE_D3PCLK1|RCC_CLOCKTYPE_D1PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.SYSCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB3CLKDivider = RCC_APB3_DIV2;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_APB1_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_APB2_DIV2;
  RCC_ClkInitStruct.APB4CLKDivider = RCC_APB4_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_3) != HAL_OK)
  {
    Error_Handler();
  }
  PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_USART3|RCC_PERIPHCLK_USART1
                              |RCC_PERIPHCLK_USB;
  PeriphClkInitStruct.Usart234578ClockSelection = RCC_USART234578CLKSOURCE_D2PCLK1;
  PeriphClkInitStruct.Usart16ClockSelection = RCC_USART16CLKSOURCE_D2PCLK2;
  PeriphClkInitStruct.UsbClockSelection = RCC_USBCLKSOURCE_PLL;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Enable USB Voltage detector 
  */
  HAL_PWREx_EnableUSBVoltageDetector();
}

/**
  * @brief TIM1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM1_Init(void)
{

  /* USER CODE BEGIN TIM1_Init 0 */

  /* USER CODE END TIM1_Init 0 */

  TIM_MasterConfigTypeDef sMasterConfig = {0};
  TIM_OC_InitTypeDef sConfigOC = {0};
  TIM_BreakDeadTimeConfigTypeDef sBreakDeadTimeConfig = {0};

  /* USER CODE BEGIN TIM1_Init 1 */

  /* USER CODE END TIM1_Init 1 */
  htim1.Instance = TIM1;
  htim1.Init.Prescaler = 1080-1;
  htim1.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim1.Init.Period = 1024-1;
  htim1.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim1.Init.RepetitionCounter = 0;
  htim1.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_PWM_Init(&htim1) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterOutputTrigger2 = TIM_TRGO2_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim1, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sConfigOC.OCMode = TIM_OCMODE_PWM1;
  sConfigOC.Pulse = 0;
  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
  sConfigOC.OCNPolarity = TIM_OCNPOLARITY_HIGH;
  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
  sConfigOC.OCIdleState = TIM_OCIDLESTATE_RESET;
  sConfigOC.OCNIdleState = TIM_OCNIDLESTATE_RESET;
  if (HAL_TIM_PWM_ConfigChannel(&htim1, &sConfigOC, TIM_CHANNEL_2) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_ConfigChannel(&htim1, &sConfigOC, TIM_CHANNEL_3) != HAL_OK)
  {
    Error_Handler();
  }
  sBreakDeadTimeConfig.OffStateRunMode = TIM_OSSR_DISABLE;
  sBreakDeadTimeConfig.OffStateIDLEMode = TIM_OSSI_DISABLE;
  sBreakDeadTimeConfig.LockLevel = TIM_LOCKLEVEL_OFF;
  sBreakDeadTimeConfig.DeadTime = 0;
  sBreakDeadTimeConfig.BreakState = TIM_BREAK_DISABLE;
  sBreakDeadTimeConfig.BreakPolarity = TIM_BREAKPOLARITY_HIGH;
  sBreakDeadTimeConfig.BreakFilter = 0;
  sBreakDeadTimeConfig.Break2State = TIM_BREAK2_DISABLE;
  sBreakDeadTimeConfig.Break2Polarity = TIM_BREAK2POLARITY_HIGH;
  sBreakDeadTimeConfig.Break2Filter = 0;
  sBreakDeadTimeConfig.AutomaticOutput = TIM_AUTOMATICOUTPUT_DISABLE;
  if (HAL_TIMEx_ConfigBreakDeadTime(&htim1, &sBreakDeadTimeConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM1_Init 2 */

  /* USER CODE END TIM1_Init 2 */
  HAL_TIM_MspPostInit(&htim1);

}

/**
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_MasterConfigTypeDef sMasterConfig = {0};
  TIM_OC_InitTypeDef sConfigOC = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 1080-1;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 1024-1;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_PWM_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sConfigOC.OCMode = TIM_OCMODE_PWM1;
  sConfigOC.Pulse = 0;
  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
  if (HAL_TIM_PWM_ConfigChannel(&htim2, &sConfigOC, TIM_CHANNEL_1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */
  HAL_TIM_MspPostInit(&htim2);

}

/**
  * @brief TIM3 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM3_Init(void)
{

  /* USER CODE BEGIN TIM3_Init 0 */

  /* USER CODE END TIM3_Init 0 */

  TIM_MasterConfigTypeDef sMasterConfig = {0};
  TIM_OC_InitTypeDef sConfigOC = {0};

  /* USER CODE BEGIN TIM3_Init 1 */

  /* USER CODE END TIM3_Init 1 */
  htim3.Instance = TIM3;
  htim3.Init.Prescaler = 1080-1;
  htim3.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim3.Init.Period = 1024-1;
  htim3.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim3.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_PWM_Init(&htim3) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim3, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sConfigOC.OCMode = TIM_OCMODE_PWM1;
  sConfigOC.Pulse = 0;
  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
  if (HAL_TIM_PWM_ConfigChannel(&htim3, &sConfigOC, TIM_CHANNEL_1) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_ConfigChannel(&htim3, &sConfigOC, TIM_CHANNEL_2) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_ConfigChannel(&htim3, &sConfigOC, TIM_CHANNEL_4) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM3_Init 2 */

  /* USER CODE END TIM3_Init 2 */
  HAL_TIM_MspPostInit(&htim3);

}

/**
  * @brief TIM5 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM5_Init(void)
{

  /* USER CODE BEGIN TIM5_Init 0 */

  /* USER CODE END TIM5_Init 0 */

  TIM_MasterConfigTypeDef sMasterConfig = {0};
  TIM_OC_InitTypeDef sConfigOC = {0};

  /* USER CODE BEGIN TIM5_Init 1 */

  /* USER CODE END TIM5_Init 1 */
  htim5.Instance = TIM5;
  htim5.Init.Prescaler = 1080-1;
  htim5.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim5.Init.Period = 1024-1;
  htim5.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim5.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_PWM_Init(&htim5) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim5, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sConfigOC.OCMode = TIM_OCMODE_PWM1;
  sConfigOC.Pulse = 0;
  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
  if (HAL_TIM_PWM_ConfigChannel(&htim5, &sConfigOC, TIM_CHANNEL_4) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM5_Init 2 */

  /* USER CODE END TIM5_Init 2 */
  HAL_TIM_MspPostInit(&htim5);

}

/**
  * @brief TIM7 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM7_Init(void)
{

  /* USER CODE BEGIN TIM7_Init 0 */

  /* USER CODE END TIM7_Init 0 */

  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM7_Init 1 */

  /* USER CODE END TIM7_Init 1 */
  htim7.Instance = TIM7;
  htim7.Init.Prescaler = 1080-1;
  htim7.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim7.Init.Period = 1000-1;
  htim7.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;
  if (HAL_TIM_Base_Init(&htim7) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim7, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM7_Init 2 */
  /*##-2- Start the TIM Base generation in interrupt mode ####################*/
  if (HAL_TIM_Base_Start_IT(&htim7) != HAL_OK)
  {
    /* Starting Error */
    Error_Handler();
  }
  /* USER CODE END TIM7_Init 2 */

}

/**
  * @brief USART1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART1_UART_Init(void)
{

  /* USER CODE BEGIN USART1_Init 0 */

  /* USER CODE END USART1_Init 0 */

  /* USER CODE BEGIN USART1_Init 1 */

  /* USER CODE END USART1_Init 1 */
  huart1.Instance = USART1;
  huart1.Init.BaudRate = 9600;
  huart1.Init.WordLength = UART_WORDLENGTH_8B;
  huart1.Init.StopBits = UART_STOPBITS_1;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX_RX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  huart1.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
  huart1.Init.ClockPrescaler = UART_PRESCALER_DIV1;
  huart1.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
  if (HAL_UART_Init(&huart1) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_UARTEx_SetTxFifoThreshold(&huart1, UART_TXFIFO_THRESHOLD_1_8) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_UARTEx_SetRxFifoThreshold(&huart1, UART_RXFIFO_THRESHOLD_1_8) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_UARTEx_DisableFifoMode(&huart1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART1_Init 2 */

  /* USER CODE END USART1_Init 2 */

}

/**
  * @brief USART3 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART3_UART_Init(void)
{

  /* USER CODE BEGIN USART3_Init 0 */

  /* USER CODE END USART3_Init 0 */

  /* USER CODE BEGIN USART3_Init 1 */

  /* USER CODE END USART3_Init 1 */
  huart3.Instance = USART3;
  huart3.Init.BaudRate = 9600;
  huart3.Init.WordLength = UART_WORDLENGTH_8B;
  huart3.Init.StopBits = UART_STOPBITS_1;
  huart3.Init.Parity = UART_PARITY_NONE;
  huart3.Init.Mode = UART_MODE_TX_RX;
  huart3.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart3.Init.OverSampling = UART_OVERSAMPLING_16;
  huart3.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
  huart3.Init.ClockPrescaler = UART_PRESCALER_DIV1;
  huart3.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
  if (HAL_UART_Init(&huart3) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_UARTEx_SetTxFifoThreshold(&huart3, UART_TXFIFO_THRESHOLD_1_8) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_UARTEx_SetRxFifoThreshold(&huart3, UART_RXFIFO_THRESHOLD_1_8) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_UARTEx_DisableFifoMode(&huart3) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART3_Init 2 */

  /* USER CODE END USART3_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOG_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOF, GPIO_PIN_11|GPIO_PIN_15, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10|GPIO_PIN_12|GPIO_PIN_0, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LD3_Pin|LD2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOG, GPIO_PIN_4|GPIO_PIN_5|USB_PowerSwitchOn_Pin|GPIO_PIN_8, GPIO_PIN_RESET);

  /*Configure GPIO pins : PE2 PE4 */
  GPIO_InitStruct.Pin = GPIO_PIN_2|GPIO_PIN_4;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pin : PE3 */
  GPIO_InitStruct.Pin = GPIO_PIN_3;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pin : PE5 */
  GPIO_InitStruct.Pin = GPIO_PIN_5;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pin : PC13 */
  GPIO_InitStruct.Pin = GPIO_PIN_13;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PF6 PF8 PF9 PF10 */
  GPIO_InitStruct.Pin = GPIO_PIN_6|GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

  /*Configure GPIO pin : PF7 */
  GPIO_InitStruct.Pin = GPIO_PIN_7;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

  /*Configure GPIO pins : PC1 PC7 PC10 */
  GPIO_InitStruct.Pin = GPIO_PIN_1|GPIO_PIN_7|GPIO_PIN_10;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PA0 PA1 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pin : RMII_MDIO_Pin */
  GPIO_InitStruct.Pin = RMII_MDIO_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  GPIO_InitStruct.Alternate = GPIO_AF11_ETH;
  HAL_GPIO_Init(RMII_MDIO_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : RMII_RXD0_Pin RMII_RXD1_Pin */
  GPIO_InitStruct.Pin = RMII_RXD0_Pin|RMII_RXD1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  GPIO_InitStruct.Alternate = GPIO_AF11_ETH;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin : PB2 */
  GPIO_InitStruct.Pin = GPIO_PIN_2;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : PF11 */
  GPIO_InitStruct.Pin = GPIO_PIN_11;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

  /*Configure GPIO pin : PF15 */
  GPIO_InitStruct.Pin = GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

  /*Configure GPIO pins : PE10 PE12 PE0 */
  GPIO_InitStruct.Pin = GPIO_PIN_10|GPIO_PIN_12|GPIO_PIN_0;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pin : RMII_TXD1_Pin */
  GPIO_InitStruct.Pin = RMII_TXD1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  GPIO_InitStruct.Alternate = GPIO_AF11_ETH;
  HAL_GPIO_Init(RMII_TXD1_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : LD3_Pin LD2_Pin */
  GPIO_InitStruct.Pin = LD3_Pin|LD2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : PD10 PD11 PD12 PD13 */
  GPIO_InitStruct.Pin = GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : PG4 PG5 PG8 */
  GPIO_InitStruct.Pin = GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_8;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);

  /*Configure GPIO pin : USB_PowerSwitchOn_Pin */
  GPIO_InitStruct.Pin = USB_PowerSwitchOn_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(USB_PowerSwitchOn_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : USB_OverCurrent_Pin */
  GPIO_InitStruct.Pin = USB_OverCurrent_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(USB_OverCurrent_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : PC11 */
  GPIO_InitStruct.Pin = GPIO_PIN_11;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin : PD3 */
  GPIO_InitStruct.Pin = GPIO_PIN_3;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : PD4 PD7 */
  GPIO_InitStruct.Pin = GPIO_PIN_4|GPIO_PIN_7;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pin : PD5 */
  GPIO_InitStruct.Pin = GPIO_PIN_5;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : RMII_TX_EN_Pin RMII_TXD0_Pin */
  GPIO_InitStruct.Pin = RMII_TX_EN_Pin|RMII_TXD0_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  GPIO_InitStruct.Alternate = GPIO_AF11_ETH;
  HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);

  /* EXTI interrupt init*/
  HAL_NVIC_SetPriority(EXTI0_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI0_IRQn);

  HAL_NVIC_SetPriority(EXTI1_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI1_IRQn);

  HAL_NVIC_SetPriority(EXTI2_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI2_IRQn);

  HAL_NVIC_SetPriority(EXTI3_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI3_IRQn);

  HAL_NVIC_SetPriority(EXTI4_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI4_IRQn);

  HAL_NVIC_SetPriority(EXTI9_5_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI9_5_IRQn);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
