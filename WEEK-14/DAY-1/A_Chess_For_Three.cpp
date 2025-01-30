#include <bits/stdc++.h>
using namespace std;

void solve() {
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;

    int total_score = p1 + p2 + p3;

    if (total_score % 2 != 0 ) {
        cout << -1 << endl;
        return;
    }

    cout << min(total_score / 2, p1 + p2) << endl;
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
