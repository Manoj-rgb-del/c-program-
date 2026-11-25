// Topic: Arithmetic, relational and logical operators
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Addition: " << a + b << '\n';
    cout << "Subtraction: " << a - b << '\n';
    cout << "Multiplication: " << a * b << '\n';

    if (b != 0) {
        cout << "Division: " << static_cast<double>(a) / b << '\n';
        cout << "Remainder: " << a % b << '\n';
    } else {
        cout << "Division and remainder are not possible when the second number is zero.\n";
    }

    cout << "Is a greater than b? " << (a > b) << '\n';
    cout << "Are both positive? " << (a > 0 && b > 0) << '\n';
    return 0;
}
