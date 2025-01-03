#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n;
    vector<int> worms(n);
    vector<int> prefix(n);
    cin >> worms[0];
    prefix[0] = worms[0];
    for (int i = 1; i < n; i++)
    {
        cin >> worms[i];
        prefix[i] = prefix[i - 1] + worms[i];
    }
    cin >> m;
    vector<int> queries(m);
    for (int i = 0; i < m; i++)
    {
        cin >> queries[i];
    }
    for (int i = 0; i < m; ++i)
    {
        int label = queries[i];
        int left = 0, right = n - 1;
        
        while (left < right)
        {
            int mid = (left + right) / 2;
            if (prefix[mid] < label)
                left = mid + 1;
            else
                right = mid;
        }
        cout << left + 1 << endl;
    }
    return 0;
}
