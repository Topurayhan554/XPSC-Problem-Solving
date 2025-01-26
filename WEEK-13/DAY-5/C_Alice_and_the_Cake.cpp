#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool canFormArray(vector<int>& a) {
    ll totalSum = 0;
    for (int weight : a) {
        totalSum += weight;
    }

    priority_queue<ll> maxHeap;
    maxHeap.push(totalSum);
    sort(a.rbegin(), a.rend());
    int index = 0;
    while (!maxHeap.empty()) {
        ll current = maxHeap.top();
        maxHeap.pop();
        if (current < a[index])
            return false;
        if (current == a[index]) {
            index++;
            if (index == a.size())
                return true;
                continue;
        }
        maxHeap.push(current / 2);
        maxHeap.push((current + 1) / 2);
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (canFormArray(a)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
