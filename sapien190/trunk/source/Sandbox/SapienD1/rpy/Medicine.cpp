/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Medicine
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Medicine.cpp
*********************************************************************/

//## auto_generated
#include "Medicine.h"
//## operation Medicine(MEDICINE_TYPES)
#include "SimulatorRealtime.h"
//## package Application::Continuous

//## class Medicine
Medicine::Medicine(const SimulatorRealtime::MEDICINE_TYPES& tp) {
    //#[ operation Medicine(MEDICINE_TYPES)
    type = tp;
    amount = 0;
    
    //#]
}

Medicine::Medicine() {
}

Medicine::~Medicine() {
}

int Medicine::getAmount() const {
    return amount;
}

void Medicine::setAmount(int p_amount) {
    amount = p_amount;
}

SimulatorRealtime::MEDICINE_TYPES Medicine::getType() const {
    return type;
}

void Medicine::setType(SimulatorRealtime::MEDICINE_TYPES p_type) {
    type = p_type;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Medicine.cpp
*********************************************************************/
