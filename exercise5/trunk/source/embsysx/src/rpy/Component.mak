
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

TARGET_NAME=Component

all : $(TARGET_NAME)$(EXE_EXT) Component.mak

TARGET_MAIN=MainComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/Linux

ADDITIONAL_OBJS=

OBJS= \
  RealTimeThread.o \
  EventStrategy.o \
  M1Strategy.o \
  M2Strategy.o \
  M3Strategy.o \
  Event.o \
  EventX.o \
  EventY.o \
  EmbeddedSystemX.o \
  ESXState.o \
  PowerOnSelfTest.o \
  Failure.o \
  Initializing.o \
  RealTimeLoop.o \
  Configuration.o \
  Mode1.o \
  Mode2.o \
  Mode3.o \
  TestUser.o \
  Command.o \
  SelfTestFailed.o \
  Initialized.o \
  Configure.o \
  ConfigurationEnded.o \
  Stop.o \
  Suspend.o \
  Resume.o \
  Start.o \
  Restart.o \
  ChMode.o \
  Exit.o \
  ConfigX.o \
  SelfTestOk.o \
  Creator.o \
  TestCase.o \
  Tester.o \
  Test1.o \
  Test2.o \
  Test3.o \
  Simulate.o \
  RunRealTime.o \
  Ready.o \
  Operational.o \
  Suspended.o \
  ModeSettingAndState.o \
  SimulateAndState.o \
  Simulation.o \
  RealTimeExecution.o \
  Continuous.o \
  Discrete.o




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






RealTimeThread.o : RealTimeThread.cpp RealTimeThread.h    Continuous.h EventStrategy.h Event.h 
	@echo Compiling RealTimeThread.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o RealTimeThread.o RealTimeThread.cpp




EventStrategy.o : EventStrategy.cpp EventStrategy.h    Continuous.h 
	@echo Compiling EventStrategy.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o EventStrategy.o EventStrategy.cpp




M1Strategy.o : M1Strategy.cpp M1Strategy.h    Continuous.h EventStrategy.h 
	@echo Compiling M1Strategy.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o M1Strategy.o M1Strategy.cpp




M2Strategy.o : M2Strategy.cpp M2Strategy.h    Continuous.h EventStrategy.h 
	@echo Compiling M2Strategy.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o M2Strategy.o M2Strategy.cpp




M3Strategy.o : M3Strategy.cpp M3Strategy.h    Continuous.h EventStrategy.h 
	@echo Compiling M3Strategy.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o M3Strategy.o M3Strategy.cpp




Event.o : Event.cpp Event.h    Continuous.h EventStrategy.h 
	@echo Compiling Event.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Event.o Event.cpp




EventX.o : EventX.cpp EventX.h    Continuous.h EventStrategy.h Event.h 
	@echo Compiling EventX.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o EventX.o EventX.cpp




EventY.o : EventY.cpp EventY.h    Continuous.h EventStrategy.h Event.h 
	@echo Compiling EventY.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o EventY.o EventY.cpp




EmbeddedSystemX.o : EmbeddedSystemX.cpp EmbeddedSystemX.h    Discrete.h ESXState.h RealTimeThread.h Command.h PowerOnSelfTest.h EventStrategy.h 
	@echo Compiling EmbeddedSystemX.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o EmbeddedSystemX.o EmbeddedSystemX.cpp




ESXState.o : ESXState.cpp ESXState.h    Discrete.h EmbeddedSystemX.h 
	@echo Compiling ESXState.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ESXState.o ESXState.cpp




PowerOnSelfTest.o : PowerOnSelfTest.cpp PowerOnSelfTest.h    Discrete.h ESXState.h Failure.h Initializing.h EmbeddedSystemX.h 
	@echo Compiling PowerOnSelfTest.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o PowerOnSelfTest.o PowerOnSelfTest.cpp




Failure.o : Failure.cpp Failure.h    Discrete.h PowerOnSelfTest.h ESXState.h EmbeddedSystemX.h 
	@echo Compiling Failure.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Failure.o Failure.cpp




Initializing.o : Initializing.cpp Initializing.h    Discrete.h Operational.h ESXState.h EmbeddedSystemX.h 
	@echo Compiling Initializing.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Initializing.o Initializing.cpp




RealTimeLoop.o : RealTimeLoop.cpp RealTimeLoop.h    Discrete.h ModeSettingAndState.h SimulateAndState.h PowerOnSelfTest.h RealTimeExecution.h Ready.h Mode1.h Suspended.h ESXState.h EmbeddedSystemX.h Operational.h 
	@echo Compiling RealTimeLoop.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o RealTimeLoop.o RealTimeLoop.cpp




Configuration.o : Configuration.cpp Configuration.h    Discrete.h Ready.h ESXState.h EmbeddedSystemX.h Operational.h 
	@echo Compiling Configuration.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Configuration.o Configuration.cpp




Mode1.o : Mode1.cpp Mode1.h    Discrete.h M1Strategy.h Mode2.h PowerOnSelfTest.h ModeSettingAndState.h RealTimeLoop.h EmbeddedSystemX.h EventStrategy.h 
	@echo Compiling Mode1.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Mode1.o Mode1.cpp




