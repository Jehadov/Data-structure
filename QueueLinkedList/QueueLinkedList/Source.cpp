#pragma once
#include<iostream>
#include"Header.h"
using namespace std;

LinkedQueue::LinkedQueue()
{
	front = last = NULL;
	length = 0;
}

LinkedQueue::~LinkedQueue()
{
	while (!IsEmpty())
	{
		dequeue();
	}
}

bool LinkedQueue::IsEmpty()
{
	return length == 0;
}
void LinkedQueue::enqueue(int Element)
{
	if (IsEmpty())
	{
		front = new Node;
		front->info = Element;
		front->next = NULL;
		last = front;
		length++;

	}
	else {
		Node* newQueue = new Node;
		newQueue->info = Element;
		newQueue->next = NULL;
		last->next = newQueue;
		last = newQueue;
		length++;

	}
}
void LinkedQueue::dequeue()
{
	if (IsEmpty())
	{
		cout << "the queue is Empty";

	}
	else {
		Node* temp = front;
		if (front == last)
		{
			front == NULL;
			last == NULL;
			length--;
		}
		else {
			front = front->next;
			temp->next = NULL;
			length--;

			delete temp;
		}

	}
}
void LinkedQueue::getfront()
{
	if (IsEmpty()) {
		cout << "the Queue is Empty \n";
		return ;
	}
	else
	{
		cout << front->info << endl;
		
	}
}

void LinkedQueue::search(int value) {
	if (!IsEmpty())
	{

		int in = 1;
		for (Node* i = front; i != NULL; i = i->next, in++)
		{
			if (i->info == value) {
				cout << "the value " << value << " dose Exist and its index is: " << in << endl;
			}
		}
	}
	else { cout << "the stack is empty or the value does noy exist!\n"; }

}

void LinkedQueue::print()
{
	if (!IsEmpty())
	{
		int in = 1;
		for (Node* i = front; i != NULL; i = i->next, in++)
		{
			cout << in << "- " << i->info << endl ;
		}
	}
	else { cout << "the stack is empty or the value does noy exist!\n"; }

}

void LinkedQueue::sort()
{

	if (!IsEmpty())
	{
		for (Node* i = front; i != NULL; i = i->next)
		{
			for (Node* i2 = front; i2 != NULL; i2 = i2->next)
			{
				if (i != i2 && i2->info > i->info)
				{
					i2->info = i2->info + i->info;
					i->info = i2->info - i->info;
					i2->info = i2->info - i->info;
				}

			}

		}
	}
	else { cout << "the list is empty :)"; }
}

