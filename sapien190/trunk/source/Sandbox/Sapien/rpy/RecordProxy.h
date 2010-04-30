/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RecordProxy
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/RecordProxy.h
*********************************************************************/

#ifndef RecordProxy_H
#define RecordProxy_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

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

//## dependency string
#include "string"
//## dependency algorithm
#include "algorithm"
//## dependency wfdb
#include "wfdb/wfdb.h"
//## auto_generated
#include "oxf/oxf.h"
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "Continuous.h"
//## class RecordProxy
#include "Record.h"
//## dependency RecordFile
class RecordFile;

//## dependency RecordIterator
class RecordIterator;

//## package Application::Continuous

//## class RecordProxy
class RecordProxy : public Record {
    ////    Constructors and destructors    ////
    
public :

    //## operation RecordProxy(RecordFile*)
    RecordProxy(RecordFile* file);
    
    ////    Operations    ////
    
    //## operation Load()
    virtual bool Load();
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////

protected :

    RecordFile* itsRecordFile;		//## link itsRecordFile

public :

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
    RecordFile* getItsRecordFile() const;
    
    //## auto_generated
    void setItsRecordFile(RecordFile* p_RecordFile);

protected :

    //## auto_generated
    void cleanUpRelations();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/RecordProxy.h
*********************************************************************/
