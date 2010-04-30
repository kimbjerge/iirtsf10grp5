/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: InfusionGenerator
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/InfusionGenerator.h
*********************************************************************/

#ifndef InfusionGenerator_H
#define InfusionGenerator_H

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
//## class InfusionGenerator
#include "Generator.h"
//## attribute itsEDRCalculate
#include "EDRCalculate.h"
//## attribute itsInfECGCalculate
#include "InfECGCalculate.h"
//## attribute itsPulseCalculate
#include "PulseCalculate.h"
//## dependency ECGCalculate
class ECGCalculate;

//## package Application::Continuous

//## class InfusionGenerator
class InfusionGenerator : public Generator {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    InfusionGenerator();
    
    //## auto_generated
    virtual ~InfusionGenerator();
    
    ////    Operations    ////
    
    //## operation factoryCalculate()
    virtual void factoryCalculate();
    
    //## auto_generated
    EDRCalculate* getItsEDRCalculate() const;
    
    //## auto_generated
    InfECGCalculate* getItsInfECGCalculate() const;
    
    //## auto_generated
    PulseCalculate* getItsPulseCalculate() const;

protected :

    EDRCalculate itsEDRCalculate;		//## attribute itsEDRCalculate
    
    InfECGCalculate itsInfECGCalculate;		//## attribute itsInfECGCalculate
    
    PulseCalculate itsPulseCalculate;		//## attribute itsPulseCalculate

public :

    //## operation Generate(SampleType)
    virtual void Generate(SampleType sample);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/InfusionGenerator.h
*********************************************************************/
