/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Configuration
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Configuration.h
*********************************************************************/

#ifndef Configuration_H
#define Configuration_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## class Configuration
#include "Operational.h"
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "Discrete.h"
//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## dependency Ready
class Ready;

//## operation Instance()
class ESXState;

//## operation ConfigurationEnded(EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Application::Discrete

//## class Configuration
class Configuration : public Operational {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Configuration();
    
    //## auto_generated
    virtual ~Configuration();
    
    ////    Operations    ////
    
    //## operation ConfigX(EmbeddedSystemX*)
    virtual void ConfigX(EmbeddedSystemX* esx);
    
    //## operation ConfigurationEnded(EmbeddedSystemX*)
    virtual void ConfigurationEnded(EmbeddedSystemX* esx);
    
    //## operation Instance()
    static ESXState* Instance();
    
    //## operation DisplayState()
    virtual void DisplayState();

protected :

    static ESXState* _instance;		//## attribute _instance

private :

    //## auto_generated
    static ESXState* get_instance();
    
    //## auto_generated
    static void set_instance(ESXState* p__instance);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Configuration.h
*********************************************************************/
