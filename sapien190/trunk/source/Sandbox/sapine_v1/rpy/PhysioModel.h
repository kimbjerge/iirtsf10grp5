/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: PhysioModel
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/PhysioModel.h
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
//## package Application::Continuous

//## class PhysioModel
class PhysioModel {
    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
public :

    //## operation Generate(SampleType)
    virtual void Generate(SampleType sample) = 0;
    
    //## operation factoryCalculate()
    virtual void factoryCalculate() = 0;
    
    ////    Additional operations    ////
    
    //## auto_generated
    float getECGSample() const;
    
    //## auto_generated
    float getEDRSample() const;
    
    //## auto_generated
    float getPulseSample() const;
    
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
    
    float ECGSample;		//## attribute ECGSample
    
    float EDRSample;		//## attribute EDRSample
    
    float PulseSample;		//## attribute PulseSample
    
    ////    Relations and components    ////
    
    std::list<Filter*> itsFilter;		//## link itsFilter
    
    //## operation int2float(SampleType)
    float int2float(const SampleType& s);

public :

    //## auto_generated
    PhysioModel();
    
    //## auto_generated
    virtual ~PhysioModel();
    
    //## auto_generated
    void setECGSample(float p_ECGSample);
    
    //## auto_generated
    void setEDRSample(float p_EDRSample);
    
    //## auto_generated
    void setPulseSample(float p_PulseSample);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/PhysioModel.h
*********************************************************************/
