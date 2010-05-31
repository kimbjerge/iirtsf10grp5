/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: IPumpProtocol
//!	Generated Date	: Fri, 21, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/IPumpProtocol.cpp
*********************************************************************/

//## auto_generated
#include "IPumpProtocol.h"
//## link itsExtInputs
#include "ExtInputs.h"
//## auto_generated
#include "ModelMediator.h"
//## package Comm

//## class IPumpProtocol
IPumpProtocol::IPumpProtocol(ModelMediator* mediator) {
    itsExtInputs = NULL;
    //#[ operation IPumpProtocol(ModelMediator*)
    itsModelMediator = mediator;
    //#]
}

IPumpProtocol::IPumpProtocol() {
    itsExtInputs = NULL;
}

IPumpProtocol::~IPumpProtocol() {
    cleanUpRelations();
}

ExtInputs* IPumpProtocol::getItsExtInputs() const {
    return itsExtInputs;
}

void IPumpProtocol::setItsExtInputs(ExtInputs* p_ExtInputs) {
    itsExtInputs = p_ExtInputs;
}

void IPumpProtocol::cleanUpRelations() {
    if(itsExtInputs != NULL)
        {
            itsExtInputs = NULL;
        }
}

int IPumpProtocol::getAmount() const {
    return amount;
}

void IPumpProtocol::setAmount(int p_amount) {
    amount = p_amount;
}

char* IPumpProtocol::getName() const {
    return name;
}

void IPumpProtocol::setName(char* p_name) {
    name = p_name;
}

SimulatorRealtime::MEDICINE_TYPES IPumpProtocol::getType() const {
    return type;
}

void IPumpProtocol::setType(SimulatorRealtime::MEDICINE_TYPES p_type) {
    type = p_type;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/IPumpProtocol.cpp
*********************************************************************/
