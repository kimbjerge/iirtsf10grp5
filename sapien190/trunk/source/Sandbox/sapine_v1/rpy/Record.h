/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Record
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Record.h
*********************************************************************/

#ifndef Record_H
#define Record_H

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
#include "Continuous.h"
//## auto_generated
#include "wfdb/wfdb.h"
//## link itsSampleSet
#include "SampleSet.h"
//## dependency RecordIterator
class RecordIterator;

//## package Application::Continuous

//## class Record
class Record {
public :

    friend class RecordIterator;
    
    ////    Constructors and destructors    ////
    
    //## auto_generated
    Record();
    
    //## auto_generated
    virtual ~Record();
    
    ////    Operations    ////
    
    //## operation CreateIterator()
    virtual RecordIterator* CreateIterator();
    
    //## operation Load()
    virtual bool Load() = 0;
    
    //## operation First()
    virtual void First() = 0;
    
    //## operation Next()
    virtual void Next() = 0;
    
    //## auto_generated
    SampleSet* getItsSampleSet() const;

private :

    //## auto_generated
    bool getEndRecord() const;
    
    //## auto_generated
    void setEndRecord(bool p_endRecord);
    
    //## auto_generated
    SampleType getSample() const;
    
    //## auto_generated
    void setSample(SampleType p_sample);

protected :

    bool endRecord;		//## attribute endRecord
    
    SampleType sample;		//## attribute sample
    
    SampleSet itsSampleSet;		//## link itsSampleSet
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Record.h
*********************************************************************/
