/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: NormalModel
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/NormalModel.h
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
//## attribute itsPulseCalculate
#include "ECGtoPulse.h"
//## attribute itsECGCalculate
#include "Gain.h"
//## class NormalModel
#include "PhysioModel.h"
//## package Application::Continuous

//## class NormalModel
class NormalModel : public PhysioModel {
    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
public :

    //## operation factoryCalculate()
    virtual void factoryCalculate();
    
    //## auto_generated
    Gain* getItsECGCalculate() const;
    
    //## auto_generated
    ECGtoEDR* getItsEDRCalculate() const;
    
    //## auto_generated
    ECGtoPulse* getItsPulseCalculate() const;

protected :

    Gain itsECGCalculate;		//## attribute itsECGCalculate
    
    ECGtoEDR itsEDRCalculate;		//## attribute itsEDRCalculate
    
    ECGtoPulse itsPulseCalculate;		//## attribute itsPulseCalculate

public :

    //## operation Generate(SampleType)
    virtual void Generate(SampleType sample);
    
    //## auto_generated
    NormalModel();
    
    //## auto_generated
    virtual ~NormalModel();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/NormalModel.h
*********************************************************************/
