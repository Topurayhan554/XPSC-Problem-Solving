#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, x;
    cin>>n>>x;
    ll sum = 0;
    ll count = 0;
    unordered_map<ll, ll> prefix_count;
    prefix_count[0] = 1;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        sum += a;
        if(prefix_count.find(sum - x) != prefix_count.end())
        {
            count += prefix_count[sum - x];
        }
        prefix_count[sum]++;
    }
    cout<<count<<endl;
    return 0;
}