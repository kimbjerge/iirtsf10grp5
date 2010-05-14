/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: SerialProtocol
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/SerialProtocol.cpp
*********************************************************************/

//## auto_generated
#include "SerialProtocol.h"
//## link itsExtOutSerial
#include "ExtOutSerial.h"
//## package Comm

//## class SerialProtocol
void SerialProtocol::OutputPulse(int pulse) {
    //#[ operation OutputPulse(int)
    std::cout << "Pulse " << pulse << std::endl;
    //#]
}

void SerialProtocol::cleanUpRelations() {
    if(itsExtOutSerial != NULL)
        {
            itsExtOutSerial = NULL;
        }
}

SerialProtocol::SerialProtocol() {
    itsExtOutSerial = NULL;
}

SerialProtocol::~SerialProtocol() {
    cleanUpRelations();
}

ExtOutSerial* SerialProtocol::getItsExtOutSerial() const {
    return itsExtOutSerial;
}

void SerialProtocol::setItsExtOutSerial(ExtOutSerial* p_ExtOutSerial) {
    itsExtOutSerial = p_ExtOutSerial;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/SerialProtocol.cpp
*********************************************************************/
