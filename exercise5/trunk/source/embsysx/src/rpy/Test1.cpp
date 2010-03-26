/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Test1
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Test1.cpp
*********************************************************************/

//## auto_generated
#include "Test1.h"
//## auto_generated
#include "EmbeddedSystemX.h"
//## dependency ChMode
class ChMode;

//## dependency Initialized
class Initialized;

//## dependency SelfTestFailed
class SelfTestFailed;

//## dependency CommandCreator
template <class TheCommand> class CommandCreator;

//## dependency Exit
class Exit;

//## dependency ConfigurationEnded
class ConfigurationEnded;

//## dependency Configure
class Configure;

//## dependency Start
class Start;

//## dependency Creator
class Creator;

//## dependency Restart
class Restart;

//## dependency Resume
class Resume;

//## dependency RunRealTime
#include "RunRealTime.h"
//## dependency SelfTestOk
class SelfTestOk;

//## dependency Simulate
#include "Simulate.h"
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
//## dependency RunRealTime
class RunRealTime;

//## dependency Simulate
class Simulate;

//## dependency Stop
class Stop;

//## dependency Suspend
class Suspend;

//## package Application::Discrete

//## class Test1
Test1::Test1() {
}

Test1::~Test1() {
}

void Test1::CreateTestCommands() {
    //#[ operation CreateTestCommands()
    Display(">>>>>> CreateTest1 <<<<<<"); 
    addItsCommand(pSelfTestOkCreator->CreateCommand());
    addItsCommand(pInitializedCreator->CreateCommand());
    addItsCommand(pStartCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pStopCreator->CreateCommand()); 
    addItsCommand(pRestartCreator->CreateCommand());     
    //#]
}

Test1::Test1(EmbeddedSystemX* esx) {
    //#[ operation Test1(EmbeddedSystemX*)
    itsEmbeddedSystemX = esx;
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Test1.cpp
*********************************************************************/
