/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PulseUpdater
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: DefaultComponent/DefaultConfig/PulseUpdater.h
*********************************************************************/

#ifndef PulseUpdater_H
#define PulseUpdater_H

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
#include "math.h"
//## link itsExtOutDigital
class ExtOutDigital;

//## package Comm

//## class PulseUpdater
class PulseUpdater {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    PulseUpdater();
    
    //## auto_generated
    ~PulseUpdater();
    
    ////    Operations    ////
    
    //## operation OutputPulse(int)
    void OutputPulse(int pulse);
    
    ////    Additional operations    ////
    
    //## auto_generated
    ExtOutDigital* getItsExtOutDigital() const;
    
    //## auto_generated
    void setItsExtOutDigital(ExtOutDigital* p_ExtOutDigital);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ExtOutDigital* itsExtOutDigital;		//## link itsExtOutDigital
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsExtOutDigital(ExtOutDigital* p_ExtOutDigital);
    
    //## auto_generated
    void _setItsExtOutDigital(ExtOutDigital* p_ExtOutDigital);
    
    //## auto_generated
    void _clearItsExtOutDigital();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/PulseUpdater.h
*********************************************************************/
