/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: SampleSet
//!	Generated Date	: Thu, 13, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/SampleSet.h
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
#include "math.h"
//## auto_generated
#include "Continuous.h"
//## link itsSample
#include "Sample.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## package Application::Continuous

//## class SampleSet
class SampleSet {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    SampleSet();
    
    //## auto_generated
    ~SampleSet();
    
    ////    Operations    ////
    
    //## operation GetSample(int)
    Sample* GetSample(int idx);
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getItsSample() const;
    
    ////    Relations and components    ////

protected :

    Sample itsSample[2];		//## link itsSample

public :

    //## operation SetSample(int,Sample)
    void SetSample(int idx, const Sample& sample);
    
    //## auto_generated
    int getNum() const;
    
    //## auto_generated
    void setNum(int p_num);

protected :

    int num;		//## attribute num

public :

    //## operation GetAnnotation(int)
    WFDB_Annotation GetAnnotation(int idx);
    
    //## operation SetSample(int,WFDB_Sample)
    void SetSample(int idx, WFDB_Sample value);
    
    //## operation SetAnnotation(int,WFDB_Annotation)
    void SetAnnotation(int idx, WFDB_Annotation annotation);
    
    //## operation SetSample(int,WFDB_Sample,WFDB_Annotation)
    void SetSample(int idx, WFDB_Sample value, WFDB_Annotation ann);
    
    //## auto_generated
    WFDB_Annotation getAnnotation() const;
    
    //## auto_generated
    void setAnnotation(WFDB_Annotation p_annotation);

protected :

    WFDB_Annotation annotation;		//## attribute annotation
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/SampleSet.h
*********************************************************************/
