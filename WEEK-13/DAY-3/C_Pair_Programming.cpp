#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < m; ++i) cin >> b[i];

        vector<int> result;
        int i = 0, j = 0;
        int currentLines = k;

        bool valid = true;

        // Merge both sequences a and b
        while (i < n || j < m) {
            if (i < n && a[i] == 0) {
                result.push_back(0); // Add a new line from Monocarp
                currentLines++;
                i++;
            } else if (j < m && b[j] == 0) {
                result.push_back(0); // Add a new line from Polycarp
                currentLines++;
                j++;
            } else if (i < n && a[i] > 0 && a[i] <= currentLines) {
                result.push_back(a[i]); // Modify an existing line by Monocarp
                i++;
            } else if (j < m && b[j] > 0 && b[j] <= currentLines) {
                result.push_back(b[j]); // Modify an existing line by Polycarp
                j++;
            } else {
                valid = false;
                break;
            }
        }

        if (!valid) {
            cout << -1 << endl;
        } else {
            for (int x : result) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
