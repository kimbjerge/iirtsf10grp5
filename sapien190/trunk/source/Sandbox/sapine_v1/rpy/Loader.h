/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Loader
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Loader.h
*********************************************************************/

#ifndef Loader_H
#define Loader_H

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
#include "wfdb/wfdb.h"
//## auto_generated
#include "math.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## link itsSimulatorRealtime
class SimulatorRealtime;

//## package Application::Discrete

//## class Loader
class Loader {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Loader();
    
    //## auto_generated
    ~Loader();
    
    ////    Additional operations    ////
    
    //## auto_generated
    SimulatorRealtime* getItsSimulatorRealtime() const;
    
    //## auto_generated
    void setItsSimulatorRealtime(SimulatorRealtime* p_SimulatorRealtime);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    SimulatorRealtime* itsSimulatorRealtime;		//## link itsSimulatorRealtime
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Loader.h
*********************************************************************/
