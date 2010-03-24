/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Test3
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Test3.cpp
*********************************************************************/

//## auto_generated
#include "Test3.h"
//## dependency CommandCreator
template <class TheCommand> class CommandCreator;

//## auto_generated
#include "EmbeddedSystemX.h"
//## dependency ChMode
#include "ChMode.h"
//## dependency ConfigurationEnded
#include "ConfigurationEnded.h"
//## dependency Configure
#include "Configure.h"
//## dependency Creator
#include "Creator.h"
//## dependency Exit
#include "Exit.h"
//## dependency Initialized
#include "Initialized.h"
//## dependency Restart
#include "Restart.h"
//## dependency Resume
#include "Resume.h"
//## dependency SelfTestFailed
#include "SelfTestFailed.h"
//## dependency SelfTestOk
#include "SelfTestOk.h"
//## dependency Start
#include "Start.h"
//## dependency Stop
#include "Stop.h"
//## dependency Suspend
#include "Suspend.h"
//## dependency SelfTestOk
class SelfTestOk;

//## dependency ConfigurationEnded
class ConfigurationEnded;

//## dependency Configure
class Configure;

//## dependency Restart
class Restart;

//## dependency Resume
class Resume;

//## dependency Suspend
class Suspend;

//## dependency ChMode
class ChMode;

//## dependency Creator
class Creator;

//## dependency Exit
class Exit;

//## dependency Initialized
class Initialized;

//## dependency SelfTestFailed
class SelfTestFailed;

//## dependency Start
class Start;

//## dependency Stop
class Stop;

//## package Discrete

//## class Test3
Test3::Test3() {
}

Test3::~Test3() {
}

void Test3::CreateTestCommands() {
    //#[ operation CreateTestCommands()
    Display("CreateTest3");
    addItsCommand(pSelfTestOkCreator->CreateCommand());
    addItsCommand(pInitializedCreator->CreateCommand());
    addItsCommand(pStartCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pRestartCreator->CreateCommand()); 
    //#]
}

Test3::Test3(EmbeddedSystemX* esx) {
    //#[ operation Test3(EmbeddedSystemX*)
    itsEmbeddedSystemX = esx;
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Test3.cpp
*********************************************************************/