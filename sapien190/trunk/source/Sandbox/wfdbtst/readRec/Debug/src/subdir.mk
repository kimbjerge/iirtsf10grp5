################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/readRec.cpp 

OBJS += \
./src/readRec.o 

CPP_DEPS += \
./src/readRec.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/stud/work/courses/tiirts/sapien190/trunk/source/Lib -I/home/stud/work/courses/tiirts/sapien190/trunk/source/Lib/lib-arm/wfdb-arm -I/home/stud/work/courses/tiirts/sapien190/trunk/source/Lib/lib-arm -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


