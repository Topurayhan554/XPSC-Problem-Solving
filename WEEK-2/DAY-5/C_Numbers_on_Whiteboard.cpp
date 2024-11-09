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
        vector<int> nums;
        for(int i=0;i<n;i++)
        {
            nums.push_back(i + 1);
        }
        vector<pair<int, int>> ans;
        for(int i=0;i<n-1;i++)
        {
            auto it = nums.end();
            it--;
            int a = *it;
            nums.erase(it);
            it--;
            int b = *it;
            nums.erase(it);
            ans.push_back(make_pair(a, b));
            nums.push_back((a+b+1)/2);
        }
        cout<<nums[0]<<endl;
        for(auto it : ans)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
    }

    return 0;
}