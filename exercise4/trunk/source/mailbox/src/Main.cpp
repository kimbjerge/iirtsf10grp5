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

class Test
{
public:
	Test() { value = 0; }
	Test(int val) { value = val; }
	int getVal(void) { return value; }

private:
		int value;
};

int main() {
    Test t1(1);
    Test t2(2);
    Test t3(3);
    Test t4(4);
    Test t5(5);
    Test t(0);
    int size;

	Mailbox<class Test> mailbox(4);

	cout << "Test of mailbox and mutex" << endl;

	// Overfill mailbox
	mailbox.put(t1);
	t = mailbox.get();
	mailbox.put(t1);
	mailbox.put(t2);
	mailbox.put(t3);
	mailbox.put(t4);
	mailbox.put(t5);

	size = mailbox.getSize();

	// Empty mailbox
	t = mailbox.get();
	t = mailbox.get();
	t = mailbox.get();
	t = mailbox.get();
	t = mailbox.get();

	size = mailbox.getSize();

	return 0;
}
