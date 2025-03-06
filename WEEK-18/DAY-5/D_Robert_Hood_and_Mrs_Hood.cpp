#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF INT_MAX
void solve()
{
    int n, d, k;
    cin >> n >> d >> k;
    vector<pair<int, int>> a(k);
    for (int i = 0; i < k; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());

    int mx = 0, mn = INF, b = -1, m = -1;
    int j = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 1; i <= n - d + 1; i++)
    {
        while (j < k && a[j].first <= i + d - 1)
        {
            pq.push(a[j].second);
            j++;
        }
        while (pq.size() && pq.top() < i)
        {
            pq.pop();
        }
        int c = pq.size();
        if (c > mx)
        {
            mx = c;
            b = i;
        }
        if (c < mn)
        {
            mn = c;
            m = i;
        }
    }
    cout << b << ' ' << m << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }
    return 0;
}