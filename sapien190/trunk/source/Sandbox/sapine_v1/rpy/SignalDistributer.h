/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: SignalDistributer
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/SignalDistributer.h
*********************************************************************/

#ifndef SignalDistributer_H
#define SignalDistributer_H

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
#include "Continuous.h"
//## class SignalDistributer
#include "Subject.h"
//## link itsFrameBuffer
class FrameBuffer;

//## package Application::Continuous

//## class SignalDistributer
class SignalDistributer : public Subject {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    SignalDistributer();
    
    //## auto_generated
    ~SignalDistributer();
    
    ////    Additional operations    ////
    
    //## auto_generated
    FrameBuffer* getItsFrameBuffer() const;
    
    //## auto_generated
    void setItsFrameBuffer(FrameBuffer* p_FrameBuffer);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    FrameBuffer* itsFrameBuffer;		//## link itsFrameBuffer
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/SignalDistributer.h
*********************************************************************/
