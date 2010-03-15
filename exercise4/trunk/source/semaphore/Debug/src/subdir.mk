################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BinarySemaphore.cpp \
../src/CountingSemaphore.cpp \
../src/testSem.cpp 

OBJS += \
./src/BinarySemaphore.o \
./src/CountingSemaphore.o \
./src/testSem.o 

CPP_DEPS += \
./src/BinarySemaphore.d \
./src/CountingSemaphore.d \
./src/testSem.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -lpthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


