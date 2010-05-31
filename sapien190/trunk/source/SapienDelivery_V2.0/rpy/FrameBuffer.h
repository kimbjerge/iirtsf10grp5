/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: FrameBuffer
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/FrameBuffer.h
*********************************************************************/

#ifndef FrameBuffer_H
#define FrameBuffer_H

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
//## auto_generated
#include "Continuous.h"
//## package Application::Continuous

//## class FrameBuffer
class FrameBuffer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    FrameBuffer();
    
    //## operation ~FrameBuffer()
    ~FrameBuffer();
    
    ////    Operations    ////

private :

    //## operation CreateBuffer(int)
    void CreateBuffer(int size);

public :

    //## operation Insert(int)
    void Insert(int sample);
    
    ////    Additional operations    ////

private :

    //## auto_generated
    int* getBuffer() const;
    
    //## auto_generated
    void setBuffer(int* p_buffer);
    
    ////    Attributes    ////

protected :

    int* buffer;		//## attribute buffer
    
    int writePos;		//## attribute writePos
    
    int bufSize;		//## attribute bufSize

private :

    //## auto_generated
    int getBufSize() const;
    
    //## auto_generated
    void setBufSize(int p_bufSize);

public :

    //## operation isFull()
    bool isFull();
    
    //## operation FrameBuffer(int)
    FrameBuffer(int size);
    
    //## operation First()
    void First();
    
    //## operation IsDone()
    bool IsDone();
    
    //## operation Next()
    void Next();

private :

    //## auto_generated
    int getReadPos() const;
    
    //## auto_generated
    void setReadPos(int p_readPos);
    
    //## auto_generated
    int getWritePos() const;
    
    //## auto_generated
    void setWritePos(int p_writePos);

protected :

    int readPos;		//## attribute readPos

public :

    //## operation GetSample()
    int GetSample();
    
    //## operation Clear()
    void Clear();
    
    //## auto_generated
    int getPulse() const;
    
    //## auto_generated
    void setPulse(int p_pulse);
    
    //## auto_generated
    int getSampleRate() const;
    
    //## auto_generated
    void setSampleRate(int p_sampleRate);

protected :

    int pulse;		//## attribute pulse
    
    int sampleRate;		//## attribute sampleRate
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/FrameBuffer.h
*********************************************************************/
