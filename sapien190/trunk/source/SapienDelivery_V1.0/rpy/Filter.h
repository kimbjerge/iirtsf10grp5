/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Filter
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Filter.h
*********************************************************************/

#ifndef Filter_H
#define Filter_H

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
//## attribute sample
#include "SampleSet.h"
//## package Application::Continuous

//## class Filter
class Filter {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Filter();
    
    //## auto_generated
    virtual ~Filter() = 0;
    
    ////    Operations    ////
    
    //## operation Output(SampleSet,SampleSet)
    virtual int Output(SampleSet& in, SampleSet& out) = 0;
    
    ////    Additional operations    ////
    
    //## auto_generated
    SampleSet* getSample() const;
    
    ////    Attributes    ////

protected :

    SampleSet sample;		//## attribute sample
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Filter.h
*********************************************************************/
