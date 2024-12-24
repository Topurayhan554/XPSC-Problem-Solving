#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll GCD(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, a, b, p, q;
    cin>>n>>a>>b>>p>>q;
    long long x = (n/a)*p, y = (n/b)*q, overlap = (n/lcm(a, b));
    long long ans = ((x+y) - (overlap * (p+q))) + (overlap * max(p, q));
    cout<<ans<<endl;
    return 0;
}