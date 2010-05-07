/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: InfusionPumpModel
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/InfusionPumpModel.h
*********************************************************************/

#ifndef InfusionPumpModel_H
#define InfusionPumpModel_H

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
//## auto_generated
#include "math.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## class InfusionPumpModel
#include "PhysioModel.h"
//## dependency Gain
class Gain;

//## auto_generated
class Medicine;

//## operation Generate(SampleSet)
class SampleSet;

//## package Application::Continuous

//## class InfusionPumpModel
class InfusionPumpModel : public PhysioModel {
    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
public :

    //## operation FactoryFilter()
    virtual void FactoryFilter();
    
    //## operation Generate(SampleSet)
    virtual void Generate(SampleSet& sample);
    
    //## auto_generated
    virtual ~InfusionPumpModel();
    
    //## operation InfusionPumpModel()
    InfusionPumpModel();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/InfusionPumpModel.h
*********************************************************************/
