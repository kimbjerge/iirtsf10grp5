/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: InfusionPumpModel
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/InfusionPumpModel.h
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
//## attribute itsInfECGCalculate
#include "ECGMedicineAdjust.h"
//## attribute itsEDRCalculate
#include "ECGtoEDR.h"
//## attribute itsPulseCalculate
#include "ECGtoPulse.h"
//## class InfusionPumpModel
#include "PhysioModel.h"
//## dependency Gain
class Gain;

//## package Application::Continuous

//## class InfusionPumpModel
class InfusionPumpModel : public PhysioModel {
    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
public :

    //## operation factoryCalculate()
    virtual void factoryCalculate();
    
    //## auto_generated
    ECGtoEDR* getItsEDRCalculate() const;
    
    //## auto_generated
    ECGMedicineAdjust* getItsInfECGCalculate() const;
    
    //## auto_generated
    ECGtoPulse* getItsPulseCalculate() const;

protected :

    ECGtoEDR itsEDRCalculate;		//## attribute itsEDRCalculate
    
    ECGMedicineAdjust itsInfECGCalculate;		//## attribute itsInfECGCalculate
    
    ECGtoPulse itsPulseCalculate;		//## attribute itsPulseCalculate

public :

    //## operation Generate(SampleType)
    virtual void Generate(SampleType sample);
    
    //## auto_generated
    InfusionPumpModel();
    
    //## auto_generated
    virtual ~InfusionPumpModel();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/InfusionPumpModel.h
*********************************************************************/
