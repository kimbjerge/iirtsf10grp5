/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: PatientModel
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/PatientModel.h
*********************************************************************/

#ifndef PatientModel_H
#define PatientModel_H

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
//## auto_generated
#include "wfdb/ecgcodes.h"
//## class PatientModel
#include "Monitor.h"
//## dependency ExtInputs
class ExtInputs;

//## link itsIPumpProtocol
class IPumpProtocol;

//## link itsSampleSet
class SampleSet;

//## operation SetMedicine(Medicine*)
class Medicine;

//## operation SetStrategy(PhysioModel*)
class PhysioModel;

//## operation AlternateRecord(Record*)
class Record;

//## link itsRecordIterator
class RecordIterator;

////    Friends    ////

////    Constructors and destructors    ////

////    Operations    ////

////    Additional operations    ////

////    Relations and components    ////

////    Friends    ////

////    Constructors and destructors    ////

////    Operations    ////

////    Additional operations    ////

////    Relations and components    ////

////    Framework operations    ////

////    Friends    ////

////    Constructors and destructors    ////

////    Operations    ////

//## package Application::Continuous

//## class PatientModel
class PatientModel : public Monitor {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
public :

    //## operation CalcSample()
    void CalcSample();
    
    //## operation SetRecord(Record*)
    bool SetRecord(Record* aRecord);
    
    //## operation SetStrategy(PhysioModel*)
    void SetStrategy(PhysioModel* aPhysioModel);
    
    //## operation StartSimulation()
    void StartSimulation();
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////

protected :

    PhysioModel* itsPhysioModel;		//## link itsPhysioModel
    
    Medicine* itsMedicine;		//## link itsMedicine
    
    Record* itsRecord;		//## link itsRecord
    
    ////    Framework operations    ////
    
    RecordIterator* itsRecordIterator;		//## link itsRecordIterator

public :

    //## operation SetMedicine(Medicine*)
    void SetMedicine(Medicine* aMedicine);
    
    //## operation ~PatientModel()
    ~PatientModel();
    
    //## operation PatientModel()
    PatientModel();
    
    //## auto_generated
    Medicine* getItsMedicine() const;
    
    //## auto_generated
    void setItsMedicine(Medicine* p_Medicine);
    
    //## auto_generated
    PhysioModel* getItsPhysioModel() const;
    
    //## auto_generated
    void setItsPhysioModel(PhysioModel* p_PhysioModel);
    
    //## auto_generated
    Record* getItsRecord() const;
    
    //## auto_generated
    void setItsRecord(Record* p_Record);
    
    //## auto_generated
    RecordIterator* getItsRecordIterator() const;
    
    //## auto_generated
    void setItsRecordIterator(RecordIterator* p_RecordIterator);

protected :

    //## auto_generated
    void cleanUpRelations();

public :

    //## auto_generated
    SampleSet* getItsSampleSet() const;
    
    //## auto_generated
    void setItsSampleSet(SampleSet* p_SampleSet);

protected :

    SampleSet* itsSampleSet;		//## link itsSampleSet

public :

    //## operation GetECGValue(int)
    WFDB_Sample GetECGValue(int idx);
    
    //## operation GetEDRValue(int)
    WFDB_Sample GetEDRValue(int idx);
    
    //## operation GetPulse()
    int GetPulse();
    
    //## auto_generated
    bool getPause() const;
    
    //## auto_generated
    void setPause(bool p_pause);

protected :

    bool pause;		//## attribute pause

public :

    //## operation AlternateRecord(Record*)
    bool AlternateRecord(Record* aRecord);
    
    //## auto_generated
    IPumpProtocol* getItsIPumpProtocol() const;
    
    //## auto_generated
    void setItsIPumpProtocol(IPumpProtocol* p_IPumpProtocol);

protected :

    IPumpProtocol* itsIPumpProtocol;		//## link itsIPumpProtocol
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/PatientModel.h
*********************************************************************/
