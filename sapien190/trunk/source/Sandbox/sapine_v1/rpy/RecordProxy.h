/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RecordProxy
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RecordProxy.h
*********************************************************************/

#ifndef RecordProxy_H
#define RecordProxy_H

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
//## class RecordProxy
#include "Record.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## operation RecordProxy(RecordWfdb*)
class RecordWfdb;

////    Constructors and destructors    ////

////    Operations    ////

////    Additional operations    ////

////    Constructors and destructors    ////

////    Operations    ////

////    Additional operations    ////

////    Relations and components    ////

////    Constructors and destructors    ////

////    Constructors and destructors    ////

////    Operations    ////

////    Additional operations    ////

////    Relations and components    ////

////    Constructors and destructors    ////

////    Operations    ////

////    Additional operations    ////

////    Constructors and destructors    ////

////    Operations    ////

////    Additional operations    ////

//## dependency RecordIterator
class RecordIterator;

//## package Application::Continuous

//## class RecordProxy
class RecordProxy : public Record {
    ////    Constructors and destructors    ////
    
public :

    //## operation RecordProxy(RecordWfdb*)
    RecordProxy(RecordWfdb* record);
    
    ////    Operations    ////
    
    //## operation Load()
    virtual bool Load();
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
    
    //## operation ~RecordProxy()
    ~RecordProxy();
    
    //## auto_generated
    RecordProxy();
    
    //## operation CreateIterator()
    virtual RecordIterator* CreateIterator();
    
    //## operation First()
    virtual void First();
    
    //## operation Next()
    virtual void Next();
    
    //## auto_generated
    RecordWfdb* getItsRecordWfdb() const;
    
    //## auto_generated
    void setItsRecordWfdb(RecordWfdb* p_RecordWfdb);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    RecordWfdb* itsRecordWfdb;		//## link itsRecordWfdb
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RecordProxy.h
*********************************************************************/
