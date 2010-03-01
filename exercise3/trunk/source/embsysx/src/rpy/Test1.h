/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Test1
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Test1.h
*********************************************************************/

#ifndef Test1_H
#define Test1_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Default.h"
//## class Test1
#include "TestCase.h"
//## auto_generated
class Command;

//## dependency Restart
class Restart;

//## auto_generated
class EmbeddedSystemX;

//## package Default

//## class Test1
class Test1 : public TestCase {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Test1();
    
    //## auto_generated
    ~Test1();
    
    ////    Operations    ////

protected :

    //## operation CreateTestCommands()
    void CreateTestCommands();

public :

    //## operation Test1(EmbeddedSystemX*)
    Test1(EmbeddedSystemX* esx);
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Test1.h
*********************************************************************/
