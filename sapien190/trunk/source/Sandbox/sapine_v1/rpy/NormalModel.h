/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: NormalModel
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/NormalModel.h
*********************************************************************/

#ifndef NormalModel_H
#define NormalModel_H

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
//## dependency ECGtoEDR
#include "ECGtoEDR.h"
//## auto_generated
#include "wfdb/wfdb.h"
//## auto_generated
#include "math.h"
//## class NormalModel
#include "PhysioModel.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## auto_generated
class Medicine;

//## operation Generate(SampleSet)
class SampleSet;

//## package Application::Continuous

//## class NormalModel
class NormalModel : public PhysioModel {
    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
public :

    //## operation FactoryFilter()
    virtual void FactoryFilter();
    
    //## operation Generate(SampleSet)
    virtual void Generate(SampleSet& sample);
    
    //## auto_generated
    virtual ~NormalModel();
    
    //## operation NormalModel()
    NormalModel();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/NormalModel.h
*********************************************************************/
