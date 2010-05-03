/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RecordIterator
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/RecordIterator.h
*********************************************************************/

#ifndef RecordIterator_H
#define RecordIterator_H

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
//## dependency Record
#include "Record.h"
////    Constructors and destructors    ////

////    Operations    ////

////    Additional operations    ////

//## package Application::Continuous

//## class RecordIterator
class RecordIterator {
    ////    Constructors and destructors    ////
    
public :

    //## operation RecordIterator(Record*)
    RecordIterator(Record* rec);
    
    ////    Operations    ////
    
    //## operation CurrentItem()
    SampleType CurrentItem();
    
    //## operation First()
    void First();
    
    //## operation IsDone()
    bool IsDone();
    
    //## operation Next()
    void Next();
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////

protected :

    Record* itsRecord;		//## link itsRecord

public :

    //## auto_generated
    RecordIterator();
    
    //## auto_generated
    ~RecordIterator();
    
    //## auto_generated
    Record* getItsRecord() const;
    
    //## auto_generated
    void setItsRecord(Record* p_Record);

protected :

    //## auto_generated
    void cleanUpRelations();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/RecordIterator.h
*********************************************************************/
