// Topic: Arrays - storing multiple values of the same type
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    int sum = 0;

    cout << "Enter " << SIZE << " integers:\n";
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "Values: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << numbers[i] << ' ';
    }

    cout << "\nSum: " << sum;
    cout << "\nAverage: " << static_cast<double>(sum) / SIZE << '\n';
    return 0;
}
