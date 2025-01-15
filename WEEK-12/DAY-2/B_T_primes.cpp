#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n)
{
    if(n == 1)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool perfect_square(ll n)
{
    ll x = sqrtl(n);
    return (x*x) == n;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        if(perfect_square(x) && isPrime(sqrtl(x)))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}