Mode2.o : Mode2.cpp Mode2.h    Discrete.h M2Strategy.h Mode3.h PowerOnSelfTest.h ModeSettingAndState.h RealTimeLoop.h EmbeddedSystemX.h EventStrategy.h 
	@echo Compiling Mode2.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Mode2.o Mode2.cpp




Mode3.o : Mode3.cpp Mode3.h    Discrete.h M3Strategy.h PowerOnSelfTest.h Mode1.h ModeSettingAndState.h RealTimeLoop.h EmbeddedSystemX.h EventStrategy.h 
	@echo Compiling Mode3.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Mode3.o Mode3.cpp




TestUser.o : TestUser.cpp TestUser.h    Discrete.h EmbeddedSystemX.h SelfTestFailed.h SelfTestOk.h Start.h Suspend.h Restart.h Exit.h Initialized.h Configure.h ConfigurationEnded.h Stop.h Resume.h ChMode.h 
	@echo Compiling TestUser.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TestUser.o TestUser.cpp




Command.o : Command.cpp Command.h    Discrete.h ESXState.h EmbeddedSystemX.h 
	@echo Compiling Command.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Command.o Command.cpp




SelfTestFailed.o : SelfTestFailed.cpp SelfTestFailed.h    Discrete.h ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling SelfTestFailed.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o SelfTestFailed.o SelfTestFailed.cpp




Initialized.o : Initialized.cpp Initialized.h    Discrete.h ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling Initialized.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Initialized.o Initialized.cpp




Configure.o : Configure.cpp Configure.h    Discrete.h ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling Configure.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Configure.o Configure.cpp




ConfigurationEnded.o : ConfigurationEnded.cpp ConfigurationEnded.h    Discrete.h ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling ConfigurationEnded.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ConfigurationEnded.o ConfigurationEnded.cpp




Stop.o : Stop.cpp Stop.h    Discrete.h ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling Stop.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Stop.o Stop.cpp




Suspend.o : Suspend.cpp Suspend.h    Discrete.h ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling Suspend.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Suspend.o Suspend.cpp




Resume.o : Resume.cpp Resume.h    Discrete.h ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling Resume.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Resume.o Resume.cpp




Start.o : Start.cpp Start.h    Discrete.h ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling Start.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Start.o Start.cpp




Restart.o : Restart.cpp Restart.h    Discrete.h ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling Restart.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Restart.o Restart.cpp




ChMode.o : ChMode.cpp ChMode.h    Discrete.h ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling ChMode.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ChMode.o ChMode.cpp




Exit.o : Exit.cpp Exit.h    Discrete.h ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling Exit.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Exit.o Exit.cpp




ConfigX.o : ConfigX.cpp ConfigX.h    Discrete.h ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling ConfigX.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ConfigX.o ConfigX.cpp




SelfTestOk.o : SelfTestOk.cpp SelfTestOk.h    Discrete.h ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling SelfTestOk.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o SelfTestOk.o SelfTestOk.cpp




Creator.o : Creator.cpp Creator.h    Discrete.h Command.h 
	@echo Compiling Creator.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Creator.o Creator.cpp




TestCase.o : TestCase.cpp TestCase.h    Discrete.h Command.h EmbeddedSystemX.h SelfTestOk.h Creator.h CommandCreator.h Initialized.h Restart.h Exit.h Configure.h ConfigurationEnded.h Stop.h Start.h Suspend.h Resume.h SelfTestFailed.h ChMode.h Simulate.h RunRealTime.h 
	@echo Compiling TestCase.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TestCase.o TestCase.cpp




Tester.o : Tester.cpp Tester.h    Discrete.h TestCase.h EmbeddedSystemX.h Test1.h Test2.h Test3.h 
	@echo Compiling Tester.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Tester.o Tester.cpp




Test1.o : Test1.cpp Test1.h    Discrete.h CommandCreator.h SelfTestOk.h Creator.h Initialized.h Restart.h ConfigurationEnded.h Start.h Resume.h Configure.h Stop.h ChMode.h SelfTestFailed.h Exit.h Suspend.h EmbeddedSystemX.h TestCase.h Command.h 
	@echo Compiling Test1.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Test1.o Test1.cpp




Test2.o : Test2.cpp Test2.h    Discrete.h CommandCreator.h SelfTestOk.h Restart.h Creator.h Initialized.h Suspend.h ConfigurationEnded.h Start.h Resume.h Configure.h Stop.h ChMode.h SelfTestFailed.h Exit.h EmbeddedSystemX.h TestCase.h Command.h 
	@echo Compiling Test2.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Test2.o Test2.cpp




Test3.o : Test3.cpp Test3.h    Discrete.h CommandCreator.h SelfTestOk.h Start.h Creator.h SelfTestFailed.h ConfigurationEnded.h Restart.h Exit.h Stop.h Configure.h Resume.h ChMode.h Initialized.h Suspend.h RunRealTime.h Simulate.h EmbeddedSystemX.h TestCase.h Command.h 
	@echo Compiling Test3.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Test3.o Test3.cpp




