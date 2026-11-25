// Beginner problem-solving examples
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // 1. Largest of three numbers
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "Largest: " << a << '\n';
    } else if (b >= a && b >= c) {
        cout << "Largest: " << b << '\n';
    } else {
        cout << "Largest: " << c << '\n';
    }

    // 2. Average of three marks
    double m1, m2, m3;
    cout << "Enter three marks: ";
    cin >> m1 >> m2 >> m3;
    double average = (m1 + m2 + m3) / 3.0;
    cout << fixed << setprecision(2);
    cout << "Average: " << average << '\n';

    // 3. Simple interest
    double principal, rate, years;
    cout << "Enter principal, annual rate (%) and years: ";
    cin >> principal >> rate >> years;

    if (principal >= 0 && rate >= 0 && years >= 0) {
        double interest = (principal * rate * years) / 100.0;
        cout << "Simple interest: " << interest << '\n';
    } else {
        cout << "Inputs must not be negative.\n";
    }

    return 0;
}
