/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RecordWfdb
//!	Generated Date	: Sat, 15, May 2010  
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

    //## operation RecordWfdb(char*,char*)
    RecordWfdb(char* filename, char* annotation);
    
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

public :

    //## operation getannScaled(WFDB_Annotator,WFDB_Annotation*)
    int getannScaled(WFDB_Annotator a, WFDB_Annotation* annot);

private :

    //## auto_generated
    int getSAPIEN_SAMPLING_FREQ() const;
    
    //## auto_generated
    void setSAPIEN_SAMPLING_FREQ(int p_SAPIEN_SAMPLING_FREQ);
    
    //## auto_generated
    float getAnnFreqScale() const;
    
    //## auto_generated
    void setAnnFreqScale(float p_annFreqScale);
    
    //## auto_generated
    char* getAnnName() const;
    
    //## auto_generated
    void setAnnName(char* p_annName);
    
    //## auto_generated
    WFDB_Annotation getAnnot() const;
    
    //## auto_generated
    void setAnnot(WFDB_Annotation p_annot);
    
    //## auto_generated
    WFDB_Time getRecordSampleFreq() const;
    
    //## auto_generated
    void setRecordSampleFreq(WFDB_Time p_recordSampleFreq);
    
    //## auto_generated
    WFDB_Time getSampleCounter() const;
    
    //## auto_generated
    void setSampleCounter(WFDB_Time p_sampleCounter);

protected :

    int SAPIEN_SAMPLING_FREQ;		//## attribute SAPIEN_SAMPLING_FREQ
    
    float annFreqScale;		//## attribute annFreqScale
    
    char* annName;		//## attribute annName
    
    WFDB_Annotation annot;		//## attribute annot
    
    WFDB_Time recordSampleFreq;		//## attribute recordSampleFreq
    
    WFDB_Time sampleCounter;		//## attribute sampleCounter
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RecordWfdb.h
*********************************************************************/
