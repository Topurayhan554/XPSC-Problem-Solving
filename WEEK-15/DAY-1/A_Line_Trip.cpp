#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mx = 0;
    
    // Check the distance between consecutive stations
    for (int i = 1; i < n; i++) {
        mx = max(mx, (a[i] - a[i - 1]));
    }
    
    // Check the distance from 0 to the first station
    mx = max(mx, a[0]-0);
    
    // Check the distance from the last station to x (destination)
    mx = max(mx, 2*(x - a[n - 1]));
    
    cout << mx << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
