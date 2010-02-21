################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/rpy/ChMode.cpp \
../src/rpy/Command.cpp \
../src/rpy/ConfigX.cpp \
../src/rpy/Configuration.cpp \
../src/rpy/ConfigurationEnded.cpp \
../src/rpy/Configure.cpp \
../src/rpy/ESXState.cpp \
../src/rpy/EmbeddedSystemX.cpp \
../src/rpy/Exit.cpp \
../src/rpy/Failure.cpp \
../src/rpy/Initialized.cpp \
../src/rpy/Initializing.cpp \
../src/rpy/Mode1.cpp \
../src/rpy/Mode2.cpp \
../src/rpy/Mode3.cpp \
../src/rpy/Operational.cpp \
../src/rpy/PowerOnSelfTest.cpp \
../src/rpy/Ready.cpp \
../src/rpy/RealTimeLoop.cpp \
../src/rpy/Restart.cpp \
../src/rpy/Resume.cpp \
../src/rpy/SelfTestFailed.cpp \
../src/rpy/SelfTestOk.cpp \
../src/rpy/Start.cpp \
../src/rpy/Stop.cpp \
../src/rpy/Suspend.cpp \
../src/rpy/Suspended.cpp \
../src/rpy/eventX.cpp \
../src/rpy/eventY.cpp 

OBJS += \
./src/rpy/ChMode.o \
./src/rpy/Command.o \
./src/rpy/ConfigX.o \
./src/rpy/Configuration.o \
./src/rpy/ConfigurationEnded.o \
./src/rpy/Configure.o \
./src/rpy/ESXState.o \
./src/rpy/EmbeddedSystemX.o \
./src/rpy/Exit.o \
./src/rpy/Failure.o \
./src/rpy/Initialized.o \
./src/rpy/Initializing.o \
./src/rpy/Mode1.o \
./src/rpy/Mode2.o \
./src/rpy/Mode3.o \
./src/rpy/Operational.o \
./src/rpy/PowerOnSelfTest.o \
./src/rpy/Ready.o \
./src/rpy/RealTimeLoop.o \
./src/rpy/Restart.o \
./src/rpy/Resume.o \
./src/rpy/SelfTestFailed.o \
./src/rpy/SelfTestOk.o \
./src/rpy/Start.o \
./src/rpy/Stop.o \
./src/rpy/Suspend.o \
./src/rpy/Suspended.o \
./src/rpy/eventX.o \
./src/rpy/eventY.o 

CPP_DEPS += \
./src/rpy/ChMode.d \
./src/rpy/Command.d \
./src/rpy/ConfigX.d \
./src/rpy/Configuration.d \
./src/rpy/ConfigurationEnded.d \
./src/rpy/Configure.d \
./src/rpy/ESXState.d \
./src/rpy/EmbeddedSystemX.d \
./src/rpy/Exit.d \
./src/rpy/Failure.d \
./src/rpy/Initialized.d \
./src/rpy/Initializing.d \
./src/rpy/Mode1.d \
./src/rpy/Mode2.d \
./src/rpy/Mode3.d \
./src/rpy/Operational.d \
./src/rpy/PowerOnSelfTest.d \
./src/rpy/Ready.d \
./src/rpy/RealTimeLoop.d \
./src/rpy/Restart.d \
./src/rpy/Resume.d \
./src/rpy/SelfTestFailed.d \
./src/rpy/SelfTestOk.d \
./src/rpy/Start.d \
./src/rpy/Stop.d \
./src/rpy/Suspend.d \
./src/rpy/Suspended.d \
./src/rpy/eventX.d \
./src/rpy/eventY.d 


# Each subdirectory must supply rules for building sources it contributes
src/rpy/%.o: ../src/rpy/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/mnt/hgfs/Ubuntu_share/exercise2/source/embsysx/src/rpy" -I"/mnt/hgfs/Ubuntu_share/exercise2/source/embsysx/src/rpy/oxf" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


