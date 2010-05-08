################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Record.cpp \
../src/RecordIterator.cpp \
../src/RecordProxy.cpp \
../src/RecordSimulate.cpp \
../src/RecordTest.cpp \
../src/RecordWfdb.cpp \
../src/Sample.cpp \
../src/SampleSet.cpp 

OBJS += \
./src/Record.o \
./src/RecordIterator.o \
./src/RecordProxy.o \
./src/RecordSimulate.o \
./src/RecordTest.o \
./src/RecordWfdb.o \
./src/Sample.o \
./src/SampleSet.o 

CPP_DEPS += \
./src/Record.d \
./src/RecordIterator.d \
./src/RecordProxy.d \
./src/RecordSimulate.d \
./src/RecordTest.d \
./src/RecordWfdb.d \
./src/Sample.d \
./src/SampleSet.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/stud/work/courses/tiirts/sapien190/trunk/source/Sandbox/RecordTest/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


