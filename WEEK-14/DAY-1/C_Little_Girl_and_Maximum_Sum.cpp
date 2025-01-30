#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin>>n>>q;
    vector<int> a(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> d(n+1);
    for(int i=0;i<q;i++)
    {
        int l, r;
        cin>>l>>r;
        l--, r--;
        d[l]++;
        d[r+1]--;
    }
    
    for(int i=1;i<=n;i++)
    {
        d[i] += d[i-1];
    }
    sort(a.rbegin(), a.rend());
    sort(d.rbegin(), d.rend());
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        sum +=(1LL * a[i] * d[i]);
    }
    cout<<sum<<endl;
    return 0;
}