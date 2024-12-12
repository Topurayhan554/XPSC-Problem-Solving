#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int res = 1;
        while (res <= n)
        {
            res <<= 1;
        }
        res >>= 1;
        cout << n - res << " " << res << endl;
    }
    
    return 0;
}
