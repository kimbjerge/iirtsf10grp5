/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Simulator
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Simulator.h
*********************************************************************/

#ifndef Simulator_H
#define Simulator_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif

#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif

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
//## class Simulator
#include "Control.h"
//## class Simulator
#include "Execute.h"
//## classInstance itsPatientModel
#include "PatientModel.h"
//## classInstance itsScenario
#include "Scenario.h"
//## package Application

//## class Simulator
class Simulator : public Control, public Execute {
public :

//#[ ignore
    //## package Application
    class ctrl_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Application
        class InBound_C : public Control {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C();
            
            //## auto_generated
            virtual ~InBound_C();
            
            ////    Operations    ////
            
            //## operation SetRecord()
            void SetRecord();
            
            //## operation StartSimulation()
            void StartSimulation();
            
            ////    Additional operations    ////
            
            //## auto_generated
            Control* getItsControl() const;
            
            //## auto_generated
            void setItsControl(Control* p_Control);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            Control* itsControl;		//## link itsControl
        };
        
        //## package Application
        class OutBound_C {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C();
            
            //## auto_generated
            virtual ~OutBound_C();
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        ctrl_C();
        
        //## auto_generated
        virtual ~ctrl_C();
        
        ////    Operations    ////
        
        //## operation connectSimulator(Simulator*)
        void connectSimulator(Simulator* part);
        
        //## operation getItsControl()
        Control* getItsControl();
        
        //## operation setItsControl(Control*)
        void setItsControl(Control* p_Control);
        
        ////    Additional operations    ////
        
        //## auto_generated
        InBound_C* getInBound() const;
        
        //## auto_generated
        OutBound_C* getOutBound() const;
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        InBound_C InBound;		//## classInstance InBound
        
        OutBound_C OutBound;		//## classInstance OutBound
    };
    
    //## package Application
    class exe_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Application
        class InBound_C : public Execute {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C();
            
            //## auto_generated
            virtual ~InBound_C();
            
            ////    Operations    ////
            
            //## operation CalcSample()
            void CalcSample();
            
            //## operation GenerateSingals()
            void GenerateSingals();
            
            ////    Additional operations    ////
            
            //## auto_generated
            Execute* getItsExecute() const;
            
            //## auto_generated
            void setItsExecute(Execute* p_Execute);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            Execute* itsExecute;		//## link itsExecute
        };
        
        //## package Application
        class OutBound_C {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C();
            
            //## auto_generated
            virtual ~OutBound_C();
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        exe_C();
        
        //## auto_generated
        virtual ~exe_C();
        
        ////    Operations    ////
        
        //## operation connectSimulator(Simulator*)
        void connectSimulator(Simulator* part);
        
        //## operation getItsExecute()
        Execute* getItsExecute();
        
        //## operation setItsExecute(Execute*)
        void setItsExecute(Execute* p_Execute);
        
        ////    Additional operations    ////
        
        //## auto_generated
        InBound_C* getInBound() const;
        
        //## auto_generated
        OutBound_C* getOutBound() const;
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        InBound_C InBound;		//## classInstance InBound
        
        OutBound_C OutBound;		//## classInstance OutBound
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Simulator();
    
    //## auto_generated
    ~Simulator();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ctrl_C* getCtrl() const;
    
    //## auto_generated
    ctrl_C* get_ctrl() const;
    
    //## auto_generated
    exe_C* getExe() const;
    
    //## auto_generated
    exe_C* get_exe() const;
    
    //## auto_generated
    PatientModel* getItsPatientModel() const;
    
    //## auto_generated
    Scenario* getItsScenario() const;

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
//#[ ignore
    ctrl_C ctrl;
    
    exe_C exe;
//#]

    PatientModel itsPatientModel;		//## classInstance itsPatientModel
    
    Scenario itsScenario;		//## classInstance itsScenario
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Simulator.h
*********************************************************************/
