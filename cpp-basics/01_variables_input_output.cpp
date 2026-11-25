// Topic: Variables, data types, input and output
#include <iostream>
using namespace std;

int main() {
    int age;
    double marks;
    char grade;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "\nAge: " << age << '\n';
    cout << "Marks: " << marks << '\n';
    cout << "Grade: " << grade << '\n';

    return 0;
}
