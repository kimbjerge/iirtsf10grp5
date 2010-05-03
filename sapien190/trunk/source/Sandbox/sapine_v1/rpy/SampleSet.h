/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: SampleSet
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/SampleSet.h
*********************************************************************/

#ifndef SampleSet_H
#define SampleSet_H

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
#include "Continuous.h"
//## link itsSample
#include "Sample.h"
//## package Application::Continuous

//## class SampleSet
class SampleSet {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    SampleSet();
    
    //## auto_generated
    ~SampleSet();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getItsSample() const;
    
    ////    Relations and components    ////

protected :

    Sample itsSample[2];		//## link itsSample
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/SampleSet.h
*********************************************************************/
