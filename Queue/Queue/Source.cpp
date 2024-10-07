#include<iostream>
using namespace std;
//#define MAX_LENGTH 100
// the problem is the size
template <class t>
class arrayqueueType
{
	int maxsize;
	int last;
	int front;
	int length;
	t *arr;

public:
	arrayqueueType(int size) {
		if (size < 0)
		{
			maxsize = size * (-1);
			cout << "we change the size from nigative,the new size is "<< maxsize << endl;
		}
		else {
			maxsize = size;
			cout << "the size is "<< maxsize << endl;
		}
		front = 0;
		length = 0;
		last = - 1;
		arr = new t[maxsize];
	}
	bool isEmpty()
	{
		return length == 0;
	}
	bool isFull()
	{
		return length == maxsize;
	}
	void addqueue(t Element)
	{
		if (isFull())
		{
			cout << "the Queue is Full we can't add"<< Element << endl;
		}
		else {
			last++;
			arr[last] = Element;
			length++;
		}
	}
	void removequeue()
	{
		if (isEmpty())
		{
			cout << "the Queue is Empty";
		}
		else {
			front++;
			length--;
		}
	}
	int frontqueue()
	{
		if (!isEmpty())
		{
			cout << "the front data is: " << arr[front] << endl;
			return arr[front];
		}
		else {
			cout << "its Empty" << endl;
		}
	}
	int lastqueue()
	{
		if (!isEmpty())
		{
			cout << "the front data is: " << arr[last] << endl;
			return arr[last];
		}
		else {
			cout << "its Empty" << endl;
		}
	}
	void printqueu()
	{
		if (!isEmpty())
		{
			for (rsize_t i = front; i <= last;i++)
			{
				cout << arr[i] <<endl ;
			}
		}else {
			cout << "its Empty" << endl;
		}
		

	}
	int searchqueu(t Element)
	{
		if (!isEmpty())
		{
			for (rsize_t i = front; i <= last; i++)
			{
				if (arr[i] == Element) {

					return i;
				}
			}
		}
		else {
			cout << "its Empty" << endl;
			return -1;
		}

	}
};
void main()
{
	arrayqueueType <char> Q1(15);
	
	Q1.addqueue('A');
	Q1.addqueue('B');
	Q1.addqueue('C');
	Q1.addqueue('D');
	Q1.addqueue('E');
	Q1.addqueue('F');
	Q1.addqueue('G');
	Q1.addqueue('F');
	Q1.addqueue('H');
	Q1.addqueue('I');
	Q1.addqueue('J');
	Q1.addqueue('L');
	Q1.addqueue('M');
	Q1.addqueue('N');
	Q1.addqueue('O');
	Q1.removequeue();
	Q1.printqueu();
	Q1.frontqueue();
	Q1.lastqueue();
	cout << "the index of element " << 'G' << " is: " << Q1.searchqueu('G');

}