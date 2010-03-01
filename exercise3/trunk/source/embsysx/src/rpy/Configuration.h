/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Configuration
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Configuration.h
*********************************************************************/

#ifndef Configuration_H
#define Configuration_H

//## auto_generated
#include <oxf/oxf.h>
//## class Configuration
#include "Operational.h"
//## auto_generated
#include "Default.h"
//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## dependency Ready
class Ready;

//## operation Instance()
class ESXState;

//## operation ConfigurationEnded(EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Default

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

protected :

    //## operation DisplayState()
    virtual void DisplayState();
    
    static ESXState* _instance;		//## attribute _instance

private :

    //## auto_generated
    static ESXState* get_instance();
    
    //## auto_generated
    static void set_instance(ESXState* p__instance);
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Configuration.h
*********************************************************************/
