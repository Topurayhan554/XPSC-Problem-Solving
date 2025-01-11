#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());

    auto ok = [&](int distance)
    {
        int count = 1;
        int lastPosition = a[0];

        for (int i = 1; i < a.size(); i++)
        {
            if (a[i] - lastPosition >= distance)
            {
                count++;
                lastPosition = a[i];
                if (count == k)
                    return true;
            }
        }
        return false; 
    };
    int l = 0, r = a.back() - a.front(), mid, ans;
    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}