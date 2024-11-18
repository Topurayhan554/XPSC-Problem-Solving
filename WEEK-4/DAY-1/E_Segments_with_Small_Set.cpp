#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    map<int, int> freq;
    int l = 0, r = 0;
    long long count = 0;
    int unique_count = 0;

    while(r < n)
    {
        if (freq[a[r]] == 0)
        {
            unique_count++;
        }
        freq[a[r]]++;
        while (unique_count > k)
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0)
            {
                unique_count--;
            }
            l++;
        }
        count += (r - l + 1);
        r++;
    }
    cout << count << endl;
    return 0;
}
