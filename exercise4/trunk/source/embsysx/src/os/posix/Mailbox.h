#ifndef Mailbox_H
#define Mailbox_H
#include "Mutex.h"
#include "CountingSemaphore.h"

// Mailbox - blocking or nonblocking
// Default the mailbox is blocking when mailbox is empty
// Waiting at a semaphore for items to be put in mailbox
// If nonblocking - get returns 0 if mailbox is empty
// put returns false if the mailbox is full
template <class Item> class Mailbox
{

public:
    Mailbox(const long int cap, bool blocking = true);
    ~Mailbox();
	bool put(Item n);
	Item get(void);
	int getSize(void)
	{
		return num_mails;
	}

private:
	void increment(int &idx);

	Mutex* pMutex;
	CountingSemaphore *pSemaphore;
	long int capacity;
	int num_mails;
	int first;
	int last;
	bool block;
    Item *mails;
};

// Mailbox template constructor
template <class Item> Mailbox<Item>::Mailbox(const long int cap, bool blocking)
{
	capacity = cap;
	num_mails = 0;
	first = 0;
	last = 0;
	block = blocking;
	if (block)
  	  pSemaphore = new CountingSemaphore(0);
	pMutex = new Mutex();
	mails = new Item[capacity];
};

// Mailbox template destructor
template <class Item> Mailbox<Item>::~Mailbox()
{
	if (block)
		delete pSemaphore;
	delete pMutex;
	delete mails;
};

template <class Item> void Mailbox<Item>::increment(int &idx)
{
	idx++;
	if (idx == capacity) idx = 0;
};

// Mailbox template put Item
template <class Item> bool Mailbox<Item>::put(Item n)
{
	bool succeded = false;

	// Mutex to handle atomic access of mailbox
	pMutex->wait();
	if (num_mails < capacity)
	{
		mails[first] = n;
		increment(first);
		num_mails++;
		succeded = true;
	}
	pMutex->signal();

	// Signal new mail in mailbox
	if (block and succeded)
		pSemaphore->signal();

	return succeded;
};

// Mailbox template get Item
template <class Item> Item Mailbox<Item>::get(void)
{
	Item item = 0;
	bool succeded = false;

	while (!succeded)
	{
		// Wait for mails if blocking mailbox
		if (block and num_mails == 0)
		{
			pSemaphore->wait();
		}

		// Mutex to ensure atomic operation
		pMutex->wait();
		// Ensure mail in mailbox
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
			succeded = true;
		}
		pMutex->signal();

		// Exit if nonblocking
		if (!block) break;
	}

	return item;
};

#endif
