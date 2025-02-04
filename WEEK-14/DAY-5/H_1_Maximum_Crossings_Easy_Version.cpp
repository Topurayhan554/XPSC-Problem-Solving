#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n ;
    vector<ll> v;
    vector<ll> a(n);
    int i;
    for(i = 0; i < n; i++){
        cin >> a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    ll c = 0, sum = 0;
 
    for(i = 0; i < n; i++){
        if(a[i] == *(v.rbegin())){
            x = v.size();
            sum = sum + (x-1);
            v.pop_back();
            continue;
        }
        x = lower_bound(v.begin(), v.end(), a[i]+1) - v.begin();
        sum+=(x-1);
        v.erase(v.begin() + x-1 );
    }
 
    cout<<sum;
 
    cout<<endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}