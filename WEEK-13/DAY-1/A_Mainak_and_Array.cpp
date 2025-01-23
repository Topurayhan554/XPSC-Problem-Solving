#include <bits/stdc++.h>
using namespace std;
void solvee()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    int mx_diff = a[n-1] - a[0];

    for(int i=0;i<n;i++)
    {
        mx_diff = max(mx_diff, a[i] - a[0]);
        mx_diff = max(mx_diff, a[n-1] - a[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        mx_diff = max(mx_diff, a[i] - a[i + 1]);
    }
    cout<<mx_diff<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        solvee();
    }
    return 0;
}