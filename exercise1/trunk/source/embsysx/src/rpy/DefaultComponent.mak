
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
OMROOT="C:/Program Files/IBM/Rational/Rhapsody/7.5/Share"

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
  OpState.o \
  RTLState.o




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






EmbeddedSystemX.o : EmbeddedSystemX.cpp EmbeddedSystemX.h    ESXState.h 
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




Failure.o : Failure.cpp Failure.h    ESXState.h EmbeddedSystemX.h 
	@echo Compiling Failure.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Failure.o Failure.cpp




Initializing.o : Initializing.cpp Initializing.h    Operational.h ESXState.h EmbeddedSystemX.h 
	@echo Compiling Initializing.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Initializing.o Initializing.cpp




Operational.o : Operational.cpp Operational.h    OpState.h EmbeddedSystemX.h ESXState.h 
	@echo Compiling Operational.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Operational.o Operational.cpp




RealTimeLoop.o : RealTimeLoop.cpp RealTimeLoop.h    RTLState.h Operational.h OpState.h 
	@echo Compiling RealTimeLoop.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o RealTimeLoop.o RealTimeLoop.cpp




Ready.o : Ready.cpp Ready.h    RealTimeLoop.h OpState.h Operational.h 
	@echo Compiling Ready.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Ready.o Ready.cpp




Configuration.o : Configuration.cpp Configuration.h    OpState.h Operational.h 
	@echo Compiling Configuration.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Configuration.o Configuration.cpp




Suspended.o : Suspended.cpp Suspended.h    OpState.h Operational.h 
	@echo Compiling Suspended.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Suspended.o Suspended.cpp




Mode1.o : Mode1.cpp Mode1.h    Mode2.h RTLState.h RealTimeLoop.h 
	@echo Compiling Mode1.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Mode1.o Mode1.cpp




Mode2.o : Mode2.cpp Mode2.h    Mode3.h RTLState.h RealTimeLoop.h 
	@echo Compiling Mode2.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Mode2.o Mode2.cpp




Mode3.o : Mode3.cpp Mode3.h    Mode1.h RTLState.h RealTimeLoop.h 
	@echo Compiling Mode3.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Mode3.o Mode3.cpp




TestUser.o : TestUser.cpp TestUser.h    EmbeddedSystemX.h PowerOnSelfTest.h Operational.h RealTimeLoop.h Ready.h Mode1.h 
	@echo Compiling TestUser.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TestUser.o TestUser.cpp




OpState.o : OpState.cpp OpState.h    Operational.h 
	@echo Compiling OpState.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o OpState.o OpState.cpp




RTLState.o : RTLState.cpp RTLState.h    RealTimeLoop.h 
	@echo Compiling RTLState.cpp
	$(CREATE_OBJ_DIR)
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o RTLState.o RTLState.cpp







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
	$(RM) OpState.o
	$(RM) RTLState.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)
	$(CLEAN_OBJ_DIR)
