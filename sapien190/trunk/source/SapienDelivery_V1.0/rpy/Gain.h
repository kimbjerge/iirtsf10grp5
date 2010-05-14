/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Gain
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Gain.h
*********************************************************************/

#ifndef Gain_H
#define Gain_H

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
#include "Continuous.h"
//## class Gain
#include "Filter.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## operation Output(SampleSet,SampleSet)
class SampleSet;

//## package Application::Continuous

//## class Gain
class Gain : public Filter {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Gain();
    
    //## auto_generated
    virtual ~Gain();
    
    ////    Operations    ////
    
    //## operation Output(SampleSet,SampleSet)
    virtual int Output(SampleSet& in, SampleSet& out);
    
    //## auto_generated
    float getGain() const;

protected :

    float gain;		//## attribute gain

public :

    //## auto_generated
    void setGain(float p_gain);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Gain.h
*********************************************************************/
