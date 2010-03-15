/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Creator
//!	Generated Date	: Mon, 15, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Creator.h
*********************************************************************/

#ifndef Creator_H
#define Creator_H

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
//## auto_generated
#include "Discrete.h"
//## operation CreateCommand()
class Command;

//## package Discrete

//## class Creator
class Creator {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Creator();
    
    //## auto_generated
    virtual ~Creator() = 0;
    
    ////    Operations    ////
    
    //## operation CreateCommand()
    virtual Command* CreateCommand() = 0;
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise4/source/embsysx/src/rpy/Creator.h
*********************************************************************/
