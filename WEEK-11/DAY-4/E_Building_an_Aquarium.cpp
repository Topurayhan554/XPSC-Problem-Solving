#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        auto ok = [&](int mid)
        {
            ll res = 0;
            for(auto &val : a)
            {
                if (mid > val) 
                {
                    res += (mid - val);
                }
            }
            return res <= x;
        };
        ll l = 1, r = 2e9, ans;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if(ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
