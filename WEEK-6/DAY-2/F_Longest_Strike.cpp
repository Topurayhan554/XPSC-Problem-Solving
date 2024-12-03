#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n, i, j, k;
    cin >> n >> k;
    ll a[n+1];
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    a[n] = -1;
    ll c = 0;
    vector< ll > v;
    for(i = 0; i < n; i++)
    {
        c++;
        if(a[i] != a[i+1])
        {
            if(c >= k)
            {
                v.push_back(a[i]);
            }
            c = 0;
        }
    }
    if(v.size() == 0)
    {
        cout<<"-1\n";
        return ;
    }
    ll dis = 0, x = *(v.begin()), p, q;
    for(auto it = v.begin(); it != v.end(); it++)
    {
        if(*it == *(v.rbegin()))
        {
            if(*it - x >= dis)
            {
                p = *it;
                q = x;
            }
            break;
        }
        if(*it + 1 < *(it+1))
        {
            if(*it - x >= dis)
            {
                dis = *it - x;
                p = *it;
                q = x;
            }
            x = *(it+1);
        }
    }
    cout<<q <<" "<<p;
    {
        cout<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}