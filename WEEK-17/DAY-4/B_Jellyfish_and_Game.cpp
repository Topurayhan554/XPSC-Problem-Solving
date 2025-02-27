#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m, k;
        cin>>n>>m>>k;
        vector<ll> a(n), b(m);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        for(ll i=0;i<m;i++){
            cin>>b[i];
        }

        ll ans = 0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(k%2 == 0){

            if(a[0] < b[m-1]){
                swap(a[0], b[m-1]);
                sort(a.begin(), a.end());
                sort(b.begin(), b.end());
            }
            if(b[0] < a[n-1]){

                swap(a[n-1], b[0]);
                sort(a.begin(), a.end());
                sort(b.begin(), b.end());
            }
        }
        else{

            if(a[0] < b[m-1]){

                swap(a[0], b[m-1]);
                sort(a.begin(), a.end());
                sort(b.begin(), b.end());
            }
        }
        for(auto it : a){
            ans += it;
        }
        cout << ans << endl;
    }
    return 0;
}