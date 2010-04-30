/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Generator
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: DefaultComponent/DefaultConfig/Generator.h
*********************************************************************/

#ifndef Generator_H
#define Generator_H

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

//## class Generator
class Generator {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Generator();
    
    //## auto_generated
    virtual ~Generator();
    
    ////    Operations    ////
    
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
    void setECGSample(float p_ECGSample);
    
    //## auto_generated
    void setEDRSample(float p_EDRSample);
    
    //## auto_generated
    void setPulseSample(float p_PulseSample);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Generator.h
*********************************************************************/
