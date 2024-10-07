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
		Newnode->next = NULL;
	}
	else
	{
		tail->next = Newnode;
		tail = tail->next;
		Newnode->next = NULL;


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
		Newnode->next = NULL;
	}
	else
	{
		Newnode->next = head;
		head = Newnode;


	}
	length++;

}

void Clist::sort()
{

	if (!isEmpty())
	{
		for (Node* i = head; i != NULL; i = i->next)
		{
			for (Node* i2 = head; i2 != NULL; i2 = i2->next)
			{
				if (i != i2 && i2->item > i->item)
				{
					i2->item = i2->item + i->item;
					i->item = i2->item - i->item;
					i2->item = i2->item - i->item;
				}

			}
			
		}
	}
	else {cout << "the list is empty :)";}
}

void Clist::pop()
{
	if (!isEmpty())
	{
		Node* del = head;
		head = head->next;
		cout << "done pop the the last value"<<endl;
		delete del;
		length--;

	}
	else { cout << "the list is empty" << endl; }
}

void Clist::Delete(int value)
{
	if (!isEmpty())
	{
		int in = 1;
		for (Node* i = head; i != NULL; i = i->next, in++)
		{
			if (value == head->item)
			{
				pop();
				return;
			}
			else if (NULL == i->next->next)
			{
				Node* k = i->next;
				i->next = NULL;
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
			if (i->next == NULL) {
				tail == i;
				tail->next = NULL;
			}
		}
		
	}
	else { cout << "the list is empty" << endl; }
}

//void Clist::Delete(Node* value)
//{
//	if (!isEmpty())
//	{
//		int in = 1;
//		for (Node* i = head; i != NULL; i = i->next, in++)
//		{
//			if (value == head)
//			{
//				pop();
//				return;
//			}
//			else if (NULL == i->next->next)
//			{
//				Node* k = i->next;
//				i->next = NULL;
//				cout << "done delete the the last value" << endl;
//				delete k;
//				length--;
//				return;
//			}
//			else if (value == i->next)
//			{
//				Node* k = i->next;
//				i->next = i->next->next;
//				cout << "done delete the the last value" << endl;
//				delete k;
//				length--;
//				return;
//			}
//		}
//		
//	}
//	else { cout << "the list is empty" << endl; }
//}

void Clist::search(int value) {
	if (!isEmpty())
	{

		int in = 1;
		for (Node* i = head; i != NULL; i = i->next, in++)
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
		int in = 1;
		for (Node* i = head; i != NULL; i=i->next,in++)
		{
			cout << in << "- " << i->item << endl;
		}
	}
	else { cout << "the stack is empty or the value does noy exist!\n"; }

}

Clist::~Clist()
{
	while (!isEmpty()) {
		pop();
	}
}
