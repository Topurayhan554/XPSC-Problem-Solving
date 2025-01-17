#include <iostream>
#include <set>
#include <vector>

using namespace std;

// Function to find all divisors of a number
vector<int> findDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    return divisors;
}

// Function to count distinct values of k
int countDistinctK(int a, int b, int l) {
    set<int> k_values; // To store distinct values of k
    vector<int> divisors = findDivisors(l);
    
    for (int d : divisors) {
        int k = l / d; // Calculate k for the current divisor
        int temp = d; // We will modify temp to check its factorization
        
        // Count how many times we can divide by a
        while (temp % a == 0) {
            temp /= a;
        }

        // Count how many times we can divide by b
        while (temp % b == 0) {
            temp /= b;
        }

        // If temp is 1, then d can be expressed as a^x * b^y
        if (temp == 1) {
            k_values.insert(k); // Valid k found, insert into set
        }
    }

    return k_values.size(); // Return the size of distinct k values
}

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        int a, b, l;
        cin >> a >> b >> l; // Read inputs for each test case
        cout << countDistinctK(a, b, l) << endl; // Output the result for each test case
    }
    return 0;
}
