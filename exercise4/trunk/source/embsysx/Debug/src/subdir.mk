################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/TestThread.cpp \
../src/embsysx.cpp 

OBJS += \
./src/TestThread.o \
./src/embsysx.o 

CPP_DEPS += \
./src/TestThread.d \
./src/embsysx.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/stud/Documents/iirtsf10grp5/source/embsysx/src/rpy" -I"/home/stud/Documents/iirtsf10grp5/source/embsysx/src/rpy/oxf" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


