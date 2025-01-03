#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n), pos(n + 1);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        pos[a[i]] = i;
    }
    int round = 1;
    int cur_pos = -1;
    for(int i=1;i<=n;i++)
    {
        if(pos[i] > cur_pos)
        {
            cur_pos = pos[i];
        }
        else
        {
            round++;
            cur_pos = pos[i];
        }
    }
    cout<<round<<endl;
    return 0;
}