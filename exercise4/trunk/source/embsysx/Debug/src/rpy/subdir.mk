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
../src/rpy/Continuous.cpp \
../src/rpy/Creator.cpp \
../src/rpy/Discrete.cpp \
../src/rpy/ESXState.cpp \
../src/rpy/EmbeddedSystemX.cpp \
../src/rpy/Event.cpp \
../src/rpy/EventStrategy.cpp \
../src/rpy/EventX.cpp \
../src/rpy/EventY.cpp \
../src/rpy/Exit.cpp \
../src/rpy/Failure.cpp \
../src/rpy/Initialized.cpp \
../src/rpy/Initializing.cpp \
../src/rpy/M1Strategy.cpp \
../src/rpy/M2Strategy.cpp \
../src/rpy/M3Strategy.cpp \
../src/rpy/Mode1.cpp \
../src/rpy/Mode2.cpp \
../src/rpy/Mode3.cpp \
../src/rpy/Operational.cpp \
../src/rpy/PowerOnSelfTest.cpp \
../src/rpy/Ready.cpp \
../src/rpy/RealTimeLoop.cpp \
../src/rpy/RealTimeThread.cpp \
../src/rpy/Restart.cpp \
../src/rpy/Resume.cpp \
../src/rpy/SelfTestFailed.cpp \
../src/rpy/SelfTestOk.cpp \
../src/rpy/Start.cpp \
../src/rpy/Stop.cpp \
../src/rpy/Suspend.cpp \
../src/rpy/Suspended.cpp \
../src/rpy/Test1.cpp \
../src/rpy/Test2.cpp \
../src/rpy/Test3.cpp \
../src/rpy/TestCase.cpp 

OBJS += \
./src/rpy/ChMode.o \
./src/rpy/Command.o \
./src/rpy/ConfigX.o \
./src/rpy/Configuration.o \
./src/rpy/ConfigurationEnded.o \
./src/rpy/Configure.o \
./src/rpy/Continuous.o \
./src/rpy/Creator.o \
./src/rpy/Discrete.o \
./src/rpy/ESXState.o \
./src/rpy/EmbeddedSystemX.o \
./src/rpy/Event.o \
./src/rpy/EventStrategy.o \
./src/rpy/EventX.o \
./src/rpy/EventY.o \
./src/rpy/Exit.o \
./src/rpy/Failure.o \
./src/rpy/Initialized.o \
./src/rpy/Initializing.o \
./src/rpy/M1Strategy.o \
./src/rpy/M2Strategy.o \
./src/rpy/M3Strategy.o \
./src/rpy/Mode1.o \
./src/rpy/Mode2.o \
./src/rpy/Mode3.o \
./src/rpy/Operational.o \
./src/rpy/PowerOnSelfTest.o \
./src/rpy/Ready.o \
./src/rpy/RealTimeLoop.o \
./src/rpy/RealTimeThread.o \
./src/rpy/Restart.o \
./src/rpy/Resume.o \
./src/rpy/SelfTestFailed.o \
./src/rpy/SelfTestOk.o \
./src/rpy/Start.o \
./src/rpy/Stop.o \
./src/rpy/Suspend.o \
./src/rpy/Suspended.o \
./src/rpy/Test1.o \
./src/rpy/Test2.o \
./src/rpy/Test3.o \
./src/rpy/TestCase.o 

CPP_DEPS += \
./src/rpy/ChMode.d \
./src/rpy/Command.d \
./src/rpy/ConfigX.d \
./src/rpy/Configuration.d \
./src/rpy/ConfigurationEnded.d \
./src/rpy/Configure.d \
./src/rpy/Continuous.d \
./src/rpy/Creator.d \
./src/rpy/Discrete.d \
./src/rpy/ESXState.d \
./src/rpy/EmbeddedSystemX.d \
./src/rpy/Event.d \
./src/rpy/EventStrategy.d \
./src/rpy/EventX.d \
./src/rpy/EventY.d \
./src/rpy/Exit.d \
./src/rpy/Failure.d \
./src/rpy/Initialized.d \
./src/rpy/Initializing.d \
./src/rpy/M1Strategy.d \
./src/rpy/M2Strategy.d \
./src/rpy/M3Strategy.d \
./src/rpy/Mode1.d \
./src/rpy/Mode2.d \
./src/rpy/Mode3.d \
./src/rpy/Operational.d \
./src/rpy/PowerOnSelfTest.d \
./src/rpy/Ready.d \
./src/rpy/RealTimeLoop.d \
./src/rpy/RealTimeThread.d \
./src/rpy/Restart.d \
./src/rpy/Resume.d \
./src/rpy/SelfTestFailed.d \
./src/rpy/SelfTestOk.d \
./src/rpy/Start.d \
./src/rpy/Stop.d \
./src/rpy/Suspend.d \
./src/rpy/Suspended.d \
./src/rpy/Test1.d \
./src/rpy/Test2.d \
./src/rpy/Test3.d \
./src/rpy/TestCase.d 


# Each subdirectory must supply rules for building sources it contributes
src/rpy/%.o: ../src/rpy/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/stud/Documents/iirtsf10grp5/source/embsysx/src/rpy" -I"/home/stud/Documents/iirtsf10grp5/source/embsysx/src/rpy/oxf" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


