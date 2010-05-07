/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Sample
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Sample.h
*********************************************************************/

#ifndef Sample_H
#define Sample_H

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
//## package Application::Continuous

//## class Sample
class Sample {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Sample();
    
    //## auto_generated
    ~Sample();
    
    ////    Operations    ////
    
    //## operation FactoryAnnotation(char)
    static WFDB_Annotation FactoryAnnotation(char anntyp);
    
    ////    Additional operations    ////
    
    //## auto_generated
    WFDB_Annotation getAnnotation() const;
    
    //## auto_generated
    void setAnnotation(WFDB_Annotation p_annotation);
    
    //## auto_generated
    WFDB_Sample getValue() const;
    
    //## auto_generated
    void setValue(WFDB_Sample p_value);
    
    ////    Attributes    ////

protected :

    WFDB_Annotation annotation;		//## attribute annotation
    
    WFDB_Sample value;		//## attribute value
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Sample.h
*********************************************************************/
