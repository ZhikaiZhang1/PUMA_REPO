################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
OBJ_SRCS += \
../Core/Src/Glib/G_q.obj \
../Core/Src/Glib/G_q_data.obj \
../Core/Src/Glib/G_q_initialize.obj \
../Core/Src/Glib/G_q_terminate.obj \
../Core/Src/Glib/exp.obj \
../Core/Src/Glib/rtGetInf.obj \
../Core/Src/Glib/rtGetNaN.obj \
../Core/Src/Glib/rt_nonfinite.obj 

C_SRCS += \
../Core/Src/Glib/G_q.c \
../Core/Src/Glib/G_q_data.c \
../Core/Src/Glib/G_q_initialize.c \
../Core/Src/Glib/G_q_terminate.c \
../Core/Src/Glib/exp.c \
../Core/Src/Glib/rtGetInf.c \
../Core/Src/Glib/rtGetNaN.c \
../Core/Src/Glib/rt_nonfinite.c 

OBJS += \
./Core/Src/Glib/G_q.o \
./Core/Src/Glib/G_q_data.o \
./Core/Src/Glib/G_q_initialize.o \
./Core/Src/Glib/G_q_terminate.o \
./Core/Src/Glib/exp.o \
./Core/Src/Glib/rtGetInf.o \
./Core/Src/Glib/rtGetNaN.o \
./Core/Src/Glib/rt_nonfinite.o 

C_DEPS += \
./Core/Src/Glib/G_q.d \
./Core/Src/Glib/G_q_data.d \
./Core/Src/Glib/G_q_initialize.d \
./Core/Src/Glib/G_q_terminate.d \
./Core/Src/Glib/exp.d \
./Core/Src/Glib/rtGetInf.d \
./Core/Src/Glib/rtGetNaN.d \
./Core/Src/Glib/rt_nonfinite.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/Glib/G_q.o: ../Core/Src/Glib/G_q.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Core/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../../G_q_lib -I../../G_q_lib/interface -I"C:/Program Files/MATLAB/R2018b/extern/include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/Glib/G_q.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/Glib/G_q_data.o: ../Core/Src/Glib/G_q_data.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Core/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../../G_q_lib -I../../G_q_lib/interface -I"C:/Program Files/MATLAB/R2018b/extern/include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/Glib/G_q_data.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/Glib/G_q_initialize.o: ../Core/Src/Glib/G_q_initialize.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Core/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../../G_q_lib -I../../G_q_lib/interface -I"C:/Program Files/MATLAB/R2018b/extern/include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/Glib/G_q_initialize.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/Glib/G_q_terminate.o: ../Core/Src/Glib/G_q_terminate.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Core/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../../G_q_lib -I../../G_q_lib/interface -I"C:/Program Files/MATLAB/R2018b/extern/include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/Glib/G_q_terminate.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/Glib/exp.o: ../Core/Src/Glib/exp.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Core/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../../G_q_lib -I../../G_q_lib/interface -I"C:/Program Files/MATLAB/R2018b/extern/include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/Glib/exp.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/Glib/rtGetInf.o: ../Core/Src/Glib/rtGetInf.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Core/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../../G_q_lib -I../../G_q_lib/interface -I"C:/Program Files/MATLAB/R2018b/extern/include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/Glib/rtGetInf.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/Glib/rtGetNaN.o: ../Core/Src/Glib/rtGetNaN.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Core/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../../G_q_lib -I../../G_q_lib/interface -I"C:/Program Files/MATLAB/R2018b/extern/include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/Glib/rtGetNaN.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/Glib/rt_nonfinite.o: ../Core/Src/Glib/rt_nonfinite.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Core/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../../G_q_lib -I../../G_q_lib/interface -I"C:/Program Files/MATLAB/R2018b/extern/include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/Glib/rt_nonfinite.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

