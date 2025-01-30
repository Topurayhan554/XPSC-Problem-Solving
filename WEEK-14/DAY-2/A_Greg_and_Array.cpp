#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin>>n>>m>>k;
    vector<ll> a(n + 1, 0), op(m + 1, 0);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    vector<ll> l(m + 1), r(m + 1), d(m + 1);
    for(int i=1;i<=m;i++)
    {
        cin>>l[i] >> r[i] >> d[i];
    }

    vector<ll> q(m + 2, 0);
    for(int i=0;i<k;i++)
    {
        int x, y;
        cin>>x>>y;
        q[x]++;
        q[y + 1]--;
    }
    for(int i=1;i<=m;i++)
    {
        q[i] += q[i - 1];
    }
    vector<ll> dif(n+2, 0);
    for(int i=1;i<=m;i++)
    {
        ll time = q[i];
        if(time > 0){
            dif[l[i]] += time * d[i];
            dif[r[i] + 1] -= time * d[i];
        }
    }
    for(int i=1;i<=n;i++)
    {
        dif[i] += dif[i - 1];
        a[i] += dif[i];
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}