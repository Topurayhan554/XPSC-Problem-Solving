#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        // If a and b can't satisfy the constraints
        if (a > n / 2 || b <= n / 2) {
            cout << -1 << endl;
            continue;
        }

        vector<int> perm(n);
        int leftSize = n / 2;  // Size of the left half
        int rightSize = n / 2; // Size of the right half

        // Fill the permutation with numbers 1 to n
        for (int i = 0; i < n; ++i) {
            perm[i] = i + 1;
        }

        // Place `a` as the minimum in the left half and `b` as the maximum in the right half
        perm[0] = a;
        perm[n - 1] = b;

        // Create a vector of unused numbers
        vector<int> unused;
        for (int i = 1; i <= n; ++i) {
            if (i != a && i != b) {
                unused.push_back(i);
            }
        }

        // Fill the left half (excluding `a`) and the right half (excluding `b`)
        int idx = 0;
        for (int i = 1; i < leftSize; ++i) {
            perm[i] = unused[idx++];
        }
        for (int i = leftSize; i < n - 1; ++i) {
            perm[i] = unused[idx++];
        }

        // Verify the result: minimum in the left half is `a` and maximum in the right half is `b`
        int minLeft = *min_element(perm.begin(), perm.begin() + leftSize);
        int maxRight = *max_element(perm.begin() + leftSize, perm.end());

        if (minLeft == a && maxRight == b) {
            for (int i = 0; i < n; ++i) {
                cout << perm[i] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
