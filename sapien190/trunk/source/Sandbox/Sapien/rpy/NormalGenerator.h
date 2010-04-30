/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NormalGenerator
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: DefaultComponent/DefaultConfig/NormalGenerator.h
*********************************************************************/

#ifndef NormalGenerator_H
#define NormalGenerator_H

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
//## dependency EDRCalculate
#include "EDRCalculate.h"
//## class NormalGenerator
#include "Generator.h"
//## attribute itsECGCalculate
#include "ECGCalculate.h"
//## attribute itsPulseCalculate
#include "PulseCalculate.h"
//## auto_generated
#include "wfdb/wfdb.h"
//## auto_generated
#include "math.h"
//## package Application::Continuous

//## class NormalGenerator
class NormalGenerator : public Generator {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    NormalGenerator();
    
    //## auto_generated
    virtual ~NormalGenerator();
    
    ////    Operations    ////
    
    //## operation factoryCalculate()
    virtual void factoryCalculate();
    
    //## auto_generated
    ECGCalculate* getItsECGCalculate() const;
    
    //## auto_generated
    EDRCalculate* getItsEDRCalculate() const;
    
    //## auto_generated
    PulseCalculate* getItsPulseCalculate() const;

protected :

    ECGCalculate itsECGCalculate;		//## attribute itsECGCalculate
    
    EDRCalculate itsEDRCalculate;		//## attribute itsEDRCalculate
    
    PulseCalculate itsPulseCalculate;		//## attribute itsPulseCalculate

public :

    //## operation Generate(SampleType)
    virtual void Generate(SampleType sample);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/NormalGenerator.h
*********************************************************************/
