// Topic: for, while and do-while loops
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer.\n";
        return 0;
    }

    cout << "Counting with for loop: ";
    for (int i = 1; i <= n; ++i) {
        cout << i << ' ';
    }
    cout << '\n';

    int count = 1;
    cout << "Counting with while loop: ";
    while (count <= n) {
        cout << count << ' ';
        ++count;
    }
    cout << '\n';

    int value = 1;
    cout << "Counting with do-while loop: ";
    do {
        cout << value << ' ';
        ++value;
    } while (value <= n);
    cout << '\n';

    return 0;
}
