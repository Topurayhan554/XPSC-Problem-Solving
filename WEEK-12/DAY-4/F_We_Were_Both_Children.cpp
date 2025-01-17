#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        int n;
        cin >> n; // Read number of frogs
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; // Read hop lengths
        }

        vector<ll> freq(n + 1, 0); // Frequency array to count frogs at each position

        // Count how many frogs can hop to each position
        for (int i = 0; i < n; i++) {
            if (a[i] <= n) {
                freq[a[i]]++; // Increment the count for the hop length
            }
        }

        ll maxFrogs = 0; // Variable to store the maximum number of frogs caught
        // Calculate the maximum number of frogs that can be caught at any position
        for (int i = 1; i <= n; i++) {
            ll count = 0; // Count of frogs that can be caught at position i
            for (int j = i; j <= n; j += i) {
                count += freq[j]; // Add the count of frogs that can hop to j
            }
            maxFrogs = max(maxFrogs, count); // Update the maximum
        }

        cout << maxFrogs << endl; // Output the result for the current test case
    }

    return 0;
}