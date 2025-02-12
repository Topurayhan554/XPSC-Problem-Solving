#include <bits/stdc++.h>
using namespace std;

int min_operations(string s) {
    int n = s.size();
    int min_ops = n;

    for (char target = 'a'; target <= 'z'; target++) {
        int max_gap = 0, last_pos = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == target) {
                max_gap = max(max_gap, i - last_pos - 1);
                last_pos = i;
            }
        }
        max_gap = max(max_gap, n - last_pos - 1);
        min_ops = min(min_ops, (int)ceil(log2(max_gap + 1)));
    }
    return min_ops;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << min_operations(s) << '\n';
    }
    
    return 0;
}
