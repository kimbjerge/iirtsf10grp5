
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

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/Linux

ADDITIONAL_OBJS=

OBJS= \
  EmbeddedSystemX.o \
  ESXState.o \
  PowerOnSelfTest.o \
  Failure.o \
  Initializing.o \
  Operational.o \
  RealTimeLoop.o \
  Ready.o \
  Configuration.o \
  Suspended.o \
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
  eventX.o \
  eventY.o \
  SelfTestOk.o \
  Creator.o \
  TestCase.o \
  Tester.o \
  Test1.o \
  Test2.o \
  Test3.o




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






EmbeddedSystemX.o : EmbeddedSystemX.cpp EmbeddedSystemX.h    ESXState.h Command.h PowerOnSelfTest.h 
	@echo Compiling EmbeddedSystemX.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o EmbeddedSystemX.o EmbeddedSystemX.cpp




ESXState.o : ESXState.cpp ESXState.h    EmbeddedSystemX.h 
	@echo Compiling ESXState.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ESXState.o ESXState.cpp




PowerOnSelfTest.o : PowerOnSelfTest.cpp PowerOnSelfTest.h    Failure.h Initializing.h ESXState.h EmbeddedSystemX.h 
	@echo Compiling PowerOnSelfTest.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o PowerOnSelfTest.o PowerOnSelfTest.cpp




Failure.o : Failure.cpp Failure.h    PowerOnSelfTest.h ESXState.h EmbeddedSystemX.h 
	@echo Compiling Failure.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Failure.o Failure.cpp




Initializing.o : Initializing.cpp Initializing.h    Ready.h ESXState.h EmbeddedSystemX.h 
	@echo Compiling Initializing.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Initializing.o Initializing.cpp




Operational.o : Operational.cpp Operational.h    PowerOnSelfTest.h Ready.h EmbeddedSystemX.h ESXState.h 
	@echo Compiling Operational.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Operational.o Operational.cpp




RealTimeLoop.o : RealTimeLoop.cpp RealTimeLoop.h    Ready.h PowerOnSelfTest.h Mode1.h Suspended.h ESXState.h EmbeddedSystemX.h Operational.h 
	@echo Compiling RealTimeLoop.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o RealTimeLoop.o RealTimeLoop.cpp




Ready.o : Ready.cpp Ready.h    Mode1.h Configuration.h PowerOnSelfTest.h ESXState.h EmbeddedSystemX.h Operational.h 
	@echo Compiling Ready.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Ready.o Ready.cpp




Configuration.o : Configuration.cpp Configuration.h    Ready.h ESXState.h EmbeddedSystemX.h Operational.h 
	@echo Compiling Configuration.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Configuration.o Configuration.cpp




Suspended.o : Suspended.cpp Suspended.h    Ready.h Mode1.h PowerOnSelfTest.h ESXState.h EmbeddedSystemX.h Operational.h 
	@echo Compiling Suspended.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Suspended.o Suspended.cpp




Mode1.o : Mode1.cpp Mode1.h    Mode2.h ESXState.h EmbeddedSystemX.h RealTimeLoop.h Operational.h 
	@echo Compiling Mode1.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Mode1.o Mode1.cpp




Mode2.o : Mode2.cpp Mode2.h    Mode3.h ESXState.h EmbeddedSystemX.h RealTimeLoop.h Operational.h 
	@echo Compiling Mode2.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Mode2.o Mode2.cpp




Mode3.o : Mode3.cpp Mode3.h    Mode1.h ESXState.h EmbeddedSystemX.h RealTimeLoop.h Operational.h 
	@echo Compiling Mode3.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Mode3.o Mode3.cpp




TestUser.o : TestUser.cpp TestUser.h    EmbeddedSystemX.h SelfTestFailed.h SelfTestOk.h Start.h Suspend.h Restart.h Exit.h Initialized.h Configure.h ConfigurationEnded.h Stop.h Resume.h ChMode.h 
	@echo Compiling TestUser.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TestUser.o TestUser.cpp




Command.o : Command.cpp Command.h    ESXState.h EmbeddedSystemX.h 
	@echo Compiling Command.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Command.o Command.cpp




SelfTestFailed.o : SelfTestFailed.cpp SelfTestFailed.h    ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling SelfTestFailed.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o SelfTestFailed.o SelfTestFailed.cpp




