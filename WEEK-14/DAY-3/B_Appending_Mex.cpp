#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (a[0] != 0)
    {
        cout << 1 << endl;
        return 0;
    }
    int expected_mex = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == expected_mex)
        {
            expected_mex++;
        } 
        else if (a[i] > expected_mex) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}