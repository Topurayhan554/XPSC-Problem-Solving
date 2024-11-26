#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        vector<ll> a(n+1);
        for(ll i=n-k+1;i<=n;i++)
        {
            cin>>a[i];
        }
        vector<ll> dif(n+1);
        if(n == 1 || k == 1)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        for(int i=n;i>=n-k+2;i--)
        {
            dif[i] = a[i] - a[i-1];
        }
        bool flag = true;
        for(int i=n-k+2;i<=n;i++)
        {
            if(i + 1 <= n && dif[i + 1] < dif[i])
            {
                flag = false;
                break;
            }
        }
        if(!flag)
        {
            cout<<"No"<<endl;
            continue;
        }
        for(int i=n-k+1;i>1;i--)
        {
            dif[i] = dif[i+1];
            a[i-1]=a[i]-dif[i];
        }
        dif[1]=a[1];
 
        for(int i=1;i<=n;i++)
        {
            if(i+1<=n && dif[i+1]<dif[i])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}