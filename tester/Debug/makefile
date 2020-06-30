################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32H7xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
tester.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
tester.list \

OBJCOPY_BIN += \
tester.bin \


# All Target
all: tester.elf secondary-outputs

# Tool invocations
tester.elf: $(OBJS) $(USER_OBJS) C:\Users\zhika\Desktop\Third\ Year\ELEC\ 442\puma\ control\PUMA_REPO\tester\STM32H743ZITX_FLASH.ld
	arm-none-eabi-gcc -o "tester.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"C:\Users\zhika\Desktop\Third Year\ELEC 442\puma control\PUMA_REPO\tester\STM32H743ZITX_FLASH.ld" --specs=nosys.specs -Wl,-Map="tester.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

tester.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "tester.list"
	@echo 'Finished building: $@'
	@echo ' '

tester.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "tester.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
