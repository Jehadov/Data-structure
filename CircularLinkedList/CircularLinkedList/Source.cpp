#include<iostream>
#include"Header.h"
using namespace std;

Clist::Clist()
{
	head = tail = NULL;
	length = 0;
}

bool Clist::isEmpty()
{
	return length == 0;
}

void Clist::push(int value)
{
	Node* Newnode = new Node;
	Newnode->item = value;
	if (isEmpty())
	{
		head = tail = Newnode;
		Newnode->next = Newnode;
	}
	else
	{
		tail->next = Newnode;
		Newnode->next = head;
		tail = Newnode;


	}
	length++;

}

void Clist::insert(int value)
{
	Node* Newnode = new Node;
	Newnode->item = value;
	if (isEmpty())
	{
		head = tail = Newnode;
		Newnode->next = head;
	}
	else
	{
		Newnode->next = head;
		head = Newnode;
		tail->next = head;
	}
	length++;

}

void Clist::sort()
{

	if (!isEmpty())
	{
		Node* i = head;
		do {
			Node* i2 = head;
			do 
			{

				if (i != i2 && i2->item > i->item)
				{
					i2->item = i2->item + i->item;
					i->item = i2->item - i->item;
					i2->item = i2->item - i->item;
				}

				i2 = i2->next;
			} while (i2 != head);

			i = i->next;
		} while (i != head);
	}
	else { cout << "the list is empty :)"; }
}

void Clist::pop()
{
	if (!isEmpty())
	{
		Node* del = head;
		head = head->next;
		tail->next = head;
		cout << "done pop the the last value" << endl;
		delete del;
		length--;

	}
	else { cout << "the list is empty" << endl; }
}

void Clist::Delete(int value)
{
	if (!isEmpty())
	{
		
		Node* i = head;
		do 
		{
			if (value == head->item)
			{
				pop();
				return;
			}
			else if (head == i->next->next)
			{
				Node* k = i->next;
				i->next = head;
				tail = i;
				cout << "done delete the the last value" << endl;
				delete k;
				length--;
				return;
			}
			else if (value == i->next->item)
			{
				Node* k = i->next;
				i->next = i->next->next;
				cout << "done delete the the last value" << endl;
				delete k;
				length--;
				return;
			}
			if (i->next == head) {
				tail == i;
			}

			i = i->next;
		} while (i != head);
		

	}
	else { cout << "the list is empty" << endl; }
}

void Clist::search(int value) {
	if (!isEmpty())
	{

		int in = 1;
		for (Node* i = head; i->next != head; i = i->next, in++)
		{
			if (i->item == value) {
				cout << "the value " << value << " dose Exist and its index is: " << in << endl;
			}
		}
	}
	else { cout << "the stack is empty or the value does noy exist!\n"; }

}





void Clist::print()
{
	if (!isEmpty())
	{
		Node* i = head;
		do {
			int in = 1;
			cout << in << "- " << i->item << endl;
			i = i->next;
			in++;
		} while (i != head);
	}
	else { cout << "the stack is empty or the value does noy exist!\n"; }

}

Clist::~Clist()
{
	while (!isEmpty()) {
		pop();
	}
}
