#pragma once
#include<string>

struct Node {
	int info;
	Node* next;
};


class LinkedQueue {
public:
	LinkedQueue();
	~LinkedQueue();
	bool IsEmpty();
	void enqueue(int Element);
	void dequeue();
	void getfront();
	void sort();
	void print();
	void search(int value);

private:
	Node* front;
	Node* last;
	int length;
};
