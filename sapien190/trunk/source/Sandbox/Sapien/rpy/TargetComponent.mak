
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug=-g
CPPCompileRelease=-O
LinkDebug=-g
LinkRelease=-O

ConfigurationCPPCompileSwitches=   -I. -I. -I$(OMROOT) -I$(OMROOT)/LangCpp -I$(OMROOT)/LangCpp/oxf $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) -DUSE_IOSTREAM $(CPPCompileDebug) -c 

#########################################
###### Predefined macros ################
RM=/bin/rm -rf
MD=/bin/mkdir -p
INCLUDE_QUALIFIER=-I
CC=gcc -DUSE_IOSTREAM
LIB_CMD=ar
LINK_CMD=$(CC)
LIB_FLAGS=rvu
LINK_FLAGS=-lpthread -lstdc++ $(LinkDebug)  

#########################################
####### Context macros ##################

FLAGSFILE=
RULESFILE=
OMROOT="C:/Programmer/IBM/Rational/Rhapsody/7.5/Share"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.o
EXE_EXT=
LIB_EXT=.a

INSTRUMENTATION=None

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=TargetComponent

all : $(TARGET_NAME)$(EXE_EXT) TargetComponent.mak

TARGET_MAIN=MainTargetComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/Linux

ADDITIONAL_OBJS=

OBJS= \
  ExtInputs.o \
  ExtOutAnalogue.o \
  ExtOutDigital.o \
  Waveform.o \
  ECG.o \
  EDR.o \
  Pulse.o \
  Simulator.o \
  Control.o \
  Execute.o \
  Subject.o \
  Signal.o \
  Controller.o \
  ScenarioConfig.o \
  Scenario.o \
  Parameter.o \
  Generator.o \
  Filter.o \
  EDRCalculate.o \
  ECGCalculate.o \
  PulseCalculate.o \
  PatientModel.o \
  NormalGenerator.o \
  InfusionGenerator.o \
  Medicine.o \
  Record.o \
  TestContinous.o \
  InfECGCalculate.o \
  RecordProxy.o \
  RecordFile.o \
  RecordIterator.o \
  RecordWfdb.o \
  RecordSimulate.o \
  LCDScreen.o \
  Observer.o \
  PulseUpdater.o \
  Continuous.o




#########################################
####### Predefined macros ###############
$(OBJS) :  $(INST_LIBS) $(OXF_LIBS)

OBJ_DIR=

ifeq ($(OBJ_DIR),)
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
else
CREATE_OBJ_DIR= $(MD) $(OBJ_DIR)
CLEAN_OBJ_DIR=  $(RM) $(OBJ_DIR)
endif


ifeq ($(INSTRUMENTATION),Animation)

INST_FLAGS=-DOMANIMATOR
INST_INCLUDES=-I$(OMROOT)/LangCpp/aom -I$(OMROOT)/LangCpp/tom
INST_LIBS= $(OMROOT)/LangCpp/lib/linuxaomanim$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/linuxoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/linuxomcomappl$(LIB_EXT)
SOCK_LIB=

else
ifeq ($(INSTRUMENTATION),Tracing)

INST_FLAGS=-DOMTRACER
INST_INCLUDES=-I$(OMROOT)/LangCpp/aom -I$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/linuxtomtrace$(LIB_EXT) $(OMROOT)/LangCpp/lib/linuxaomtrace$(LIB_EXT)
OXF_LIBS= $(OMROOT)/LangCpp/lib/linuxoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/linuxomcomappl$(LIB_EXT)
SOCK_LIB=

else
ifeq ($(INSTRUMENTATION),None)

INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
OXF_LIBS=$(OMROOT)/LangCpp/lib/linuxoxf$(LIB_EXT)
SOCK_LIB=

else
	@echo An invalid Instrumentation $(INSTRUMENTATION) is specified.
	exit
endif
endif
endif

.SUFFIXES: $(CPP_EXT)



#####################################################################
##################### Context dependencies and commands #############






ExtInputs.o : ExtInputs.cpp ExtInputs.h    PatientModel.h 
	@echo Compiling ExtInputs.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ExtInputs.o ExtInputs.cpp




ExtOutAnalogue.o : ExtOutAnalogue.cpp ExtOutAnalogue.h    Signal.h 
	@echo Compiling ExtOutAnalogue.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ExtOutAnalogue.o ExtOutAnalogue.cpp




