/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Test4
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Test3.cpp
*********************************************************************/

//## auto_generated
#include "Test4.h"
//## dependency CommandCreator
template <class TheCommand> class CommandCreator;

//## auto_generated
#include "EmbeddedSystemX.h"
//## dependency ChMode
class ChMode;

//## dependency RunRealTime
#include "RunRealTime.h"
//## dependency ConfigurationEnded
class ConfigurationEnded;

//## dependency Creator
class Creator;

//## dependency Initialized
class Initialized;

//## dependency Stop
class Stop;

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

//## dependency Configure
class Configure;

//## dependency Exit
class Exit;

//## dependency Restart
class Restart;

//## dependency Resume
class Resume;

//## dependency SelfTestFailed
class SelfTestFailed;

//## dependency SelfTestOk
class SelfTestOk;

//## dependency Start
class Start;

//## dependency Suspend
class Suspend;

//## package Application::Discrete

//## class Test4
Test4::Test4() {
}

Test4::~Test4() {
}

void Test4::CreateTestCommands() {
    //#[ operation CreateTestCommands()
    Display(">>>>>> CreateTest4 <<<<<<");
    addItsCommand(pSelfTestOkCreator->CreateCommand());
    addItsCommand(pInitializedCreator->CreateCommand());
    addItsCommand(pStartCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); // Test events in mode 2
    addItsCommand(pSimulateCreator->CreateCommand()); 
    //addItsCommand(pchModeCreator->CreateCommand());
    //addItsCommand(pRunRealTimeCreator->CreateCommand());
    //addItsCommand(pchModeCreator->CreateCommand());
    //addItsCommand(pSimulateCreator->CreateCommand());
    //addItsCommand(pRestartCreator->CreateCommand());
    //#]
}

Test4::Test4(EmbeddedSystemX* esx) {
    //#[ operation Test3(EmbeddedSystemX*)
    itsEmbeddedSystemX = esx;
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Test4.cpp
*********************************************************************/
