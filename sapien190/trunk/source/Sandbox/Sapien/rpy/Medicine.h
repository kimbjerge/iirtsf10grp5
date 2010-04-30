/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Medicine
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: DefaultComponent/DefaultConfig/Medicine.h
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
	File Path	: DefaultComponent/DefaultConfig/Medicine.h
*********************************************************************/
