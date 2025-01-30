#include <bits/stdc++.h>
using namespace std;
const int max_t = 200000;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, q;
    cin>>n>>k>>q;
    vector<int> temp(max_t + 2, 0);
    for(int i=0;i<n;i++)
    {
        int l, r;
        cin>>l>>r;
        temp[l]++;
        temp[r+1]--;
    }
    vector<int> freq(max_t + 2, 0);
    for(int i=1;i<=max_t;i++)
    {
        freq[i] = freq[i-1] + temp[i];
    }
    vector<int> pre(max_t + 2, 0);
    for(int i=1;i<=max_t;i++)
    {
        pre[i] = pre[i-1] + (freq[i] >= k);
    }
    while(q--)
    {
        int a, b;
        cin>>a>>b;
        cout << pre[b] - pre[a - 1] << endl;
    }
    return 0;
}