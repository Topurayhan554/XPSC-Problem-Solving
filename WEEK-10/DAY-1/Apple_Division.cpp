#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll min_difference(ll n, const vector<ll>& weights)
{
    ll total_weight = 0;
    for (ll w : weights)
    {
        total_weight += w;
    }
    ll min_diff = LLONG_MAX;
    for (ll mask = 0; mask < (1 << n); mask++)
    {
        ll group1_weight = 0;
        for (ll i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                group1_weight += weights[i];
            }
        }
        ll group2_weight = total_weight - group1_weight;
        ll diff = abs(group1_weight - group2_weight);
        min_diff = min(min_diff, diff);
    }
    return min_diff;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    vector<ll> weight(n);
    for(ll i=0;i<n;i++)
    {
        cin>>weight[i];
    }
    cout<<min_difference(n, weight)<<endl;
    return 0;
}