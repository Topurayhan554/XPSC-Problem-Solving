#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    auto ok = [&](ll median)
    {
        ll cnt = 0;
        for(int i=(n/2);i<n;i++)
        {
            cnt += (a[i] < median ? (median - a[i]) : 0);
        }
        return false;
    };
    sort(a.begin(), a.end());
    ll l = 1, r = 2e9, mid, ans;
    while(l <= r)
    {
        mid = l + (r - l) / 2;
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
    cout<<ans<<endl;
    return 0;
}