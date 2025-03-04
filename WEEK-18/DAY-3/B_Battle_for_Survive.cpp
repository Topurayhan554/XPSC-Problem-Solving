#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        ll sum = 0;

        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
        }

        ll ans = sum - 2*a[n - 2];
        cout << ans << endl;
    }
    return 0;
}