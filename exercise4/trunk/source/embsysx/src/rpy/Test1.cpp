/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Test1
//!	Generated Date	: Wed, 3, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/Test1.cpp
*********************************************************************/

//## auto_generated
#include "Test1.h"
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
//## dependency eventX
#include "eventX.h"
//## dependency eventY
#include "eventY.h"
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
//## dependency CommandCreator
template <class TheCommand> class CommandCreator;

//## dependency ChMode
class ChMode;

//## dependency Initialized
class Initialized;

//## dependency Exit
class Exit;

//## dependency Resume
class Resume;

//## dependency Stop
class Stop;

//## dependency Creator
class Creator;

//## dependency Restart
class Restart;

//## dependency Suspend
class Suspend;

//## dependency eventY
class eventY;

//## dependency ConfigurationEnded
class ConfigurationEnded;

//## dependency Configure
class Configure;

//## dependency SelfTestFailed
class SelfTestFailed;

//## dependency SelfTestOk
class SelfTestOk;

//## dependency Start
class Start;

//## dependency eventX
class eventX;

//## package Discrete

//## class Test1
Test1::Test1() {
}

Test1::~Test1() {
}

void Test1::CreateTestCommands() {
    //#[ operation CreateTestCommands()
    Display("CreateTest1"); 
    addItsCommand(pSelfTestOkCreator->CreateCommand());
    addItsCommand(pInitializedCreator->CreateCommand());
    addItsCommand(pStartCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pStopCreator->CreateCommand()); 
    addItsCommand(pStartCreator->CreateCommand());     
    //#]
}

Test1::Test1(EmbeddedSystemX* esx) {
    //#[ operation Test1(EmbeddedSystemX*)
    itsEmbeddedSystemX = esx;
    //#]
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/Test1.cpp
*********************************************************************/
