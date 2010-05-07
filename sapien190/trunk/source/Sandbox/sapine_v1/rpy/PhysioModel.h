/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: PhysioModel
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/PhysioModel.h
*********************************************************************/

#ifndef PhysioModel_H
#define PhysioModel_H

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
#include <list>
//## auto_generated
#include <iterator>
//## link itsFilter
#include "Filter.h"
//## auto_generated
#include "wfdb/wfdb.h"
//## auto_generated
#include "math.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## attribute itsECGMedicineAdjust
#include "ECGMedicineAdjust.h"
//## attribute itsECGtoEDR
#include "ECGtoEDR.h"
//## attribute itsECGtoPulse
#include "ECGtoPulse.h"
//## attribute itsGain
#include "Gain.h"
//## attribute ECGSample
#include "SampleSet.h"
//## operation SetMedicine(Medicine*)
class Medicine;

//## package Application::Continuous

//## class PhysioModel
class PhysioModel {
    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
public :

    //## operation Generate(SampleSet)
    virtual void Generate(SampleSet& sample) = 0;
    
    //## operation FactoryFilter()
    virtual void FactoryFilter() = 0;
    
    ////    Additional operations    ////
    
    //## auto_generated
    SampleSet* getECGSample() const;
    
    //## auto_generated
    SampleSet* getEDRSample() const;
    
    //## auto_generated
    SampleSet* getPulseSample() const;
    
    //## auto_generated
    std::list<Filter*>::const_iterator getItsFilter() const;
    
    //## auto_generated
    std::list<Filter*>::const_iterator getItsFilterEnd() const;
    
    //## auto_generated
    void addItsFilter(Filter* p_Filter);
    
    //## auto_generated
    void removeItsFilter(Filter* p_Filter);
    
    //## auto_generated
    void clearItsFilter();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    SampleSet ECGSample;		//## attribute ECGSample
    
    SampleSet EDRSample;		//## attribute EDRSample
    
    SampleSet PulseSample;		//## attribute PulseSample
    
    ////    Relations and components    ////
    
    std::list<Filter*> itsFilter;		//## link itsFilter

public :

    //## auto_generated
    virtual ~PhysioModel();
    
    //## auto_generated
    ECGMedicineAdjust* getItsECGMedicineAdjust() const;
    
    //## auto_generated
    ECGtoEDR* getItsECGtoEDR() const;
    
    //## auto_generated
    ECGtoPulse* getItsECGtoPulse() const;
    
    //## auto_generated
    Gain* getItsGain() const;

protected :

    ECGMedicineAdjust itsECGMedicineAdjust;		//## attribute itsECGMedicineAdjust
    
    ECGtoEDR itsECGtoEDR;		//## attribute itsECGtoEDR
    
    ECGtoPulse itsECGtoPulse;		//## attribute itsECGtoPulse
    
    Gain itsGain;		//## attribute itsGain

public :

    //## auto_generated
    PhysioModel();
    
    //## operation SetMedicine(Medicine*)
    void SetMedicine(Medicine* aMedicine);
    
    //## auto_generated
    Medicine* getItsMedicine() const;
    
    //## auto_generated
    void setItsMedicine(Medicine* p_Medicine);

protected :

    Medicine* itsMedicine;		//## link itsMedicine
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/PhysioModel.h
*********************************************************************/
