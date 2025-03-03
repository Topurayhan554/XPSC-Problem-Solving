#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x, y;
        cin>>x>>y;

        ll time;
        if(y >= x){
            time = (n + x - 1) / x;
        }
        else{
            
            time = (n + y - 1) / y;
        }
        
        cout << time << endl;

    }
    return 0;
}