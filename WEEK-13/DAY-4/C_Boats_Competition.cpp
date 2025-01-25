#include <bits/stdc++.h>
using namespace std;
int max_teams(vector<int> weights)
{
    int n = weights.size();
    int mx_teams = 0;
    sort(weights.begin(), weights.end());
    for(int s=2;s<=2*weights[n-1];s++)
    {
        int l = 0, r = n - 1;
        int cur_teams = 0;
        while(l < r)
        {
            int sum = weights[l] + weights[r];
            if(sum == s)
            {
                cur_teams++;
                l++;
                r--;
            }
            else if(sum < s){
                l++;
            }
            else{
                r--;
            }
        }
        mx_teams = max(mx_teams, cur_teams);
    }
    return mx_teams;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> weights(n);
        for(int i=0;i<n;i++)
        {
            cin>>weights[i];
        }
        cout << max_teams(weights) <<endl;
    }
    return 0;
}