/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Sample
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Sample.cpp
*********************************************************************/

//## auto_generated
#include "Sample.h"
//## package Application::Continuous

//## class Sample
Sample::Sample() {
}

Sample::~Sample() {
}

WFDB_Annotation Sample::FactoryAnnotation(char anntyp) {
    //#[ operation FactoryAnnotation(char)
    WFDB_Annotation ann;
    ann.time = 0;
    ann.anntyp = anntyp;
    ann.subtyp = 0;
    ann.chan  = 0; 
    ann.num = 0;
    ann.aux = 0; 
    return ann;
    //#]
}

WFDB_Annotation Sample::getAnnotation() const {
    return annotation;
}

void Sample::setAnnotation(WFDB_Annotation p_annotation) {
    annotation = p_annotation;
}

WFDB_Sample Sample::getValue() const {
    return value;
}

void Sample::setValue(WFDB_Sample p_value) {
    value = p_value;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Sample.cpp
*********************************************************************/
