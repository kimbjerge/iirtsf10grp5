#ifndef Mailbox_H
#define Mailbox_H
#include "Mutex.h"

template <class Item> class Mailbox
{

public:
    Mailbox(const long int cap);
    ~Mailbox();
	void put(Item n);
	Item get(void);
	int getSize(void)
	{
		return num_mails;
	}

private:
	void increment(int &idx);

	Mutex* pMutex;
	long int capacity;
	int num_mails;
	int first;
	int last;
    Item *mails;
};

// Mailbox template constructor
template <class Item> Mailbox<Item>::Mailbox(const long int cap)
{
	pMutex = new Mutex();
	capacity = cap;
	num_mails = 0;
	first = 0;
	last = 0;
	mails = new Item[capacity];
};

// Mailbox template destructor
template <class Item> Mailbox<Item>::~Mailbox()
{
	delete pMutex;
};

template <class Item> void Mailbox<Item>::increment(int &idx)
{
	idx++;
	if (idx == capacity) idx = 0;
};

// Mailbox template put Item
template <class Item> void Mailbox<Item>::put(Item n)
{
	// Don't wait if mailbox is full
	if (num_mails < capacity)
	{
		// Mutex to ensure atomic operation
		pMutex->wait();
		if (num_mails < capacity)
		{
			mails[first] = n;
			increment(first);
			num_mails++;
		}
		pMutex->signal();
	}
};

// Mailbox template get Item
template <class Item> Item Mailbox<Item>::get(void)
{
	Item item = 0;

	// Don't wait if mailbox is empty
	if (num_mails > 0)
	{
		// Mutex to ensure atomic operation
		pMutex->wait();
		if (num_mails > 0)
		{
			item = mails[last];
			increment(last);
			num_mails--;
			// Reset pointers when mailbox is empty
			if (num_mails == 0)
			{
				first = 0;
				last = 0;
			}
		}
		pMutex->signal();
	}
	return item;

};

#endif
