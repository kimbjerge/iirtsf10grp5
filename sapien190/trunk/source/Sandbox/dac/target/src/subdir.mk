################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BinarySemaphore.cpp \
../src/CountingSemaphore.cpp \
../src/Dac.cpp \
../src/Mutex.cpp \
../src/SleepTimer.cpp \
../src/Thread.cpp \
../src/dactest.cpp 

OBJS += \
./src/BinarySemaphore.o \
./src/CountingSemaphore.o \
./src/Dac.o \
./src/Mutex.o \
./src/SleepTimer.o \
./src/Thread.o \
./src/dactest.o 

CPP_DEPS += \
./src/BinarySemaphore.d \
./src/CountingSemaphore.d \
./src/Dac.d \
./src/Mutex.d \
./src/SleepTimer.d \
./src/Thread.d \
./src/dactest.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	arm-none-linux-gnueabi-g++ -I/home/stud/work/courses/tiirts/sapien190/trunk/source/Lib/os/posix -I/home/stud/wfdb-arm/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


