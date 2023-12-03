################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/External\ Interrupt/EXT.c 

OBJS += \
./MCAL/External\ Interrupt/EXT.o 

C_DEPS += \
./MCAL/External\ Interrupt/EXT.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/External\ Interrupt/EXT.o: ../MCAL/External\ Interrupt/EXT.c MCAL/External\ Interrupt/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"MCAL/External Interrupt/EXT.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


