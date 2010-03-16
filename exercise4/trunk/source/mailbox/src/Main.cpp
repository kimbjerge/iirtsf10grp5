//============================================================================
// Name        : mailbox.cpp
// Author      : Kim Bjerge
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Mailbox.h"
#include <iostream>
using namespace std;
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM_THREADS	2

class Test
{
public:
	Test() { value = 0; }
	Test(int val) { value = val; }
	int getVal(void) { return value; }

private:
		int value;
};

void test1(void)
{
    Test t1(1);
    Test t2(2);
    Test t3(3);
    Test t4(4);
    Test t5(5);
    Test t(0);
    int size;
    // Test of nonblocking mailbox
	Mailbox<class Test> mailbox(4, false);

	cout << "Start test of nonblocking mailbox" << endl;

	// Overfill mailbox
	mailbox.put(t1);
	t = mailbox.get();
	mailbox.put(t1);
	mailbox.put(t2);
	mailbox.put(t3);
	mailbox.put(t4);
	mailbox.put(t5);

	size = mailbox.getSize();
    printf("Size of mailbox id#%d!\n", size);

	// Empty mailbox
	t = mailbox.get();
    printf("Get test id#%d!\n", t.getVal());
	t = mailbox.get();
    printf("Get test id#%d!\n", t.getVal());
	t = mailbox.get();
    printf("Get test id#%d!\n", t.getVal());
	t = mailbox.get();
    printf("Get test id#%d!\n", t.getVal());
	t = mailbox.get();
    printf("Get test id#%d!\n", t.getVal());

	size = mailbox.getSize();
    printf("Size of mailbox id#%d!\n", size);

    cout << "End test of nonblocking mailbox" << endl;
}

// Blocking mailbox shared between producer and consumer
Mailbox<class Test> m_mailbox(6);

void *Producer(void *threadid)
{
   Test t1(1);
   Test t2(2);
   Test t3(3);
   Test t4(4);
   Test t5(5);
   long tid;
   tid = (long)threadid;

   printf("Producer start, thread #%ld!\n", tid);

   m_mailbox.put(t1);
   sleep(5);
   m_mailbox.put(t2);
   sleep(5);
   m_mailbox.put(t3);
   sleep(5);
   m_mailbox.put(t4);
   sleep(5);
   m_mailbox.put(t5);
   m_mailbox.put(t1);
   m_mailbox.put(t2);
   m_mailbox.put(t3);
   m_mailbox.put(t4);
   sleep(5);
   m_mailbox.put(t5);
   sleep(5);
   m_mailbox.put(t1);
   m_mailbox.put(t2);
   m_mailbox.put(t3);
   sleep(5);
   m_mailbox.put(t4);
   m_mailbox.put(t5);

   printf("Producer end, thread #%ld!\n", tid);

   pthread_exit(NULL);
}

void *Consumer(void *threadid)
{
   long tid;
   tid = (long)threadid;
   Test t;

   printf("Consumer start, thread #%ld!\n", tid);
   while (1)
   {
	   t = m_mailbox.get();
	   printf("Get test id#%d!\n", t.getVal());
   }
   pthread_exit(NULL);
}

void test2(void)
{
	pthread_t threads[NUM_THREADS];
	int rc;
	long t = 0;

	rc = pthread_create(&threads[1], NULL, Producer, (void *)t);
	if (rc){
		printf("ERROR; return code from pthread_create() is %d\n", rc);
		exit(-1);
	}
	rc = pthread_create(&threads[2], NULL, Consumer, (void *)t);
	if (rc){
		printf("ERROR; return code from pthread_create() is %d\n", rc);
		exit(-1);
	}

	sleep(40);
}

int main()
{
	// Nonblocking test - same thread
	test1();
	// Blocking test - producer and consumer
	test2();

	cout << "Test of mailbox ended" << endl;
	return 0;
}
