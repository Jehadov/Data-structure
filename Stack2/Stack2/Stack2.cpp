// Stack2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
template <class t>
class StackLink
{
    struct node 
    {
        t item;
        node* next;
    };
    node* top;
public:
    StackLink()
    {
        top = NULL;
    }
    bool isEmpty()
    {
        return (top == NULL) ;
       
    }
    void push(t val)
    {
        node* newItem = new node;
        if (newItem == NULL)
        {
            cout << "the Push are unlocated";
        }
        else
        {

            newItem->item = val;
            newItem->next = top;
            top = newItem;
        }
    }
    void pop(t& val)
    {
        if (top == NULL)
        {
            cout << "the stack is Empty";
        }
        else
        {
            val = top->item;
            node* temp = new node;
            temp = top;
            top = top->next;
            temp->next =NULL;
            delete temp;
        
        }
    }
    void GetTop(t& val)
    {
        if (top == NULL)
        {
            cout << "the stack is Empty";
        }
        else
        {
            val = top->item;
            cout << "the last data: " << val;
        
        }
    }
    void printElements()
    {
        node* show = top;
        if (top == NULL)
        {
            cout << "the stack is Empty";
        }
        else
        {
            while (show!=NULL) {
                cout << endl;
                cout << show->item;
                show = show->next;

            }
        
        }
    }

};
bool arepair(char open, char close)
{
    if (open == '(' && close == ')')return true;
    else if (open == '[' && close == ']')return true;
    else if (open == '{' && close == '}')return true;
    else return false;

}
bool areBalanced(string exp)
{
    char c;
    StackLink<char> s;
    for (size_t i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '{'|| exp[i] == '(' || exp[i] == '[' )
        {
            s.push(exp[i]);
        }
        else if (exp[i] == '}' || exp[i] == ')' || exp[i] == ']') {
            if (s.isEmpty() || arepair(s.GetTop(c), exp[i]))return false;
            else {
                s.pop(c);
            }
        }
    }
}

int main()
{
    int x;
    cout << "Hello World!\n";
    //StackLink<int> s;
    //s.push(1);
    //s.push(2);
    //s.push(3);
    //s.push(4);
    //s.push(5);
    //s.pop(x);
    //s.GetTop(x);
    //s.printElements();
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
