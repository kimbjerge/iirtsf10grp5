/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: GainParam
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/GainParam.h
*********************************************************************/

#ifndef GainParam_H
#define GainParam_H

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
//## class GainParam
#include "Parameter.h"
//## package Application::Continuous

//## class GainParam
class GainParam : public Parameter {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    GainParam();
    
    //## auto_generated
    virtual ~GainParam();
    
    ////    Operations    ////
    
    //## operation Execute(SimulatorRealtime*)
    virtual void Execute(SimulatorRealtime* ps);
    
    ////    Additional operations    ////
    
    //## auto_generated
    float getGain() const;
    
    //## auto_generated
    void setGain(float p_gain);
    
    ////    Attributes    ////

protected :

    float gain;		//## attribute gain
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/GainParam.h
*********************************************************************/
