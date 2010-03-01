/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Test3
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Test3.h
*********************************************************************/

#ifndef Test3_H
#define Test3_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## class Test3
#include "TestCase.h"
//## dependency ChMode
class ChMode;

//## dependency ConfigurationEnded
class ConfigurationEnded;

//## dependency Configure
class Configure;

//## dependency Creator
class Creator;

//## dependency Exit
class Exit;

//## dependency Initialized
class Initialized;

//## dependency Restart
class Restart;

//## dependency Resume
class Resume;

//## dependency SelfTestFailed
class SelfTestFailed;

//## dependency Start
class Start;

//## dependency Stop
class Stop;

//## dependency Suspend
class Suspend;

//## dependency eventX
class eventX;

//## dependency eventY
class eventY;

//## auto_generated
class EmbeddedSystemX;

//## package Default

//## class Test3
class Test3 : public TestCase {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Test3();
    
    //## auto_generated
    ~Test3();
    
    ////    Operations    ////

protected :

    //## operation CreateTestCommands()
    void CreateTestCommands();

public :

    //## operation Test3(EmbeddedSystemX*)
    Test3(EmbeddedSystemX* esx);
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Test3.h
*********************************************************************/
