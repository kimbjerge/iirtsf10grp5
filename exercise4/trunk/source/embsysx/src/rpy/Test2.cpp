/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Test2
//!	Generated Date	: Wed, 3, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/Test2.cpp
*********************************************************************/

//## auto_generated
#include "Test2.h"
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
//## dependency ConfigurationEnded
class ConfigurationEnded;

//## dependency SelfTestOk
class SelfTestOk;

//## dependency Suspend
class Suspend;

//## dependency eventX
class eventX;

//## dependency Start
class Start;

//## dependency Stop
class Stop;

//## dependency Exit
class Exit;

//## dependency ChMode
class ChMode;

//## dependency Configure
class Configure;

//## dependency Creator
class Creator;

//## dependency Initialized
class Initialized;

//## dependency Restart
class Restart;

//## dependency Resume
class Resume;

//## dependency SelfTestFailed
class SelfTestFailed;

//## dependency eventY
class eventY;

//## package Discrete

//## class Test2
Test2::Test2() {
}

Test2::~Test2() {
}

void Test2::CreateTestCommands() {
    //#[ operation CreateTestCommands()
    Display("CreateTest2");
    addItsCommand(pSelfTestOkCreator->CreateCommand());
    addItsCommand(pInitializedCreator->CreateCommand());
    addItsCommand(pConfigureCreator->CreateCommand()); 
    addItsCommand(pConfigurationEndedCreator->CreateCommand()); 
    addItsCommand(pStartCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pSuspendCreator->CreateCommand()); 
    addItsCommand(pResumeCreator->CreateCommand());     
    addItsCommand(peventXCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(peventXCreator->CreateCommand()); 
    addItsCommand(peventYCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(peventXCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(peventXCreator->CreateCommand()); 
    addItsCommand(pRestartCreator->CreateCommand()); 
    //#]
}

Test2::Test2(EmbeddedSystemX* esx) {
    //#[ operation Test2(EmbeddedSystemX*)
    itsEmbeddedSystemX = esx;
    //#]
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/Test2.cpp
*********************************************************************/
