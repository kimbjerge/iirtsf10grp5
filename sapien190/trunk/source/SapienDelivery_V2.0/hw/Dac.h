/*
 * Dac.h
 *
 *  Created on: Apr 2, 2010
 *      Author: stud
 */

#ifndef DAC_H_
#define DAC_H_

#include "os/posix/Mutex.h"

#define DAC_NO_CHS 2
#define DAC_PATH "/dev/dac"

class Dac {
public:
	static Dac* getInstance(unsigned int channel);
	int setValue(unsigned int value);
	unsigned int getValue();
private:
	Dac(unsigned int channel);
	virtual ~Dac();
	static Dac* _instance[DAC_NO_CHS];
	static Mutex* _mutex;
//	Mutex *mutex;// = new Mutex();
	unsigned int value;
	int fd;
        bool toggleTest;
};

#endif /* DAC_H_ */