ExtOutDigital.o : ExtOutDigital.cpp ExtOutDigital.h    Signal.h PulseUpdater.h 
	@echo Compiling ExtOutDigital.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ExtOutDigital.o ExtOutDigital.cpp




Waveform.o : Waveform.cpp Waveform.h    PatientModel.h Subject.h Observer.h 
	@echo Compiling Waveform.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Waveform.o Waveform.cpp




ECG.o : ECG.cpp ECG.h    EDR.h Signal.h ExtOutAnalogue.h ExtOutDigital.h PatientModel.h 
	@echo Compiling ECG.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ECG.o ECG.cpp




EDR.o : EDR.cpp EDR.h    ECG.h Signal.h ExtOutAnalogue.h ExtOutDigital.h PatientModel.h 
	@echo Compiling EDR.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o EDR.o EDR.cpp




Pulse.o : Pulse.cpp Pulse.h    Signal.h ExtOutAnalogue.h ExtOutDigital.h PatientModel.h 
	@echo Compiling Pulse.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Pulse.o Pulse.cpp




Simulator.o : Simulator.cpp Simulator.h    PatientModel.h Scenario.h Control.h Execute.h 
	@echo Compiling Simulator.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Simulator.o Simulator.cpp




Control.o : Control.cpp Control.h    
	@echo Compiling Control.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Control.o Control.cpp




Execute.o : Execute.cpp Execute.h    
	@echo Compiling Execute.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Execute.o Execute.cpp




Subject.o : Subject.cpp Subject.h    Observer.h 
	@echo Compiling Subject.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Subject.o Subject.cpp




Signal.o : Signal.cpp Signal.h    ExtOutAnalogue.h ExtOutDigital.h PatientModel.h 
	@echo Compiling Signal.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Signal.o Signal.cpp




Controller.o : Controller.cpp Controller.h    PatientModel.h LCDScreen.h Parameter.h Scenario.h 
	@echo Compiling Controller.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Controller.o Controller.cpp




ScenarioConfig.o : ScenarioConfig.cpp ScenarioConfig.h    Scenario.h 
	@echo Compiling ScenarioConfig.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ScenarioConfig.o ScenarioConfig.cpp




Scenario.o : Scenario.cpp Scenario.h    ScenarioConfig.h Controller.h 
	@echo Compiling Scenario.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Scenario.o Scenario.cpp




Parameter.o : Parameter.cpp Parameter.h    Controller.h 
	@echo Compiling Parameter.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Parameter.o Parameter.cpp




Generator.o : Generator.cpp Generator.h    Continuous.h Filter.h 
	@echo Compiling Generator.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Generator.o Generator.cpp




Filter.o : Filter.cpp Filter.h    Continuous.h 
	@echo Compiling Filter.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Filter.o Filter.cpp




EDRCalculate.o : EDRCalculate.cpp EDRCalculate.h    Continuous.h Filter.h 
	@echo Compiling EDRCalculate.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o EDRCalculate.o EDRCalculate.cpp




ECGCalculate.o : ECGCalculate.cpp ECGCalculate.h    Continuous.h Filter.h 
	@echo Compiling ECGCalculate.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ECGCalculate.o ECGCalculate.cpp




PulseCalculate.o : PulseCalculate.cpp PulseCalculate.h    Continuous.h Filter.h 
	@echo Compiling PulseCalculate.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o PulseCalculate.o PulseCalculate.cpp




PatientModel.o : PatientModel.cpp PatientModel.h    Continuous.h Record.h Signal.h ExtInputs.h Medicine.h ExtOutAnalogue.h ExtOutDigital.h PulseUpdater.h Waveform.h Generator.h RecordIterator.h 
	@echo Compiling PatientModel.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o PatientModel.o PatientModel.cpp




NormalGenerator.o : NormalGenerator.cpp NormalGenerator.h    Continuous.h EDRCalculate.h ECGCalculate.h PulseCalculate.h Generator.h Filter.h 
	@echo Compiling NormalGenerator.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o NormalGenerator.o NormalGenerator.cpp




InfusionGenerator.o : InfusionGenerator.cpp InfusionGenerator.h    Continuous.h ECGCalculate.h EDRCalculate.h PulseCalculate.h InfECGCalculate.h Generator.h Filter.h 
	@echo Compiling InfusionGenerator.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o InfusionGenerator.o InfusionGenerator.cpp




