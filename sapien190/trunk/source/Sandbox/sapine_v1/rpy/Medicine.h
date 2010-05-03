/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Medicine
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Medicine.h
*********************************************************************/

#ifndef Medicine_H
#define Medicine_H

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
#include "Continuous.h"
//## package Application::Continuous

//## class Medicine
class Medicine {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Medicine();
    
    //## auto_generated
    ~Medicine();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getAmount() const;
    
    //## auto_generated
    void setAmount(int p_amount);
    
    //## auto_generated
    char* getType() const;
    
    //## auto_generated
    void setType(char* p_type);
    
    ////    Attributes    ////

protected :

    int amount;		//## attribute amount
    
    char* type;		//## attribute type
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Medicine.h
*********************************************************************/
