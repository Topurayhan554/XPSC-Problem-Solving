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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool found = false;
        if (n >= 2)
        {
            for (int i = 0; i < n; i++)
            {
                if ((a[i] < a[i + 1] && a[i + 1] > a[i + 2]) || 
                    (a[i] > a[i + 1] && a[i + 1] < a[i + 2]))
                {
                    cout << (i + 1) << " " << (i + 2) << endl;
                    found = true;
                    break;
                }
            }
        }

        if (!found)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
