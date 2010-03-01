/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: CommandCreator
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/CommandCreator.h
*********************************************************************/

#ifndef CommandCreator_H
#define CommandCreator_H

//## auto_generated
#include <oxf/oxf.h>
//## operation CreateCommand()
#include "Command.h"
//## class CommandCreator
#include "Creator.h"
//## operation CreateCommand()
class Command;

//## package Default

//## class CommandCreator
template <class TheCommand> class CommandCreator : public Creator {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    CommandCreator();
    
    //## auto_generated
    virtual ~CommandCreator();
    
    ////    Operations    ////
    
    //## operation CreateCommand()
    virtual Command* CreateCommand();
};

//## package Default

//## class CommandCreator
template <class TheCommand> Command* CommandCreator<TheCommand>::CreateCommand() {
    //#[ operation CreateCommand()
    return new TheCommand();
    //#]
}

template <class TheCommand> CommandCreator<TheCommand>::CommandCreator() {
}

template <class TheCommand> CommandCreator<TheCommand>::~CommandCreator() {
}

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/CommandCreator.h
*********************************************************************/
