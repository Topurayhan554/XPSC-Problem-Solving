#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin>>n>>x;
    vector<int> values(n);
    for(int i=0;i<n;i++)
    {
        cin>>values[i];
    }
    ll sum = 0;
    map<ll, int> ans;
    ans[0]++;
    ll count = 0;
    for(int i=0;i<n;i++)
    {
        sum += values[i];
        count += ans[sum - x];
        ans[sum]++;
    }
    cout<<count<<endl;
    return 0;
}