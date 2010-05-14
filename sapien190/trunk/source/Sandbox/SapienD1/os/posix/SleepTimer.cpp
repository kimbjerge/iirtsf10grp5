/*
 * SleepTimer.cpp
 *
 *  Created on: Mar 15, 2010
 *      Author: stud
 */


#include "SleepTimer.h"
#include <stdlib.h>
#include <unistd.h>

SleepTimer::SleepTimer() {
	// TODO Auto-generated constructor stub
}

void SleepTimer::sleep(long ms){

	usleep(ms * 1000);

}

SleepTimer::~SleepTimer() {
	// TODO Auto-generated destructor stub
}
