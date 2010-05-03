/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ConThread
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/ConThread.cpp
*********************************************************************/

//## auto_generated
#include "ConThread.h"
//## link itsExtOutAnalogue
#include "ExtOutAnalogue.h"
//## link itsFrameBuffer
#include "FrameBuffer.h"
//## link itsPatientModel
#include "PatientModel.h"
//## link itsSerialProtocol
#include "SerialProtocol.h"
//## package Application::Continuous

//## class ConThread
ConThread::~ConThread() {
    //#[ operation ~ConThread()
    delete itsSerialProtocol;
    delete itsExtOutAnalogue[1];
    delete itsExtOutAnalogue[0];
    //#]
    cleanUpRelations();
}

void ConThread::GenerateSignals() {
    //#[ operation GenerateSignals()
    //itsExtOutAnalogue[0]->OutputSample(itsPatientModel->getItsPhysioModel()->getECGSample());
    //itsExtOutAnalogue[1]->OutputSample(itsPatientModel->getItsPhysioModel()->getEDRSample());
    //itsExtOutAnalogue[0]->OutputSample(sample);
    
    //#]
}

int ConThread::getItsExtOutAnalogue() const {
    int iter = 0;
    return iter;
}

void ConThread::addItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue) {
    for (int pos = 0; pos < 2; pos++) {
    	if (!itsExtOutAnalogue[pos]) {
    		itsExtOutAnalogue[pos] = p_ExtOutAnalogue;
    		break;
    	}
    }
}

void ConThread::removeItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue) {
    for (int pos = 0; pos < 2; pos++) {
    	if (itsExtOutAnalogue[pos] == p_ExtOutAnalogue) {
    		itsExtOutAnalogue[pos] = NULL;
    	}
    }
}

void ConThread::clearItsExtOutAnalogue() {
}

FrameBuffer* ConThread::getItsFrameBuffer() const {
    return itsFrameBuffer;
}

void ConThread::setItsFrameBuffer(FrameBuffer* p_FrameBuffer) {
    itsFrameBuffer = p_FrameBuffer;
}

PatientModel* ConThread::getItsPatientModel() const {
    return itsPatientModel;
}

void ConThread::setItsPatientModel(PatientModel* p_PatientModel) {
    itsPatientModel = p_PatientModel;
}

SerialProtocol* ConThread::getItsSerialProtocol() const {
    return itsSerialProtocol;
}

void ConThread::setItsSerialProtocol(SerialProtocol* p_SerialProtocol) {
    itsSerialProtocol = p_SerialProtocol;
}

void ConThread::cleanUpRelations() {
    
    if(itsFrameBuffer != NULL)
        {
            itsFrameBuffer = NULL;
        }
    if(itsPatientModel != NULL)
        {
            itsPatientModel = NULL;
        }
    if(itsSerialProtocol != NULL)
        {
            itsSerialProtocol = NULL;
        }
}

ConThread::ConThread() {
    {
        for (int pos = 0; pos < 2; pos++) {
        	itsExtOutAnalogue[pos] = NULL;
        }
    }
    itsFrameBuffer = NULL;
    itsPatientModel = NULL;
    itsSerialProtocol = NULL;
    //#[ operation ConThread()
    itsExtOutAnalogue[0] = new ExtOutAnalogue(1);
    itsExtOutAnalogue[1] = new ExtOutAnalogue(2);
    itsSerialProtocol = new SerialProtocol();
    //#]
}

void ConThread::GeneratePulse() {
    //#[ operation GeneratePulse()
    //itsSerialProtocol->OutputPulse(itsPatientModel->getItsPhysioModel()->getPulseSample());
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/ConThread.cpp
*********************************************************************/
