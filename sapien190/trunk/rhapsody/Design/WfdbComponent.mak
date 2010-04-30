
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug=-g
CPPCompileRelease=-O
LinkDebug=-g
LinkRelease=-O

ConfigurationCPPCompileSwitches=   $(INCLUDE_QUALIFIER). $(INCLUDE_QUALIFIER)$(OMROOT) $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/oxf $(DEFINE_QUALIFIER)CYGWIN $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) -Wno-write-strings $(CPPCompileDebug) -c

#########################################
###### Predefined macros ################
RM=/bin/rm -rf
INCLUDE_QUALIFIER=-I
DEFINE_QUALIFIER=-D
CC=g++-4
LIB_CMD=ar
LINK_CMD=g++-4
LIB_FLAGS=rvu
LINK_FLAGS= $(LinkDebug)   

#########################################
####### Context macros ##################

FLAGSFILE=
RULESFILE=
OMROOT="C:/Programmer/IBM/Rational/Rhapsody/7.5/Share"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.o
EXE_EXT=.exe
LIB_EXT=.a

INSTRUMENTATION=None

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=WfdbComponent

all : $(TARGET_NAME)$(EXE_EXT) WfdbComponent.mak

TARGET_MAIN=MainWfdbComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/Cygwin

ADDITIONAL_OBJS=

OBJS= \
  wfdb/annot.o \
  wfdb/calib.o \
  wfdb/edr.o \
  wfdb/signal.o \
  wfdb/wfdbinit.o \
  wfdb/wfdbio.o




#########################################
####### Predefined macros ###############
$(OBJS) :  $(INST_LIBS) $(OXF_LIBS)

ifeq ($(INSTRUMENTATION),Animation)

INST_FLAGS=$(DEFINE_QUALIFIER)OMANIMATOR $(DEFINE_QUALIFIER)__USE_W32_SOCKETS 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/cygwinaomanim$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/cygwinoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinomcomappl$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),Tracing)

INST_FLAGS=$(DEFINE_QUALIFIER)OMTRACER 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/cygwintomtrace$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinaomtrace$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/cygwinoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinomcomappl$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),None)

INST_FLAGS= 
INST_INCLUDES=
INST_LIBS=
OXF_LIBS=$(OMROOT)/LangCpp/lib/cygwinoxf$(LIB_EXT)
SOCK_LIB=-lws2_32

else
	@echo An invalid Instrumentation $(INSTRUMENTATION) is specified.
	exit
endif
endif
endif

.SUFFIXES: $(CPP_EXT)

#####################################################################
##################### Context dependencies and commands #############






wfdb/annot.o : wfdb/annot.c     
	@echo Compiling wfdb/annot.c
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o wfdb/annot.o wfdb/annot.c




wfdb/calib.o : wfdb/calib.c     
	@echo Compiling wfdb/calib.c
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o wfdb/calib.o wfdb/calib.c




wfdb/edr.o : wfdb/edr.c     
	@echo Compiling wfdb/edr.c
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o wfdb/edr.o wfdb/edr.c




wfdb/signal.o : wfdb/signal.c     
	@echo Compiling wfdb/signal.c
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o wfdb/signal.o wfdb/signal.c




wfdb/wfdbinit.o : wfdb/wfdbinit.c     
	@echo Compiling wfdb/wfdbinit.c
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o wfdb/wfdbinit.o wfdb/wfdbinit.c




wfdb/wfdbio.o : wfdb/wfdbio.c     
	@echo Compiling wfdb/wfdbio.c
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o wfdb/wfdbio.o wfdb/wfdbio.c







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS)
	@echo Compiling $(TARGET_MAIN)$(CPP_EXT)
	@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################
############## Predefined Instructions #############################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) WfdbComponent.mak
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) WfdbComponent.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS)



clean:
	@echo Cleanup
	$(RM) wfdb/annot.o
	$(RM) wfdb/calib.o
	$(RM) wfdb/edr.o
	$(RM) wfdb/signal.o
	$(RM) wfdb/wfdbinit.o
	$(RM) wfdb/wfdbio.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)

