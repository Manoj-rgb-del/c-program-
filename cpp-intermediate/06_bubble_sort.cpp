// Algorithm: Bubble Sort - sort values in ascending order
#include <iostream>
#include <utility>
using namespace std;

int main() {
    const int SIZE = 5;
    int values[SIZE];

    cout << "Enter " << SIZE << " integers:\n";
    for (int i = 0; i < SIZE; ++i) {
        cin >> values[i];
    }

    for (int pass = 0; pass < SIZE - 1; ++pass) {
        bool swapped = false;

        for (int j = 0; j < SIZE - 1 - pass; ++j) {
            if (values[j] > values[j + 1]) {
                swap(values[j], values[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) break; // Already sorted
    }

    cout << "Sorted values: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << values[i] << ' ';
    }
    cout << '\n';

    return 0;
}
