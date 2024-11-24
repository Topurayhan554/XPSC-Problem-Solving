#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve(int n, int k) {
    vector<int> order(n);
    
    // প্রথম k+1 সমস্যা প্রথমে সাজিয়ে রাখবো
    for (int i = 1; i <= k + 1; ++i) {
        order[i - 1] = i; // 1 থেকে k+1
    }
    
    // পরবর্তী সমস্যা k+2 থেকে n পর্যন্ত থাকবে
    for (int i = k + 2; i <= n; ++i) {
        order[i - 1] = i; // k+2 থেকে n
    }
    
    // বাকি সমস্যাগুলো (n-k-1 টা) বিপরীত সাজিয়ে রাখবো
    reverse(order.begin() + k + 1, order.end());
    
    // ফলাফল প্রিন্ট করা
    for (int i = 0; i < n; ++i) {
        cout << order[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t; // টেস্ট কেসের সংখ্যা পড়া
    while (t--) {
        int n, k;
        cin >> n >> k; // n এবং k পড়া
        solve(n, k);
    }
    return 0;
}
