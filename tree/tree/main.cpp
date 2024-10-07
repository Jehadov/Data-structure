#include<iostream>
#include"Header.h"
#include<string>
using namespace std;

void main() {
    int choice, value;
    tree T;

    // Initialize choice to an invalid value
    choice = 0;

    while (true) {
        // Display menu
        cout << "Menu:" << endl;
        cout << "1. insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Search" << endl;
        cout << "4. Print" << endl;
        cout << "5. min" << endl;
        cout << "6. max" << endl;
        cout << "7. print by queue" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice (1-8): ";
        cin >> choice;
        

        switch (choice) {

        case 1: // Push
            cout << "Please insert an intger Number and will get save in linked list:";
            cin >> value;
            T.insert(value);
            cout << endl;

            break;

        case 2: // Pop
            cout << "Please insert an intger Number if the list not contain the data it will not give you a message:";
            cin >> value;
            T.~tree();
            cout << endl;
            break;

        case 3: // Search
            cout << "Please insert an intger Number to see if it inside the list or not:";
            cin >> value;
            T.search(value);
            cout << endl;
            break;

        case 4: // Print
            T.print();
            break;

        case 5: // sort
            cout << endl;
            cout<<T.MinValue();
            cout << endl;
            break;


        case 6: // distractor to erase all the data
            cout << endl;
            cout<<T.MaxValue();
            cout << endl;
            break;

        case 7: // Exit
            cout << endl;
            T.printbyqueue();
            break;

        case 8: // Exit
            cout << endl;
            exit(0);
            break;

        default:
            cout << "Invalid choice. Please enter a number between 1 and 8." << endl;
            cout << endl;
            break;
        }
    }
    //person.~Clist();



    T.~tree();

}