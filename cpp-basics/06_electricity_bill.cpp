// Practice example: Electricity bill using slabs.
// Sample rates are for programming practice only, not an official tariff.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int units;
    double bill = 0.0;

    cout << "Enter units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Units cannot be negative.\n";
        return 0;
    }

    if (units <= 100) {
        bill = units * 1.50;
    } else if (units <= 200) {
        bill = 100 * 1.50 + (units - 100) * 2.50;
    } else {
        bill = 100 * 1.50 + 100 * 2.50 + (units - 200) * 4.00;
    }

    cout << fixed << setprecision(2);
    cout << "Practice bill amount: Rs. " << bill << '\n';
    return 0;
}
