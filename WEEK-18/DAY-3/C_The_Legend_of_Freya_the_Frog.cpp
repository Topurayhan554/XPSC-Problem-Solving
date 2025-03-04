#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){

    ll x, y, k;
    cin>>x>>y>>k;
    
    ll a, b;
    if(x % k == 0){
        a = x / k;
    }
    else{
        a = (x / k) + 1;
    }
    
    if(y % k == 0){
        b = y / k;
    }
    else{
        b = (y / k) + 1;
    }

    ll mn = min(a, b);
    ll mx = max(a, b);

    ll ans = mx + mn + (mx - mn);
    if(a > b){
        ans--;
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}