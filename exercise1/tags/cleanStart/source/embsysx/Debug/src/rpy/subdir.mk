################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/rpy/Configuration.cpp \
../src/rpy/ESXState.cpp \
../src/rpy/EmbeddedSystemX.cpp \
../src/rpy/Failure.cpp \
../src/rpy/Initializing.cpp \
../src/rpy/Mode1.cpp \
../src/rpy/Mode2.cpp \
../src/rpy/Mode3.cpp \
../src/rpy/OpState.cpp \
../src/rpy/Operational.cpp \
../src/rpy/PowerOnSelfTest.cpp \
../src/rpy/RTLState.cpp \
../src/rpy/Ready.cpp \
../src/rpy/RealTimeLoop.cpp \
../src/rpy/Suspended.cpp 

OBJS += \
./src/rpy/Configuration.o \
./src/rpy/ESXState.o \
./src/rpy/EmbeddedSystemX.o \
./src/rpy/Failure.o \
./src/rpy/Initializing.o \
./src/rpy/Mode1.o \
./src/rpy/Mode2.o \
./src/rpy/Mode3.o \
./src/rpy/OpState.o \
./src/rpy/Operational.o \
./src/rpy/PowerOnSelfTest.o \
./src/rpy/RTLState.o \
./src/rpy/Ready.o \
./src/rpy/RealTimeLoop.o \
./src/rpy/Suspended.o 

CPP_DEPS += \
./src/rpy/Configuration.d \
./src/rpy/ESXState.d \
./src/rpy/EmbeddedSystemX.d \
./src/rpy/Failure.d \
./src/rpy/Initializing.d \
./src/rpy/Mode1.d \
./src/rpy/Mode2.d \
./src/rpy/Mode3.d \
./src/rpy/OpState.d \
./src/rpy/Operational.d \
./src/rpy/PowerOnSelfTest.d \
./src/rpy/RTLState.d \
./src/rpy/Ready.d \
./src/rpy/RealTimeLoop.d \
./src/rpy/Suspended.d 


# Each subdirectory must supply rules for building sources it contributes
src/rpy/%.o: ../src/rpy/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -I"/home/stud/work/courses/tiirts/exercise1/source/embsysx/src/rpy" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


