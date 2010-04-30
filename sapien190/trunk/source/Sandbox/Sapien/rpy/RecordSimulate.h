/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RecordSimulate
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/RecordSimulate.h
*********************************************************************/

#ifndef RecordSimulate_H
#define RecordSimulate_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

////    Constructors and destructors    ////

////    Constructors and destructors    ////

////    Operations    ////

//## dependency math
#include "math.h"
//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "Continuous.h"
//## class RecordSimulate
#include "RecordFile.h"
//## dependency RecordIterator
class RecordIterator;

//## package Application::Continuous

//## class RecordSimulate
class RecordSimulate : public RecordFile {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    RecordSimulate();
    
    //## auto_generated
    virtual ~RecordSimulate();
    
    ////    Operations    ////
    
    //## operation First()
    virtual void First();
    
    //## operation Load()
    virtual bool Load();
    
    //## operation Next()
    virtual void Next();
    
    //## operation Random()
    SampleType Random();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/RecordSimulate.h
*********************************************************************/
