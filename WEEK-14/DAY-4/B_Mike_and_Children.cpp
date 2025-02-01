#include <bits/stdc++.h>
using namespace std;
const int max_N = 200000;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> sw(n);
    for(int i=0;i<n;i++)
    {
        cin>>sw[i];
    }
    sort(sw.begin(), sw.end());
    int max_pairs = 0;
    for(int sum = 2;sum <= max_N;sum ++)
    {
        int l = 0, r = n -1, pairs = 0;
        while(l < r)
        {
            int cur_sum = sw[l] + sw[r];
            if(cur_sum == sum)
            {
                pairs++;
                l++;
                r--;
            }
            else if(cur_sum < sum)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        max_pairs = max(max_pairs, pairs);
    }
    cout<<max_pairs<<endl;
    return 0;
}