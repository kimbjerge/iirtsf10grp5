/*
 * Thread.cpp
 *
 *  Created on: Mar 12, 2010
 *      Author: stud
 */

#include "Thread.h"

void * InitializeThread(void* p){
	Thread* t = (Thread *)p;
	t->run();
        pthread_exit(NULL);
}

void Thread::run(){
	_isAlive = true;
}

bool Thread::isAlive(){
	return _isAlive;
}

void Thread::kill(){
	_isAlive = false;
        cout << "Kill Thread " << getName()  << endl;
        //pthread_cancel(thread);
}

Thread::Thread(ThreadPriority _pri,string _name) {
	this->name = _name;
	this->priority = _pri;
}

void Thread::setPriority(ThreadPriority _pri){
     int policy;
     int rv;
     sched_param param;
     rv = pthread_getschedparam(thread, &policy, &param);
     if (rv == 0)
     {
         this->priority = _pri;
         param.sched_priority = translatePriority(policy);
         std::cout << "setPriority " << param.sched_priority << " Thread " << this->name << std::endl;
         rv = pthread_setschedparam(thread, policy, &param );
         if (rv != 0)
             std::cout << "Error setting priority for thread " << this->name << std::endl;
     }
}

int Thread::translatePriority(int policy)
{
    int prio;
    //int pid = getpid();
    //int algo = sched_getscheduler(pid);
    //int pol = SCHED_OTHER;
    int max_prio = sched_get_priority_min(policy);
    int min_prio = sched_get_priority_max(policy);
    int diff = max_prio - min_prio;

    switch (this->priority)
    {
        case PRIORITY_LOW:
            prio = min_prio;
        break;
        case PRIORITY_BELOW_NORMAL:
            prio = min_prio + diff/4;
        break;
        case PRIORITY_NORMAL:
            prio = min_prio + diff/2;
        break;
        case PRIORITY_ABOVE_NORMAL:
            prio = min_prio + (diff/4)*3;
        break;
        case PRIORITY_HIGH:
            prio = max_prio;
        break;
        default:
            break;
    }

    return prio;
}


ThreadPriority Thread::getPriority()
{
    int policy;
    int rv;
    sched_param param;
    rv = pthread_getschedparam(thread, &policy, &param);
    return this->priority;
}

string Thread::getName(){
	return this->name;
}

void Thread::start(){
    _isAlive = true;
    threadId = pthread_create(&thread,NULL,InitializeThread,(void *)this);
    //int thread_Id = pthread_create(&this->thread,NULL,InitializeThread,(void *)this);
}


Thread::~Thread() {
	// TODO Auto-generated destructor stub
}
