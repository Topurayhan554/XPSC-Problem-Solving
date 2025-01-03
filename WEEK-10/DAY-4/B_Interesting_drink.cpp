#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    sort(prices.begin(), prices.end());
    
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int m;
        cin >> m;
        int count = lower_bound(prices.begin(), prices.end(), m + 1) - prices.begin();
        cout << count << endl;
    }
    return 0;
}
