#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll max_a = *max_element(a.begin(), a.end());
    ll min_a = *min_element(a.begin(), a.end());
    ll total_taken = max_a - min_a;

    ll min_y = LLONG_MAX;
    ll best_z = 0;
    for (ll z = 1; z <= total_taken; z++)
    {
        if (total_taken % z == 0)
        {
            ll y = total_taken / z;
            if (y < min_y)
            {
                min_y = y;
                best_z = z;
            }
        }
    }
    cout << min_y << " " << best_z << endl;
    return 0;
}