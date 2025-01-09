#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--)
    {
        ll h, n;
        cin >> h >> n;
        vector<ll> a(n), c(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(ll i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        auto ok = [&](ll mid)
        {
            ll damage = 0;
            for (ll i = 0; i < n; i++)
            {
                
                ll attack_count = (mid + c[i] - 1) / c[i];
                damage += attack_count * a[i];
                if (damage >= h)
                {
                    return true;
                }
            }
            return damage >= h;
        };
        ll l = 1, r = 1e12, mid, ans;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
