/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RecordSimulate
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/RecordSimulate.h
*********************************************************************/

#ifndef RecordSimulate_H
#define RecordSimulate_H

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
//## class RecordSimulate
#include "Record.h"
//## dependency RecordIterator
class RecordIterator;

////    Constructors and destructors    ////

////    Constructors and destructors    ////

////    Operations    ////

//## package Application::Continuous

//## class RecordSimulate
class RecordSimulate : public Record {
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
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/RecordSimulate.h
*********************************************************************/
