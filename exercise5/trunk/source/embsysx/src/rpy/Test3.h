/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Test3
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Test3.h
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
//## auto_generated
#include "Discrete.h"
//## auto_generated
class EmbeddedSystemX;

//## package Application::Discrete

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
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Test3.h
*********************************************************************/
