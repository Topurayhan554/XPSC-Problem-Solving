#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;                  
    cin>>t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        for (int i = 0; i < k; i++) 
        {
            cin >> a[i];
        }
        auto ok = [&](int x)
        {
            int cat_position = 0;
            int total = 0;
            
            for (int i = 0; i < x; i++)
            {
                if (cat_position < a[i])
                {
                    cat_position += (n - a[i]);
                    total++;
                }
                else
                {
                    break;
                }
            }
            return total == x;
        };

        sort(a.rbegin(), a.rend());
        int l = 0, r = k, ans, mid;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            
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
        cout << ans << "\n";
    }
    return 0;
}
