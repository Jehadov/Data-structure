#include<string>
const int Size = 5;
struct Node
{
	int item;
	Node* next;
	Node* prev;
};


class Clist
{
public:

	Clist();
	~Clist();
	bool isEmpty();
	void push(int value);
	void pop();
	void search(int value);
	void sort();
	void Delete(int value);
	void insert(int value);
	void print();

private:
	Node* head;
	Node* tail;
	int length;

};
