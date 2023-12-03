################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/seven_seg/seven_seg.c 

OBJS += \
./HAL/seven_seg/seven_seg.o 

C_DEPS += \
./HAL/seven_seg/seven_seg.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/seven_seg/%.o: ../HAL/seven_seg/%.c HAL/seven_seg/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


