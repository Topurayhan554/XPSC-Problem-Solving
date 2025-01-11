#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string recipe;
    cin >> recipe;
    ll req_b = 0, req_s = 0, req_c = 0;
    for (auto ch : recipe) 
    {
        if (ch == 'B') 
            req_b++;
        else if (ch == 'S')
            req_s++;
        else if (ch == 'C')
            req_c++;
    }
    ll nb, ns, nc;
    cin >> nb >> ns >> nc;

    ll pb, ps, pc;
    cin >> pb >> ps >> pc;

    ll rubles;
    cin >> rubles;

    ll l = 0, r = 1e13, max_bur = 0;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        ll need_b = max(0LL, req_b * mid - nb);
        ll need_s = max(0LL, req_s * mid - ns);
        ll need_c = max(0LL, req_c * mid - nc);

        ll total_cost = need_b * pb + need_s * ps + need_c * pc;

        if (total_cost <= rubles)
        {
            max_bur = mid;  
            l = mid + 1;           
        }
        else
        {
            r = mid - 1;           
        }
    }

    cout << max_bur << endl;
    return 0;
}
