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

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Default.h"
//## class Test3
#include "TestCase.h"
//## auto_generated
class Command;

//## dependency Creator
class Creator;

//## dependency Initialized
class Initialized;

//## dependency Restart
class Restart;

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