Simulate.o : Simulate.cpp Simulate.h    Discrete.h ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling Simulate.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Simulate.o Simulate.cpp




RunRealTime.o : RunRealTime.cpp RunRealTime.h    Discrete.h ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling RunRealTime.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o RunRealTime.o RunRealTime.cpp




Ready.o : Ready.cpp Ready.h    Discrete.h Configuration.h PowerOnSelfTest.h RealTimeLoop.h ESXState.h EmbeddedSystemX.h Operational.h 
	@echo Compiling Ready.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Ready.o Ready.cpp




Operational.o : Operational.cpp Operational.h    Discrete.h PowerOnSelfTest.h Ready.h EmbeddedSystemX.h ESXState.h 
	@echo Compiling Operational.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Operational.o Operational.cpp




Suspended.o : Suspended.cpp Suspended.h    Discrete.h RealTimeLoop.h ESXState.h EmbeddedSystemX.h Operational.h 
	@echo Compiling Suspended.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Suspended.o Suspended.cpp




ModeSettingAndState.o : ModeSettingAndState.cpp ModeSettingAndState.h    Discrete.h RealTimeLoop.h EmbeddedSystemX.h 
	@echo Compiling ModeSettingAndState.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ModeSettingAndState.o ModeSettingAndState.cpp




SimulateAndState.o : SimulateAndState.cpp SimulateAndState.h    Discrete.h RealTimeLoop.h 
	@echo Compiling SimulateAndState.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o SimulateAndState.o SimulateAndState.cpp




Simulation.o : Simulation.cpp Simulation.h    Discrete.h RealTimeExecution.h SimulateAndState.h RealTimeLoop.h 
	@echo Compiling Simulation.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Simulation.o Simulation.cpp




RealTimeExecution.o : RealTimeExecution.cpp RealTimeExecution.h    Discrete.h Simulation.h SimulateAndState.h RealTimeLoop.h 
	@echo Compiling RealTimeExecution.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o RealTimeExecution.o RealTimeExecution.cpp




Continuous.o : Continuous.cpp Continuous.h    RealTimeThread.h EventStrategy.h M1Strategy.h M2Strategy.h M3Strategy.h Event.h EventX.h EventY.h 
	@echo Compiling Continuous.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Continuous.o Continuous.cpp




Discrete.o : Discrete.cpp Discrete.h    EmbeddedSystemX.h ESXState.h PowerOnSelfTest.h Failure.h Initializing.h RealTimeLoop.h Configuration.h Mode1.h Mode2.h Mode3.h TestUser.h Command.h SelfTestFailed.h Initialized.h Configure.h ConfigurationEnded.h Stop.h Suspend.h Resume.h Start.h Restart.h ChMode.h Exit.h ConfigX.h SelfTestOk.h Creator.h CommandCreator.h TestCase.h Tester.h Test1.h Test2.h Test3.h Simulate.h RunRealTime.h Ready.h Operational.h Suspended.h ModeSettingAndState.h SimulateAndState.h Simulation.h RealTimeExecution.h Continuous.h 
	@echo Compiling Discrete.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Discrete.o Discrete.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
		@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################################
#                    Predefined linking instructions                               #
# INST_LIBS is included twice to solve bi-directional dependency between libraries #
####################################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) Component.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) Component.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)



clean:
	@echo Cleanup
	$(RM) RealTimeThread.o
	$(RM) EventStrategy.o
	$(RM) M1Strategy.o
	$(RM) M2Strategy.o
	$(RM) M3Strategy.o
	$(RM) Event.o
	$(RM) EventX.o
	$(RM) EventY.o
	$(RM) EmbeddedSystemX.o
	$(RM) ESXState.o
	$(RM) PowerOnSelfTest.o
	$(RM) Failure.o
	$(RM) Initializing.o
	$(RM) RealTimeLoop.o
	$(RM) Configuration.o
	$(RM) Mode1.o
	$(RM) Mode2.o
	$(RM) Mode3.o
	$(RM) TestUser.o
	$(RM) Command.o
	$(RM) SelfTestFailed.o
	$(RM) Initialized.o
	$(RM) Configure.o
	$(RM) ConfigurationEnded.o
	$(RM) Stop.o
	$(RM) Suspend.o
	$(RM) Resume.o
	$(RM) Start.o
	$(RM) Restart.o
	$(RM) ChMode.o
	$(RM) Exit.o
	$(RM) ConfigX.o
	$(RM) SelfTestOk.o
	$(RM) Creator.o
	$(RM) TestCase.o
	$(RM) Tester.o
	$(RM) Test1.o
	$(RM) Test2.o
	$(RM) Test3.o
	$(RM) Simulate.o
	$(RM) RunRealTime.o
	$(RM) Ready.o
	$(RM) Operational.o
	$(RM) Suspended.o
	$(RM) ModeSettingAndState.o
	$(RM) SimulateAndState.o
	$(RM) Simulation.o
	$(RM) RealTimeExecution.o
	$(RM) Continuous.o
	$(RM) Discrete.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)
	$(CLEAN_OBJ_DIR)