Initialized.o : Initialized.cpp Initialized.h    ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling Initialized.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Initialized.o Initialized.cpp




Configure.o : Configure.cpp Configure.h    ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling Configure.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Configure.o Configure.cpp




ConfigurationEnded.o : ConfigurationEnded.cpp ConfigurationEnded.h    ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling ConfigurationEnded.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ConfigurationEnded.o ConfigurationEnded.cpp




Stop.o : Stop.cpp Stop.h    ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling Stop.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Stop.o Stop.cpp




Suspend.o : Suspend.cpp Suspend.h    ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling Suspend.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Suspend.o Suspend.cpp




Resume.o : Resume.cpp Resume.h    ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling Resume.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Resume.o Resume.cpp




Start.o : Start.cpp Start.h    ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling Start.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Start.o Start.cpp




Restart.o : Restart.cpp Restart.h    ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling Restart.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Restart.o Restart.cpp




ChMode.o : ChMode.cpp ChMode.h    ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling ChMode.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ChMode.o ChMode.cpp




Exit.o : Exit.cpp Exit.h    ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling Exit.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Exit.o Exit.cpp




ConfigX.o : ConfigX.cpp ConfigX.h    ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling ConfigX.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ConfigX.o ConfigX.cpp




eventX.o : eventX.cpp eventX.h    ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling eventX.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o eventX.o eventX.cpp




eventY.o : eventY.cpp eventY.h    ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling eventY.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o eventY.o eventY.cpp




SelfTestOk.o : SelfTestOk.cpp SelfTestOk.h    ESXState.h EmbeddedSystemX.h Command.h 
	@echo Compiling SelfTestOk.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o SelfTestOk.o SelfTestOk.cpp




Creator.o : Creator.cpp Creator.h    Command.h 
	@echo Compiling Creator.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Creator.o Creator.cpp




TestCase.o : TestCase.cpp TestCase.h    Command.h EmbeddedSystemX.h SelfTestOk.h Creator.h CommandCreator.h Initialized.h Restart.h Exit.h Configure.h ConfigurationEnded.h Stop.h Start.h Suspend.h Resume.h SelfTestFailed.h ChMode.h eventX.h eventY.h 
	@echo Compiling TestCase.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TestCase.o TestCase.cpp




Tester.o : Tester.cpp Tester.h    TestCase.h EmbeddedSystemX.h Test1.h Test2.h Test3.h 
	@echo Compiling Tester.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Tester.o Tester.cpp




Test1.o : Test1.cpp Test1.h    CommandCreator.h SelfTestOk.h Creator.h Initialized.h Restart.h ConfigurationEnded.h Start.h Resume.h eventY.h Configure.h Stop.h ChMode.h SelfTestFailed.h Exit.h Suspend.h eventX.h EmbeddedSystemX.h TestCase.h Command.h 
	@echo Compiling Test1.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Test1.o Test1.cpp




Test2.o : Test2.cpp Test2.h    CommandCreator.h SelfTestOk.h Restart.h Creator.h Initialized.h Suspend.h ConfigurationEnded.h Start.h Resume.h eventY.h Configure.h Stop.h ChMode.h SelfTestFailed.h Exit.h eventX.h EmbeddedSystemX.h TestCase.h Command.h 
	@echo Compiling Test2.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Test2.o Test2.cpp




Test3.o : Test3.cpp Test3.h    CommandCreator.h SelfTestOk.h EmbeddedSystemX.h TestCase.h Command.h 
	@echo Compiling Test3.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Test3.o Test3.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
		@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################################
#                    Predefined linking instructions                               #
# INST_LIBS is included twice to solve bi-directional dependency between libraries #
####################################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)



clean:
	@echo Cleanup
	$(RM) EmbeddedSystemX.o
	$(RM) ESXState.o
	$(RM) PowerOnSelfTest.o
	$(RM) Failure.o
	$(RM) Initializing.o
	$(RM) Operational.o
	$(RM) RealTimeLoop.o
	$(RM) Ready.o
	$(RM) Configuration.o
	$(RM) Suspended.o
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
	$(RM) eventX.o
	$(RM) eventY.o
	$(RM) SelfTestOk.o
	$(RM) Creator.o
	$(RM) TestCase.o
	$(RM) Tester.o
	$(RM) Test1.o
	$(RM) Test2.o
	$(RM) Test3.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)
	$(CLEAN_OBJ_DIR)
