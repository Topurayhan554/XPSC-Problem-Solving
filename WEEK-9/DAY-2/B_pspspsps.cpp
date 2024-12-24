#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> a(n, -1);
        ll cur = 1;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] != 'p' && i + 1 < n)
                continue;
            ll j = i;
            while (j >= 0 && a[j] == -1)
            {
                a[j] = cur;
                cur++;
                j--;
            }
        }

        bool fl = true;
        int mx = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            mx = max(mx, a[i]);
            if (s[i] != 's')
                continue;
            const ll l = n - i;
            if (l != mx)
                fl = false;
        }
        if(fl)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
