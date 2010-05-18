/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: SerialProtocol
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/SerialProtocol.h
*********************************************************************/

#ifndef SerialProtocol_H
#define SerialProtocol_H

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
#include "wfdb/wfdb.h"
//## auto_generated
#include "math.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## link itsExtOutSerial
class ExtOutSerial;

//## package Comm

//## class SerialProtocol
class SerialProtocol {
    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
public :

    //## operation OutputPulse(int)
    void OutputPulse(int pulse);
    
    ////    Additional operations    ////

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ExtOutSerial* itsExtOutSerial;		//## link itsExtOutSerial
    
    ////    Framework operations    ////

public :

    //## auto_generated
    SerialProtocol();
    
    //## auto_generated
    ~SerialProtocol();
    
    //## auto_generated
    ExtOutSerial* getItsExtOutSerial() const;
    
    //## auto_generated
    void setItsExtOutSerial(ExtOutSerial* p_ExtOutSerial);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/SerialProtocol.h
*********************************************************************/
