#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int k = n / 2;
    if (n % 2 == 1)
    {
        k--;
    }
    cout << k  << endl;
    for (int i = 1; i <= k; i++)
    {
        cout << "2 ";
    }
    if (n % 2 == 1)
    {
        cout << "3";
    }

    return 0;
}
