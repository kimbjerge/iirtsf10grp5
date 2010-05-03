/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ConThread
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/ConThread.h
*********************************************************************/

#ifndef ConThread_H
#define ConThread_H

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
//## link itsExtOutAnalogue
class ExtOutAnalogue;

//## link itsFrameBuffer
class FrameBuffer;

//## link itsPatientModel
class PatientModel;

//## link itsSerialProtocol
class SerialProtocol;

//## package Application::Continuous

//## class ConThread
class ConThread {
    ////    Constructors and destructors    ////
    
public :

    //## operation ~ConThread()
    ~ConThread();
    
    ////    Operations    ////
    
    //## operation GenerateSignals()
    void GenerateSignals();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getItsExtOutAnalogue() const;
    
    //## auto_generated
    void addItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue);
    
    //## auto_generated
    void removeItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue);
    
    //## auto_generated
    void clearItsExtOutAnalogue();
    
    //## auto_generated
    FrameBuffer* getItsFrameBuffer() const;
    
    //## auto_generated
    void setItsFrameBuffer(FrameBuffer* p_FrameBuffer);
    
    //## auto_generated
    PatientModel* getItsPatientModel() const;
    
    //## auto_generated
    void setItsPatientModel(PatientModel* p_PatientModel);
    
    //## auto_generated
    SerialProtocol* getItsSerialProtocol() const;
    
    //## auto_generated
    void setItsSerialProtocol(SerialProtocol* p_SerialProtocol);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ExtOutAnalogue* itsExtOutAnalogue[2];		//## link itsExtOutAnalogue
    
    FrameBuffer* itsFrameBuffer;		//## link itsFrameBuffer
    
    PatientModel* itsPatientModel;		//## link itsPatientModel
    
    SerialProtocol* itsSerialProtocol;		//## link itsSerialProtocol

public :

    //## operation ConThread()
    ConThread();
    
    //## operation GeneratePulse()
    void GeneratePulse();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/ConThread.h
*********************************************************************/
