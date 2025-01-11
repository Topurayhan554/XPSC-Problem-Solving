#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n;
    cin >> k >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());

    auto ok = [&](int mid)
    {
        vector<int> temp = a;
        int total_need = mid * k;

        for (int i = 0; i < temp.size(); i++)
        {
            total_need -= min(temp[i], mid);
            if (total_need <= 0)
            {
                return true;
            }
        }
        return false;
    };

    int l = 1, r = 1e9, ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
