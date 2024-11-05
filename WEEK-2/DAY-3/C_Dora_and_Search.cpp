#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the length of the permutation
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // Read the permutation elements
        }

        // Initialize the result as -1 (not found)
        bool found = false;

        // Iterate through the array to find a valid segment
        for (int i = 0; i < n - 1; ++i) {
            if (abs(a[i] - a[i + 1]) > 1) {
                // We found a valid pair (i, i + 1), now check if we can extend it
                // We can take (i, i + 2) if i + 2 is within bounds
                if (i + 2 < n) {
                    cout << (i + 1) << " " << (i + 3) << endl; // Output 1-based indices
                } else {
                    // If we can't extend, we can just use (i, i + 1)
                    cout << (i + 1) << " " << (i + 2) << endl; // Output 1-based indices
                }
                found = true;
                break;
            }
        }

        // If no valid segment was found
        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}