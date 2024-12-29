#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll count_subarray(int n, const vector<ll>& ar)
{
    ll prefix_sum = 0;
    ll result = 0;
    unordered_map<int, ll> mp;
    mp[0] = 1;
    for(int i=0;i<n;i++)
    {
        prefix_sum += ar[i];
        ll mod_value = prefix_sum % n;
        if(mod_value < 0)
        {
            mod_value += n;
        }
        result += mp[mod_value];
        mp[mod_value]++;
    }
    return result;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<< count_subarray(n, a)<<endl;
    return 0;
}