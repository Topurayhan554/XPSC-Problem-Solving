#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool found = false;

        // Iterate through the array to find valid segments
        for (int i = 1; i < n - 1; i++) {
            // We need to check triplet (a[i-1], a[i], a[i+1])
            if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
                // If a[i] is a peak
                cout << (i) << " " << (i + 1) << endl; // 1-based indices
                found = true;
                break;
            }
            else if (a[i - 1] > a[i] && a[i] < a[i + 1]) {
                // If a[i] is a valley
                cout << (i) << " " << (i + 1) << endl; // 1-based indices
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }

    return 0;
}
