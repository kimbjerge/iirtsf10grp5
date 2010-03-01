/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Creator
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Creator.h
*********************************************************************/

#ifndef Creator_H
#define Creator_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Default.h"
//## operation CreateCommand()
class Command;

//## package Default

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
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Creator.h
*********************************************************************/
