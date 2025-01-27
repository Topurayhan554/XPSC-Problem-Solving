#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

// Function to check if it is possible to earn at least c coins with a given k
bool Possible(vector<ll>& a, ll n, ll d, ll c, ll k) {
    if (k == 0) {
        // If k = 0, we can repeat the most rewarding quest every day
        return (a[0] * d >= c);
    }

    ll sum = 0, gain = 0;

    // Calculate the sum of the top k rewards
    if (k >= n) {
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }
    } else {
        for (int i = 0; i < k; i++) {
            sum += a[i];
        }
    }

    // Full cycles of k days
    ll times = d / k;
    gain = times * sum;

    // Remaining days
    ll rem = d % k;
    if (rem >= n) {
        for (int i = 0; i < n; i++) {
            gain += a[i];
        }
    } else {
        for (int i = 0; i < rem; i++) {
            gain += a[i];
        }
    }

    return (gain >= c);
}

int main() {
    Faster;
    int t;                      // Number of test cases
    cin >> t;

    while (t--) {
        ll n, c, d;             // n = number of quests, c = required coins, d = days available
        cin >> n >> c >> d;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<ll>()); // Sort rewards in descending order

        ll total = 0;             // Total coins that can be earned in d days
        for (int i = 0; i < min(n, (int)d); i++) {
            total += a[i];
        }

        // Check for "Infinity" case
        if (total >= c) {
            cout << "Infinity" << endl;
            continue;
        }

        ll ans = -1, low = 0, high = d;

        // Binary search to find the maximum k
        while (low <= high) {
            ll mid = low + (high - low) / 2;
            if (Possible(a, n, d, c, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // Output the result
        if (ans == -1) {
            cout << "Impossible" << endl;
        } else {
            cout << ans << endl;
        }
    }

    return 0;
}
