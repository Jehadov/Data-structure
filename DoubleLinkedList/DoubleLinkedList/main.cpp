#include<iostream>
#include"Header.h"
#include<string>
using namespace std;

struct Student
{

};
void main() {
    Clist person;
    int choice, value;

    // Initialize choice to an invalid value
    choice = 0;

    while (true) {
        // Display menu
        cout << "Menu:" << endl;
        cout << "1. insert" << endl;
        cout << "2. insert" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Search" << endl;
        cout << "5. Print" << endl;
        cout << "6. sort" << endl;
        cout << "7. Erase" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice (1-8): ";
        cin >> choice;
        clear87;

        switch (choice) {
        case 1: // Push
            cout << "Please insert an intger Number and will get save in linked list:";
            cin >> value;
            cout << endl;
            person.push(value);

            break;

        case 2: // Push
            cout << "Please insert an intger Number and will get save in linked list:";
            cin >> value;
            cout << endl;
            person.insert(value);

            break;

        case 3: // Pop
            cout << "Please insert an intger Number if the list not contain the data it will not give you a message:";
            cin >> value;
            cout << endl;
            person.Delete(value);
            break;

        case 4: // Search
            cout << "Please insert an intger Number to see if it inside the list or not:";
            cin >> value;
            cout << endl;
            person.search(value);
            break;

        case 5: // Print
            cout << endl;
            person.print();
            break;

        case 6: // sort
            cout << endl;
            person.sort();
            break;


        case 7: // distractor to erase all the data
            cout << endl;
            person.~Clist();
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
    person.~Clist();





}