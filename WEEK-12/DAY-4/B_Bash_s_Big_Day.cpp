#include <bits/stdc++.h>
using namespace std;
const int max_N = 1e5 + 5;
void solve()
{
    int n;
    cin>>n;
    vector<int> freq(max_N + 1, 0);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        freq[x]++;
    }
    int mx_pokemon = 1;
    for(int i=2;i<=max_N;i++)
    {
        int count = 0;
        for(int j=i;j<=max_N;j += i)
        {
            count += freq[j];
        }
        mx_pokemon = max(mx_pokemon, count);
    }
    cout<<mx_pokemon<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}