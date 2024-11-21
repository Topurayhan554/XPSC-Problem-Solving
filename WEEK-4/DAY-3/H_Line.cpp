#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        int n;
        cin >> n; // Read the length of the line
        string line;
        cin >> line; // Read the arrangement of people

        // Step 1: Calculate the initial value and potential gains
        long long totalValue = 0;
        vector<long long> gains(n, 0);

        // Calculate the initial visibility
        for (int i = 0; i < n; i++) {
            if (line[i] == 'L') {
                long long count = 0;
                // Count people to the left
                for (int j = i - 1; j >= 0; j--) {
                    if (line[j] == 'L') break; // Stop if we encounter another L
                    count++;
                }
                totalValue += count; // Current count for L
                gains[i] = count; // Gain if we flip L to R
            } else { // line[i] == 'R'
                long long count = 0;
                // Count people to the right
                for (int j = i + 1; j < n; j++) {
                    if (line[j] == 'R') break; // Stop if we encounter another R
                    count++;
                }
                totalValue += count; // Current count for R
                gains[i] = count; // Gain if we flip R to L
            }
        }

        // Step 2: Calculate maximum values for each k
        vector<long long> result(n);
        result[0] = totalValue; // Initial value with k = 0

        // Sort gains in descending order to maximize potential increases
        sort(gains.rbegin(), gains.rend());

        long long currentMax = totalValue; // Start with the initial value
        for (int k = 1; k <= n; k++) {
            currentMax += gains[k - 1]; // Add the k-th best gain
            result[k - 1] = currentMax; // Store the result for k
        }

        // Output the results for this test case
        for (int k = 0; k < n; k++) {
            cout << result[k] << (k == n - 1 ? "" : " ");
        }
        cout << endl; // New line for next test case
    }

    return 0;
}
