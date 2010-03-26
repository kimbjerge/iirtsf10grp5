/*
 * EventStimuliThread.h
 *
 *  Created on: Mar 24, 2010
 *      Author: stud
 */

#ifndef EVENTSTIMULITHREAD_H_
#define EVENTSTIMULITHREAD_H_

#include "Event.h"
#include "Thread.h"
#include "Mailbox.h"

class EventStimuliThread: public Thread {
public:
	EventStimuliThread(Mailbox<Event*>* aMailBox);
	virtual ~EventStimuliThread();
    void run();
    void SetMailBox(Mailbox<Event*>* aMailBox);
protected:
	Mailbox<Event*>* itsMailBox;
};

#endif /* EVENTSTIMULITHREAD_H_ */
