#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        // Calculate the upper bound for binary search
        ll l = 0, r = ceil(sqrt(2 * n)), mid, ans;

        // Perform binary search
        while (l <= r) {
            mid = l + (r - l) / 2;

            // Calculate number of combinations using mid balls
            ll tmp = (mid * (mid - 1)) / 2;

            if (tmp <= n) {
                ans = mid;  // Valid potential answer
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        // Calculate leftover balls to complete `n`
        ll val = n - (ans * (ans - 1)) / 2;

        // Output the result
        cout << ans + val << endl;
    }

    return 0;
}
