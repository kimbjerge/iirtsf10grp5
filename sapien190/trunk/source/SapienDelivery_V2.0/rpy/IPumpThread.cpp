/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: IPumpThread
//!	Generated Date	: Fri, 21, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/IPumpThread.cpp
*********************************************************************/

//## auto_generated
#include "IPumpThread.h"
//## link itsExtInputs
#include "ExtInputs.h"
//## link itsIPumpProtocol
#include "IPumpProtocol.h"
//## package Comm

//## class IPumpThread
IPumpThread::IPumpThread() {
    itsExtInputs = NULL;
    itsIPumpProtocol = NULL;
}

IPumpThread::~IPumpThread() {
    cleanUpRelations();
}

ExtInputs* IPumpThread::getItsExtInputs() const {
    return itsExtInputs;
}

void IPumpThread::setItsExtInputs(ExtInputs* p_ExtInputs) {
    itsExtInputs = p_ExtInputs;
}

IPumpProtocol* IPumpThread::getItsIPumpProtocol() const {
    return itsIPumpProtocol;
}

void IPumpThread::setItsIPumpProtocol(IPumpProtocol* p_IPumpProtocol) {
    itsIPumpProtocol = p_IPumpProtocol;
}

void IPumpThread::cleanUpRelations() {
    if(itsExtInputs != NULL)
        {
            itsExtInputs = NULL;
        }
    if(itsIPumpProtocol != NULL)
        {
            itsIPumpProtocol = NULL;
        }
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/IPumpThread.cpp
*********************************************************************/
