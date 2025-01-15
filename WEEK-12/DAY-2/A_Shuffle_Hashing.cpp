#include <bits/stdc++.h>
using namespace std;

bool isPossibleHash(string p, string h)
{
    sort(p.begin(), p.end());
    int p_len = p.size(), h_len = h.size();
    for (int i = 0; i <= h_len - p_len; i++)
    {
        string substring = h.substr(i, p_len);

        sort(substring.begin(), substring.end());
        if (substring == p)
            return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string p, h;
        cin >> p >> h;
        if (isPossibleHash(p, h))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
