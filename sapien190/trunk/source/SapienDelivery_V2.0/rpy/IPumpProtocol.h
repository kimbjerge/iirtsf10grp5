/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: IPumpProtocol
//!	Generated Date	: Fri, 21, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/IPumpProtocol.h
*********************************************************************/

#ifndef IPumpProtocol_H
#define IPumpProtocol_H

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
#include "math.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## class IPumpProtocol
#include "ProtocolColleague.h"
//## attribute type
#include "SimulatorRealtime.h"
//## link itsExtInputs
class ExtInputs;

//## auto_generated
class ModelMediator;

//## package Comm

//## class IPumpProtocol
class IPumpProtocol : public ProtocolColleague {
    ////    Constructors and destructors    ////
    
public :

    //## operation IPumpProtocol(ModelMediator*)
    IPumpProtocol(ModelMediator* mediator);
    
    //## auto_generated
    IPumpProtocol();
    
    //## auto_generated
    ~IPumpProtocol();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ExtInputs* getItsExtInputs() const;
    
    //## auto_generated
    void setItsExtInputs(ExtInputs* p_ExtInputs);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ExtInputs* itsExtInputs;		//## link itsExtInputs

public :

    //## auto_generated
    int getAmount() const;
    
    //## auto_generated
    void setAmount(int p_amount);
    
    //## auto_generated
    char* getName() const;
    
    //## auto_generated
    void setName(char* p_name);
    
    //## auto_generated
    SimulatorRealtime::MEDICINE_TYPES getType() const;
    
    //## auto_generated
    void setType(SimulatorRealtime::MEDICINE_TYPES p_type);

protected :

    int amount;		//## attribute amount
    
    char* name;		//## attribute name
    
    SimulatorRealtime::MEDICINE_TYPES type;		//## attribute type
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/IPumpProtocol.h
*********************************************************************/
