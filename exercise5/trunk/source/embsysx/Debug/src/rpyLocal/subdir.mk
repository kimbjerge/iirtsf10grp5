################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/rpyLocal/Test4.cpp 

OBJS += \
./src/rpyLocal/Test4.o 

CPP_DEPS += \
./src/rpyLocal/Test4.d 


# Each subdirectory must supply rules for building sources it contributes
src/rpyLocal/%.o: ../src/rpyLocal/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -D_LINUX -I"/mnt/hgfs/Ubuntu_share/exercise5/source/embsysx/src/rpy" -I"/mnt/hgfs/Ubuntu_share/exercise5/source/embsysx/src/rpyLocal" -I"/mnt/hgfs/Ubuntu_share/exercise5/source/embsysx/src/os/posix" -I"/mnt/hgfs/Ubuntu_share/exercise5/source/embsysx/src/rpy/oxf" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


