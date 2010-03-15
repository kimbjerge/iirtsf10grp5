//============================================================================
// Name        : testSem.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include "BinarySemaphore.h"
#include "CountingSemaphore.h"
#define NUM_THREADS	5
using namespace std;

void *PrintHello(void *threadid)
{
   long tid;
   tid = (long)threadid;
   printf("Hello World! It's me, thread #%ld!\n", tid);
   pthread_exit(NULL);
}

int main(int argc, char *argv[])
{
	pthread_t threads[NUM_THREADS];
//	CountingSemaphore sem1 = new CountingSemaphore(3);
	int rc;
	long t;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	for(t=0;t<NUM_THREADS;t++){
		printf("In main: creating thread %ld\n", t);
		rc = pthread_create(&threads[t], NULL, PrintHello, (void *)t);
		if (rc){
			printf("ERROR; return code from pthread_create() is %d\n", rc);
			exit(-1);
		}
	}
	pthread_exit(NULL);
	return 0;
}
