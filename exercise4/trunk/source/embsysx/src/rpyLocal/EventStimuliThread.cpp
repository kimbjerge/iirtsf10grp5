/*
 * EventStimuliThread.cpp
 *
 *  Created on: Mar 24, 2010
 *      Author: stud
 */

#include "EventStimuliThread.h"
#include "EventX.h"
#include "EventY.h"
#include "Event.h"
#include "Mailbox.h"

EventStimuliThread::EventStimuliThread(Mailbox<Event*>* aMailBox) : Thread(PRIORITY_NORMAL,"EventStimuliThread") {
	// TODO Auto-generated constructor stub
	itsMailBox = aMailBox;

}

EventStimuliThread::~EventStimuliThread() {
	// TODO Auto-generated destructor stub
}

void EventStimuliThread::SetMailBox(Mailbox<Event*>* aMailBox) {
//	itsMailBox = aMailbox;
}

void EventStimuliThread::run() {
	Event *eventStim;
	while(isAlive()){
	    if(rand() > 200000000)
	    	eventStim = new EventX();
	    else
	    	eventStim = new EventY();

		itsMailBox->put(eventStim);
		sleep(1);
	}

}
