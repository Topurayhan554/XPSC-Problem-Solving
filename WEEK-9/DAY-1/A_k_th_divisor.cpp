#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    ll n, k;
    cin>>n>>k;
    vector<ll> divisor;
    for(ll i=1;i*i<=n;i++)
    {
        if(n % i == 0)
        {
            divisor.push_back(i);
            if(n / i != i)
            {
                divisor.push_back(n/i);
            }
        }
    }
    sort(divisor.begin(),divisor.end());
    if(divisor.size() < k)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<divisor[k-1]<<endl;
    }
    return 0;
}