#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n), h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        int max_length = 0;
        long long current_fruits = 0;
        int l = 0, r = 0;
        while(r < n)
        {
            current_fruits += a[r];
            while (r > l && h[r - 1] % h[r] != 0)
            {
                current_fruits -= a[l];
                l++;
            }
            while (current_fruits > k)
            {
                current_fruits -= a[l];
                l++;
            }
            max_length = max(max_length, r - l + 1);
            r++;
        }

        cout << max_length << endl;
    }

    return 0;
}
