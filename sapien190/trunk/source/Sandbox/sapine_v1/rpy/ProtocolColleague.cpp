/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ProtocolColleague
//!	Generated Date	: Tue, 18, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ProtocolColleague.cpp
*********************************************************************/

//## auto_generated
#include "ProtocolColleague.h"
//## link itsModelMediator
#include "ModelMediator.h"
//## package Application::Continuous

//## class ProtocolColleague
ProtocolColleague::ProtocolColleague() {
    itsModelMediator = NULL;
}

ProtocolColleague::~ProtocolColleague() {
    cleanUpRelations();
}

void ProtocolColleague::Changed() {
    //#[ operation Changed()
    itsModelMediator->ProtocolChanged(this);
    //#]
}

ModelMediator* ProtocolColleague::getItsModelMediator() const {
    return itsModelMediator;
}

void ProtocolColleague::setItsModelMediator(ModelMediator* p_ModelMediator) {
    itsModelMediator = p_ModelMediator;
}

void ProtocolColleague::cleanUpRelations() {
    if(itsModelMediator != NULL)
        {
            itsModelMediator = NULL;
        }
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ProtocolColleague.cpp
*********************************************************************/
