/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Configuration
//!	Generated Date	: Mon, 15, Feb 2010  
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Configuration.h
*********************************************************************/

#ifndef Configuration_H
#define Configuration_H

//## auto_generated
#include <oxf/oxf.h>
//## class Configuration
#include "OpState.h"
//## operation ConfigX(Operational*)
class Operational;

//## package Default

//## class Configuration
class Configuration : public OpState {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Configuration();
    
    //## auto_generated
    virtual ~Configuration();
    
    ////    Operations    ////
    
    //## operation ConfigX(Operational*)
    virtual void ConfigX(Operational* op);
    
    //## operation ConfigurationEnded(Operational*)
    virtual void ConfigurationEnded(Operational* op);
    
    //## operation Instance()
    static OpState* Instance();

protected :

    //## operation DisplayState()
    virtual void DisplayState();

private :

    //## auto_generated
    static void set_instance(OpState* p__instance);

protected :

    static OpState* _instance;		//## attribute _instance

private :

    //## auto_generated
    static OpState* get_instance();
};

#endif
/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Configuration.h
*********************************************************************/
