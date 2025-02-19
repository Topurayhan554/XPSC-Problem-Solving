#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> b(n - 2);
    
    for (int i = 0; i < n - 2; i++) {
        cin >> b[i];
    }
    
    // Check if there exist consecutive `1`s
    for (int i = 0; i < n - 3; i++) {
        if (b[i] == 1 && b[i + 1] == 1) {
            cout << "NO\n";
            return;
        }
    }
    
    // If no consecutive 1s are found, it's always possible
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
