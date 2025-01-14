#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), tmp(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        tmp[i] = a[i];
    }

    if(n == 1){
        cout << -1 << endl;
        return;
    }
    sort(tmp.begin(), tmp.end());

    for(int i = 0; i < n; i++) {
        if (a[i] == tmp[i])
        {
            if (i == n - 1)
            {
                
                swap(tmp[n - 1], tmp[n - 2]);
            } 
            else{
                swap(tmp[i], tmp[i + 1]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << tmp[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
