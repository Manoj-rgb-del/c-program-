// Topic: std::string basics
#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName;
    string fullName;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your full name: ";
    cin.ignore();
    getline(cin, fullName);

    cout << "First name: " << firstName << '\n';
    cout << "Full name: " << fullName << '\n';
    cout << "Number of characters in full name: " << fullName.length() << '\n';

    return 0;
}
