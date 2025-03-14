#include <bits/stdc++.h>
using namespace std;
#define int long long
#define el "\n";

int gcd(int a, int b)
{
    return b == 0 ? a : __gcd(b, a % b);
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int overall_gcd = a[0];
    for (int i = 1; i < n; i++) {
        overall_gcd = gcd(overall_gcd, a[i]);
    }
    if (overall_gcd != 1) {
        cout << -1 << el;
        return 0;
    }

    int l = 0, min_length = n;
    
    for (int r = 0; r < n; r++)
    {
        int current_gcd = a[r];

        for (int j = r; j >= l; j--) {
            current_gcd = gcd(current_gcd, a[j]);

            if (current_gcd == 1) {
                min_length = min(min_length, r - j + 1);
                break;
            }
        }
    }

    cout << min_length << el;
    return 0;
}
