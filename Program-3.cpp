#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

    int terms = (a % 2 == 0) ? a - 1 : a;

    cout << "Output: ";
    for (int i = 0; i < terms; i++) {
        cout << (2 * i + 1);
        if (i != terms - 1)
            cout << ", ";
    }

    cout << endl;
    return 0;
}
