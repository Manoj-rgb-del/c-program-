// Find the smallest and largest values in an array
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a size greater than zero.\n";
        return 0;
    }

    int* values = new int[n];
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }

    int smallest = values[0];
    int largest = values[0];

    for (int i = 1; i < n; ++i) {
        if (values[i] < smallest) smallest = values[i];
        if (values[i] > largest) largest = values[i];
    }

    cout << "Smallest: " << smallest << '\n';
    cout << "Largest: " << largest << '\n';

    delete[] values;
    return 0;
}
