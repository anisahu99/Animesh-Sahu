#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    vector<int> input = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    map<int, int> count;

    // Initialize map with keys 1 to 9
    for (int i = 1; i <= 9; i++) {
        count[i] = 0;
    }

    // Check divisibility
    for (int num : input) {
        for (int i = 1; i <= 9; i++) {
            if (num % i == 0) {
                count[i]++;
            }
        }
    }

    // Print output
    cout << "{";
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << count[i];
        if (i != 9) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}
