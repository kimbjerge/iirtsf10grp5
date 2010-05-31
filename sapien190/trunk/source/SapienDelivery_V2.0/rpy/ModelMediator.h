/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ModelMediator
//!	Generated Date	: Fri, 21, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ModelMediator.h
*********************************************************************/

#ifndef ModelMediator_H
#define ModelMediator_H

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
//## auto_generated
#include "Continuous.h"
//## operation ProtocolChanged(ProtocolColleague*)
class ProtocolColleague;

//## package Application::Continuous

//## class ModelMediator
class ModelMediator {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ModelMediator();
    
    //## auto_generated
    virtual ~ModelMediator() = 0;
    
    ////    Operations    ////
    
    //## operation ProtocolChanged(ProtocolColleague*)
    virtual void ProtocolChanged(ProtocolColleague* protocol) = 0;

protected :

    //## operation CreateProtocols()
    virtual void CreateProtocols() = 0;
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ModelMediator.h
*********************************************************************/
