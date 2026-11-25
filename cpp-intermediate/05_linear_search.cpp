// Algorithm: Linear Search - check each element one by one
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    int values[SIZE];

    cout << "Enter " << SIZE << " integers:\n";
    for (int i = 0; i < SIZE; ++i) {
        cin >> values[i];
    }

    int target;
    cout << "Enter the value to search: ";
    cin >> target;

    int foundIndex = -1;
    for (int i = 0; i < SIZE; ++i) {
        if (values[i] == target) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1) {
        cout << "Value not found.\n";
    } else {
        cout << "Value found at index " << foundIndex
             << " (position " << foundIndex + 1 << ").\n";
    }

    return 0;
}
