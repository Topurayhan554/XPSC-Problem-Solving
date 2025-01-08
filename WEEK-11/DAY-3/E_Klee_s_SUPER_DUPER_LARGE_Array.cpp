#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        ll total_sum = (n * (2*k+n-1)) / 2;
        ll l = 1, r = 2e9;
        ll result = total_sum;
        while(l <= r)
        {
            ll mid = l + (r - l) / 2;
            ll pre_sum = (mid * (2*k+mid-1)) / 2;
            ll suf_sum = total_sum - pre_sum;
            ll diff = abs(pre_sum - suf_sum);
            result = min(result, diff);
            if(pre_sum < suf_sum)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << result << endl;
    }
    return 0;
}
