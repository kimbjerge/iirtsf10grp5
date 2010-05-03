/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ECGMedicineAdjust
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/ECGMedicineAdjust.cpp
*********************************************************************/

//## auto_generated
#include "ECGMedicineAdjust.h"
//## link itsMedicine
#include "Medicine.h"
//## package Application::Continuous

//## class ECGMedicineAdjust
ECGMedicineAdjust::ECGMedicineAdjust() {
    itsMedicine = NULL;
}

ECGMedicineAdjust::~ECGMedicineAdjust() {
    cleanUpRelations();
}

float ECGMedicineAdjust::output(float in) {
    //#[ operation output(float)
    return in*2;
    //#]
}

Medicine* ECGMedicineAdjust::getItsMedicine() const {
    return itsMedicine;
}

void ECGMedicineAdjust::setItsMedicine(Medicine* p_Medicine) {
    itsMedicine = p_Medicine;
}

void ECGMedicineAdjust::cleanUpRelations() {
    if(itsMedicine != NULL)
        {
            itsMedicine = NULL;
        }
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/ECGMedicineAdjust.cpp
*********************************************************************/
