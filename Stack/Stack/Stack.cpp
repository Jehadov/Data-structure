// Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template <class t>
class Stack {
    int top;
    t item[100];
public:
    Stack():top (-1){}
    bool IsFull()
    {
        if (top == 100) return false;
        else return true;
    }
    bool IsEmpty()
    {
        if (top == -1) return false;
        else return true;
    }
    void Push(t value)
    {
        if (!IsFull())
        {
            cout << "The Stack is Full My Friend :)";
        }
        else {
            top++;
            item[top] = value;
        }
    }
    void Pop(t&value)
    {
        if (!IsEmpty())
        {
            cout << "The Stack is Empty My Friend :)";
        }
        else {
            top--;
            value = item[top];
        }
    }
    void GetTop(t&value)
    {
        if (!IsEmpty())
        {
            cout << "The Stack is Empty My Friend :)";
        }
        else {
            
            cout<< "the data is :" << item[top];
        }
    }
    void PrintAllElement()
    {
        for (int i = top; i > -1 ; i--)
        {
            cout << endl;
            cout << item[i];
        }
        cout << endl; cout << endl;
    }
};
int main()
{
    cout << "Hello World!\n";
    char x;
    Stack<char> s;
    s.Push('H');
    s.Push('s');
    s.Push('l');
    s.Push('e');
    s.Pop(x);
    s.GetTop(x);
    s.PrintAllElement();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
