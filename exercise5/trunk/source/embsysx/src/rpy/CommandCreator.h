/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: CommandCreator
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/CommandCreator.h
*********************************************************************/

#ifndef CommandCreator_H
#define CommandCreator_H

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
//## operation CreateCommand()
#include "Command.h"
//## auto_generated
#include "Discrete.h"
//## class CommandCreator
#include "Creator.h"
//## operation CreateCommand()
class Command;

//## package Application::Discrete

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

//## package Application::Discrete

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
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/CommandCreator.h
*********************************************************************/
