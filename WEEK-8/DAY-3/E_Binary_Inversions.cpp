#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(vector<ll> a,ll n)
{
    ll res=0,one=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            one++;
        }
        else
        {
            res+=one;
        }
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll max_inversions=solve(a,n);
        ll inversion=-1;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                a[i]=1;
                inversion=i;
                break;
            }
        }
        max_inversions=max(max_inversions,solve(a,n));
        if(inversion!=-1)
        {
            a[inversion]=0;
        }
        for(ll i=n-1;i>=0;i--)
        {
            if(a[i]==1)
            {
                a[i]=0;
                break;
            }
        }
        max_inversions=max(max_inversions,solve(a,n));
        cout<<max_inversions<<endl;
    }
    return 0;
}