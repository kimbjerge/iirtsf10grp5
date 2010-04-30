/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Pulse
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Pulse.h
*********************************************************************/

#ifndef Pulse_H
#define Pulse_H

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
//## class Pulse
#include "Signal.h"
//## auto_generated
class ExtOutAnalogue;

//## auto_generated
class ExtOutDigital;

//## auto_generated
class PatientModel;

//## package Application

//## class Pulse
class Pulse : public Signal {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Pulse();
    
    //## auto_generated
    ~Pulse();
    
    ////    Additional operations    ////

private :

    //## auto_generated
    int getBeats() const;
    
    //## auto_generated
    void setBeats(int p_beats);
    
    ////    Attributes    ////

protected :

    int beats;		//## attribute beats
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Pulse.h
*********************************************************************/
