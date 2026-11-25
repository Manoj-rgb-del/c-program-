// Topic: Functions - reusable blocks of code
#include <iostream>
using namespace std;

int add(int first, int second) {
    return first + second;
}

bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Sum: " << add(a, b) << '\n';

    if (isEven(a)) {
        cout << a << " is even.\n";
    } else {
        cout << a << " is odd.\n";
    }

    return 0;
}
