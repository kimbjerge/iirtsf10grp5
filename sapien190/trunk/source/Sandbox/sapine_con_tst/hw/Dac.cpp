/*
 * Dac.cpp
 *
 *  Created on: Apr 2, 2010
 *      Author: stud
 */

#include <fcntl.h>
#include <string.h>
#include <fstream>
#include <iostream>
#include "Dac.h"

Dac* Dac::_instance[DAC_NO_CHS]={NULL};
Mutex _mutex;

Dac::Dac(unsigned int channel) {
	// TODO Auto-generated constructor stub
	char device[20];
	printf("Constructor called\n");
	sprintf(device,"%s%i", DAC_PATH, channel);
	printf("device: %s\n", device);
	fd = open(device, O_WRONLY);
	printf("m_fd: %d\n", fd);
}

Dac::~Dac() {
	// TODO Auto-generated destructor stub
}

Dac* Dac::getInstance(unsigned int channel){

	if (channel >= 0 && channel < DAC_NO_CHS) {

		if(_instance[channel] == NULL) {
//			_mutex.wait();
			if(_instance[channel] == NULL)
				_instance[channel] = new Dac(channel);
//			_mutex.signal();
		}
		printf("Just before returning instance\n");

		return _instance[channel];
	}
	else
		return NULL;
}

int Dac::setValue(unsigned int outputValue) {

	char valString[10];
//	printf("set value called\n");
	value = outputValue;

        sprintf(valString, "%i\0", value);

//      printf("val[%i]: %s\n", fd, valString);

	write(fd, valString, 3); // Skriv to bytes til driver

	// TODO Auto-generated constructor stub
	return 0;
}

unsigned int Dac::getValue(void) {
	printf("get value called\n");
	return value;
}
