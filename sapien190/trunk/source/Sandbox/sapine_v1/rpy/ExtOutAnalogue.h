/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ExtOutAnalogue
//!	Generated Date	: Thu, 13, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ExtOutAnalogue.h
*********************************************************************/

#ifndef ExtOutAnalogue_H
#define ExtOutAnalogue_H

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
//## link itsDAC
class DAC;

//## package AbstractHW

//## class ExtOutAnalogue
class ExtOutAnalogue {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ExtOutAnalogue();
    
    //## auto_generated
    ~ExtOutAnalogue();
    
    ////    Operations    ////
    
    //## operation OutputSample(int)
    void OutputSample(int sample);
    
    ////    Additional operations    ////

protected :

    //## auto_generated
    void cleanUpRelations();

private :

    //## auto_generated
    int getResolution() const;
    
    //## auto_generated
    void setResolution(int p_resolution);
    
    //## auto_generated
    int getSampleRate() const;
    
    //## auto_generated
    void setSampleRate(int p_sampleRate);
    
    ////    Attributes    ////

protected :

    int resolution;		//## attribute resolution
    
    int sampleRate;		//## attribute sampleRate
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////

public :

    //## operation ExtOutAnalogue(int)
    ExtOutAnalogue(int ch);

private :

    //## auto_generated
    int getChannel() const;
    
    //## auto_generated
    void setChannel(int p_channel);

protected :

    int channel;		//## attribute channel

public :

    //## auto_generated
    DAC* getItsDAC() const;
    
    //## auto_generated
    void setItsDAC(DAC* p_DAC);

protected :

    DAC* itsDAC;		//## link itsDAC
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ExtOutAnalogue.h
*********************************************************************/
