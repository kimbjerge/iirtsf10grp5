/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RecordWfdb
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RecordWfdb.h
*********************************************************************/

#ifndef RecordWfdb_H
#define RecordWfdb_H

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
//## class RecordWfdb
#include "Record.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## dependency RecordIterator
class RecordIterator;

////    Constructors and destructors    ////

////    Constructors and destructors    ////

////    Operations    ////

////    Additional operations    ////

////    Attributes    ////

//## package Application::Continuous

//## class RecordWfdb
class RecordWfdb : public Record {
    ////    Constructors and destructors    ////
    
public :

    //## operation RecordWfdb(char*)
    RecordWfdb(char* filename);
    
    //## auto_generated
    RecordWfdb();
    
    //## operation ~RecordWfdb()
    ~RecordWfdb();
    
    ////    Operations    ////
    
    //## operation First()
    virtual void First();
    
    //## operation Load()
    virtual bool Load();
    
    //## operation Next()
    virtual void Next();
    
    ////    Additional operations    ////
    
    //## auto_generated
    char* getRecordName() const;
    
    //## auto_generated
    void setRecordName(char* p_recordName);
    
    ////    Attributes    ////

protected :

    char* recordName;		//## attribute recordName
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RecordWfdb.h
*********************************************************************/
