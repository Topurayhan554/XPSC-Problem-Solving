
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, long long k)
    {
        int n = arr.size(), l = 0, r = 0, ans = 0;
        long long sum = 0;
        while(r < n)
        {
            sum += arr[r];
            if(sum <= k && l <= r)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {
                sum -= arr[l];
                l++;
            }
            r++;
        }
        return ans;
    }
};