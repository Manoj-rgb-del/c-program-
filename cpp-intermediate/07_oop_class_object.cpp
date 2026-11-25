// Topic: OOP - a class is a blueprint; an object is an instance
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    void setDetails(const string& studentName, int studentMarks) {
        name = studentName;
        marks = studentMarks;
    }

    void displayDetails() const {
        cout << "Name: " << name << '\n';
        cout << "Marks: " << marks << '\n';
    }
};

int main() {
    Student student1;

    string name;
    int marks;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter marks: ";
    cin >> marks;

    student1.setDetails(name, marks);
    student1.displayDetails();

    return 0;
}