Medicine.o : Medicine.cpp Medicine.h    Continuous.h 
	@echo Compiling Medicine.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Medicine.o Medicine.cpp




Record.o : Record.cpp Record.h    Continuous.h RecordIterator.h 
	@echo Compiling Record.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Record.o Record.cpp




TestContinous.o : TestContinous.cpp TestContinous.h    Continuous.h PatientModel.h Medicine.h NormalGenerator.h RecordProxy.h RecordWfdb.h RecordSimulate.h 
	@echo Compiling TestContinous.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TestContinous.o TestContinous.cpp




InfECGCalculate.o : InfECGCalculate.cpp InfECGCalculate.h    Continuous.h Filter.h 
	@echo Compiling InfECGCalculate.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o InfECGCalculate.o InfECGCalculate.cpp




RecordProxy.o : RecordProxy.cpp RecordProxy.h    Continuous.h RecordFile.h RecordIterator.h Record.h 
	@echo Compiling RecordProxy.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o RecordProxy.o RecordProxy.cpp




RecordFile.o : RecordFile.cpp RecordFile.h    Continuous.h RecordIterator.h Record.h 
	@echo Compiling RecordFile.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o RecordFile.o RecordFile.cpp




RecordIterator.o : RecordIterator.cpp RecordIterator.h    Continuous.h Record.h 
	@echo Compiling RecordIterator.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o RecordIterator.o RecordIterator.cpp




RecordWfdb.o : RecordWfdb.cpp RecordWfdb.h    Continuous.h RecordIterator.h RecordFile.h Record.h 
	@echo Compiling RecordWfdb.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o RecordWfdb.o RecordWfdb.cpp




RecordSimulate.o : RecordSimulate.cpp RecordSimulate.h    Continuous.h RecordIterator.h RecordFile.h Record.h 
	@echo Compiling RecordSimulate.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o RecordSimulate.o RecordSimulate.cpp




LCDScreen.o : LCDScreen.cpp LCDScreen.h    Waveform.h Controller.h Observer.h 
	@echo Compiling LCDScreen.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o LCDScreen.o LCDScreen.cpp




Observer.o : Observer.cpp Observer.h    
	@echo Compiling Observer.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Observer.o Observer.cpp




PulseUpdater.o : PulseUpdater.cpp PulseUpdater.h    ExtOutDigital.h 
	@echo Compiling PulseUpdater.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o PulseUpdater.o PulseUpdater.cpp




Continuous.o : Continuous.cpp Continuous.h    Generator.h Filter.h EDRCalculate.h ECGCalculate.h PulseCalculate.h PatientModel.h NormalGenerator.h InfusionGenerator.h Medicine.h Record.h TestContinous.h InfECGCalculate.h RecordProxy.h RecordFile.h RecordIterator.h RecordWfdb.h RecordSimulate.h 
	@echo Compiling Continuous.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Continuous.o Continuous.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
		@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################################
#                    Predefined linking instructions                               #
# INST_LIBS is included twice to solve bi-directional dependency between libraries #
####################################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) TargetComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) TargetComponent.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)



clean:
	@echo Cleanup
	$(RM) ExtInputs.o
	$(RM) ExtOutAnalogue.o
	$(RM) ExtOutDigital.o
	$(RM) Waveform.o
	$(RM) ECG.o
	$(RM) EDR.o
	$(RM) Pulse.o
	$(RM) Simulator.o
	$(RM) Control.o
	$(RM) Execute.o
	$(RM) Subject.o
	$(RM) Signal.o
	$(RM) Controller.o
	$(RM) ScenarioConfig.o
	$(RM) Scenario.o
	$(RM) Parameter.o
	$(RM) Generator.o
	$(RM) Filter.o
	$(RM) EDRCalculate.o
	$(RM) ECGCalculate.o
	$(RM) PulseCalculate.o
	$(RM) PatientModel.o
	$(RM) NormalGenerator.o
	$(RM) InfusionGenerator.o
	$(RM) Medicine.o
	$(RM) Record.o
	$(RM) TestContinous.o
	$(RM) InfECGCalculate.o
	$(RM) RecordProxy.o
	$(RM) RecordFile.o
	$(RM) RecordIterator.o
	$(RM) RecordWfdb.o
	$(RM) RecordSimulate.o
	$(RM) LCDScreen.o
	$(RM) Observer.o
	$(RM) PulseUpdater.o
	$(RM) Continuous.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)
	$(CLEAN_OBJ_DIR)
