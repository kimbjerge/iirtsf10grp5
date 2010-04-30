/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ExtOutDigital
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: DefaultComponent/DefaultConfig/ExtOutDigital.h
*********************************************************************/

#ifndef ExtOutDigital_H
#define ExtOutDigital_H

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
//## link itsPulseUpdater
class PulseUpdater;

//## link itsSignal
class Signal;

//## package AbstractHW

//## class ExtOutDigital
class ExtOutDigital {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ExtOutDigital();
    
    //## auto_generated
    ~ExtOutDigital();
    
    ////    Additional operations    ////
    
    //## auto_generated
    PulseUpdater* getItsPulseUpdater() const;
    
    //## auto_generated
    void setItsPulseUpdater(PulseUpdater* p_PulseUpdater);
    
    //## auto_generated
    Signal* getItsSignal() const;
    
    //## auto_generated
    void setItsSignal(Signal* p_Signal);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    PulseUpdater* itsPulseUpdater;		//## link itsPulseUpdater
    
    Signal* itsSignal;		//## link itsSignal
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsPulseUpdater(PulseUpdater* p_PulseUpdater);
    
    //## auto_generated
    void _setItsPulseUpdater(PulseUpdater* p_PulseUpdater);
    
    //## auto_generated
    void _clearItsPulseUpdater();
    
    //## auto_generated
    void __setItsSignal(Signal* p_Signal);
    
    //## auto_generated
    void _setItsSignal(Signal* p_Signal);
    
    //## auto_generated
    void _clearItsSignal();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/ExtOutDigital.h
*********************************************************************/
