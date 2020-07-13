################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
OBJ_SRCS += \
../Core/Src/G_q.obj \
../Core/Src/G_q_data.obj \
../Core/Src/G_q_initialize.obj \
../Core/Src/G_q_terminate.obj \
../Core/Src/exp.obj \
../Core/Src/rtGetInf.obj \
../Core/Src/rtGetNaN.obj \
../Core/Src/rt_nonfinite.obj 

C_SRCS += \
../Core/Src/G_q.c \
../Core/Src/G_q_data.c \
../Core/Src/G_q_initialize.c \
../Core/Src/G_q_terminate.c \
../Core/Src/exp.c \
../Core/Src/main.c \
../Core/Src/rtGetInf.c \
../Core/Src/rtGetNaN.c \
../Core/Src/rt_nonfinite.c \
../Core/Src/stm32h7xx_hal_msp.c \
../Core/Src/stm32h7xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32h7xx.c 

OBJS += \
./Core/Src/G_q.o \
./Core/Src/G_q_data.o \
./Core/Src/G_q_initialize.o \
./Core/Src/G_q_terminate.o \
./Core/Src/exp.o \
./Core/Src/main.o \
./Core/Src/rtGetInf.o \
./Core/Src/rtGetNaN.o \
./Core/Src/rt_nonfinite.o \
./Core/Src/stm32h7xx_hal_msp.o \
./Core/Src/stm32h7xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32h7xx.o 

C_DEPS += \
./Core/Src/G_q.d \
./Core/Src/G_q_data.d \
./Core/Src/G_q_initialize.d \
./Core/Src/G_q_terminate.d \
./Core/Src/exp.d \
./Core/Src/main.d \
./Core/Src/rtGetInf.d \
./Core/Src/rtGetNaN.d \
./Core/Src/rt_nonfinite.d \
./Core/Src/stm32h7xx_hal_msp.d \
./Core/Src/stm32h7xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32h7xx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/G_q.o: ../Core/Src/G_q.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../G_q_lib -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../../G_q_lib/interface -I../Drivers/STM32H7xx_HAL_Driver/Inc -I"C:/Users/zhika/Desktop/Third Year/ELEC 442/puma control/PUMA_REPO/G_q_lib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/G_q.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/G_q_data.o: ../Core/Src/G_q_data.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../G_q_lib -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../../G_q_lib/interface -I../Drivers/STM32H7xx_HAL_Driver/Inc -I"C:/Users/zhika/Desktop/Third Year/ELEC 442/puma control/PUMA_REPO/G_q_lib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/G_q_data.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/G_q_initialize.o: ../Core/Src/G_q_initialize.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../G_q_lib -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../../G_q_lib/interface -I../Drivers/STM32H7xx_HAL_Driver/Inc -I"C:/Users/zhika/Desktop/Third Year/ELEC 442/puma control/PUMA_REPO/G_q_lib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/G_q_initialize.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/G_q_terminate.o: ../Core/Src/G_q_terminate.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../G_q_lib -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../../G_q_lib/interface -I../Drivers/STM32H7xx_HAL_Driver/Inc -I"C:/Users/zhika/Desktop/Third Year/ELEC 442/puma control/PUMA_REPO/G_q_lib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/G_q_terminate.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/exp.o: ../Core/Src/exp.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../G_q_lib -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../../G_q_lib/interface -I../Drivers/STM32H7xx_HAL_Driver/Inc -I"C:/Users/zhika/Desktop/Third Year/ELEC 442/puma control/PUMA_REPO/G_q_lib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/exp.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/main.o: ../Core/Src/main.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../G_q_lib -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../../G_q_lib/interface -I../Drivers/STM32H7xx_HAL_Driver/Inc -I"C:/Users/zhika/Desktop/Third Year/ELEC 442/puma control/PUMA_REPO/G_q_lib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/main.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/rtGetInf.o: ../Core/Src/rtGetInf.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../G_q_lib -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../../G_q_lib/interface -I../Drivers/STM32H7xx_HAL_Driver/Inc -I"C:/Users/zhika/Desktop/Third Year/ELEC 442/puma control/PUMA_REPO/G_q_lib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/rtGetInf.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/rtGetNaN.o: ../Core/Src/rtGetNaN.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../G_q_lib -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../../G_q_lib/interface -I../Drivers/STM32H7xx_HAL_Driver/Inc -I"C:/Users/zhika/Desktop/Third Year/ELEC 442/puma control/PUMA_REPO/G_q_lib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/rtGetNaN.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/rt_nonfinite.o: ../Core/Src/rt_nonfinite.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../G_q_lib -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../../G_q_lib/interface -I../Drivers/STM32H7xx_HAL_Driver/Inc -I"C:/Users/zhika/Desktop/Third Year/ELEC 442/puma control/PUMA_REPO/G_q_lib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/rt_nonfinite.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/stm32h7xx_hal_msp.o: ../Core/Src/stm32h7xx_hal_msp.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../G_q_lib -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../../G_q_lib/interface -I../Drivers/STM32H7xx_HAL_Driver/Inc -I"C:/Users/zhika/Desktop/Third Year/ELEC 442/puma control/PUMA_REPO/G_q_lib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/stm32h7xx_hal_msp.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/stm32h7xx_it.o: ../Core/Src/stm32h7xx_it.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../G_q_lib -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../../G_q_lib/interface -I../Drivers/STM32H7xx_HAL_Driver/Inc -I"C:/Users/zhika/Desktop/Third Year/ELEC 442/puma control/PUMA_REPO/G_q_lib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/stm32h7xx_it.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/syscalls.o: ../Core/Src/syscalls.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../G_q_lib -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../../G_q_lib/interface -I../Drivers/STM32H7xx_HAL_Driver/Inc -I"C:/Users/zhika/Desktop/Third Year/ELEC 442/puma control/PUMA_REPO/G_q_lib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/syscalls.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/sysmem.o: ../Core/Src/sysmem.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../G_q_lib -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../../G_q_lib/interface -I../Drivers/STM32H7xx_HAL_Driver/Inc -I"C:/Users/zhika/Desktop/Third Year/ELEC 442/puma control/PUMA_REPO/G_q_lib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/sysmem.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/system_stm32h7xx.o: ../Core/Src/system_stm32h7xx.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H743xx -DDEBUG -c -I../USB_DEVICE/Target -I../Drivers/CMSIS/Include -I../Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../G_q_lib -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../../G_q_lib/interface -I../Drivers/STM32H7xx_HAL_Driver/Inc -I"C:/Users/zhika/Desktop/Third Year/ELEC 442/puma control/PUMA_REPO/G_q_lib" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/system_stm32h7xx.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

