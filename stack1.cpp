#include<iostream>
#include<stack>

using namespace std;

int main () {
    stack <int> s;
    int choice = 0, number, amount;
    while (choice != 5) {
        cout << "\n1. Size of the Stack" << endl;
        cout << "2. Insert Element to the Stack" << endl;
        cout << "3. Delete Element From the Stack" << endl;
        cout << "4. Top Element of the Stack" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter Choice : ";
        cin >> choice;
        if (choice == 1) {
            cout << "\nSize of the Stack is : " << s.size() << endl;
        }
        else if (choice == 2) {
            cout << "Enter Amount of Numbers : ";
            cin >> amount;
            for (int i=0;i<amount;i++) {
                cout << "Enter Number : ";
                cin >> number;
                s.push(number);
            }
        }
        else if (choice == 3) {
            
            if (s.size() == 0) {
                cout << "No more Elements can be Popped!" << endl;
            }
            else{
            cout << "Popped Element is " << s.top() << endl;
            s.pop();
            }
        }

        else if (choice == 4) {
            if (s.size() != 0)
            cout << "Top Element of the Stack is : " << s.top() << endl;
            else {
            cout << "No elements are added." << endl;
            }
        }

        else if (choice == 5){
            cout << "Exiting..." << endl;
        }

        else
            cout << "Incorrent Choice!! Enter Again!!";

    }
    return 0;
}