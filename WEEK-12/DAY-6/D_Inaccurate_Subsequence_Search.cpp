#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        mp[b[i]]++;
    }
    int ans = 0;
    map<int, int> fre;
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        fre[a[i]]++;
        if (fre[a[i]] <= mp[a[i]])
            cnt++;
    }
    if (cnt >= k)
    {
        ans++;
    }

    for (int i = m; i < n; i++)
    {

        fre[a[i]]++;

        if (fre[a[i]] <= mp[a[i]])
            cnt++;
        
        fre[a[i - m]]--;

        if (fre[a[i-m]] < mp[a[i-m]])
            cnt--;

        if (cnt >= k)
        {
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}