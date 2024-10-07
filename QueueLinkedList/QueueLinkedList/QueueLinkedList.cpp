#include<iostream>
#include"Header.h"

using namespace std;

void main() {

	LinkedQueue q;
    int choice, value;

    // Initialize choice to an invalid value
    choice = 0;

    while (true) {
        // Display menu
        cout << "Menu:" << endl;
        cout << "1. insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Search" << endl;
        cout << "4. Print" << endl;
        cout << "5. sort" << endl;
        cout << "6. get firts data" << endl;
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
            q.enqueue(value);

            break;

        case 2: // Pop
\
            q.dequeue();
            break;

        case 3: // Search
            cout << "Please insert an intger Number to see if it inside the list or not:";
            cin >> value;
            cout << endl;
            q.search(value);
            break;

        case 4: // Print
            cout << endl;
            q.print();
            break;

        case 5: // sort
            cout << endl;
            q.sort();
            break;


        case 6: // distractor to erase all the data
            cout << endl;
            q.getfront();
            break;

        case 7: // distractor to erase all the data
            cout << endl;
            q.~LinkedQueue();
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
    q.~LinkedQueue();

}