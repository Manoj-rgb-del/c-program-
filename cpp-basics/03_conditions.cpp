// Topic: if, else-if, else and switch
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0) {
        cout << "Positive\n";
    } else if (number < 0) {
        cout << "Negative\n";
    } else {
        cout << "Zero\n";
    }

    if (number % 2 == 0) {
        cout << "Even\n";
    } else {
        cout << "Odd\n";
    }

    int choice;
    cout << "Enter a menu choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "You selected One\n"; break;
        case 2: cout << "You selected Two\n"; break;
        case 3: cout << "You selected Three\n"; break;
        default: cout << "Invalid choice\n";
    }

    return 0;
}
