/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ExtOutAnalogue
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: DefaultComponent/DefaultConfig/ExtOutAnalogue.h
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
#include "math.h"
//## link itsSignal
class Signal;

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
    
    //## auto_generated
    Signal* getItsSignal() const;
    
    //## auto_generated
    void setItsSignal(Signal* p_Signal);

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
    
    Signal* itsSignal;		//## link itsSignal
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSignal(Signal* p_Signal);
    
    //## auto_generated
    void _setItsSignal(Signal* p_Signal);
    
    //## auto_generated
    void _clearItsSignal();
    
    //## operation ExtOutAnalogue(int)
    ExtOutAnalogue(int ch);

private :

    //## auto_generated
    int getChannel() const;
    
    //## auto_generated
    void setChannel(int p_channel);

protected :

    int channel;		//## attribute channel
};

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/ExtOutAnalogue.h
*********************************************************************/
