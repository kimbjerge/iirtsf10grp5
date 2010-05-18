/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: IPumpProtocol
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/IPumpProtocol.cpp
*********************************************************************/

//## auto_generated
#include "IPumpProtocol.h"
//## link itsExtInputs
#include "ExtInputs.h"
//## package Comm

//## class IPumpProtocol
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

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/IPumpProtocol.cpp
*********************************************************************/
