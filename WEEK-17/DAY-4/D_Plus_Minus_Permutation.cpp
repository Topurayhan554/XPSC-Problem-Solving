#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll sum(ll n1)
{
    return (n1*(n1+1))/2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,y,gcd;
        cin>>n>>x>>y;

        ll a = n/x;
        ll b = n/y;

        ll lcm = (x*y)/__gcd(x,y);
        ll c = n/lcm;

        ll a1 = a-c;
        ll b1 = b-c;

        ll ans = (sum(n)-sum(n-a1))-sum(b1);
        
        cout << ans << endl;
    }     
    return 0;
}