################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/os/posix/BinarySemaphore.cpp \
../src/os/posix/CountingSemaphore.cpp \
../src/os/posix/Mutex.cpp \
../src/os/posix/SleepTimer.cpp \
../src/os/posix/Thread.cpp 

OBJS += \
./src/os/posix/BinarySemaphore.o \
./src/os/posix/CountingSemaphore.o \
./src/os/posix/Mutex.o \
./src/os/posix/SleepTimer.o \
./src/os/posix/Thread.o 

CPP_DEPS += \
./src/os/posix/BinarySemaphore.d \
./src/os/posix/CountingSemaphore.d \
./src/os/posix/Mutex.d \
./src/os/posix/SleepTimer.d \
./src/os/posix/Thread.d 


# Each subdirectory must supply rules for building sources it contributes
src/os/posix/%.o: ../src/os/posix/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -D_LINUX -I"/mnt/hgfs/Ubuntu_share/exercise5/source/embsysx/src/rpy" -I"/mnt/hgfs/Ubuntu_share/exercise5/source/embsysx/src/rpyLocal" -I"/mnt/hgfs/Ubuntu_share/exercise5/source/embsysx/src/os/posix" -I"/mnt/hgfs/Ubuntu_share/exercise5/source/embsysx/src/rpy/oxf" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


