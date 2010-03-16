################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CountingSemaphore.cpp \
../src/Main.cpp \
../src/Mutex.cpp 

OBJS += \
./src/CountingSemaphore.o \
./src/Main.o \
./src/Mutex.o 

CPP_DEPS += \
./src/CountingSemaphore.d \
./src/Main.d \
./src/Mutex.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -Isrc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


