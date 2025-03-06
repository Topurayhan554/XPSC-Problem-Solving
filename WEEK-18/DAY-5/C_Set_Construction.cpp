#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        set<int> s[n + 5];

        for (int i = 1; i <= n; i++)
        {
            s[i].insert(i);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == '1')
                {
                    s[j + 1].insert(i + 1);
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << s[i].size() << " ";
            for (auto I : s[i])
            {
                cout << I << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
