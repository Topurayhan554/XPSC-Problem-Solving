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
        ll n;
        string s;
        cin>>n>>s;
        vector<ll> pos;
        ll z = 0;
        reverse(s.begin(), s.end());
        for(ll i=0;i<n;i++){

            if(s[i] == '0'){

                z++;
                pos.push_back(i+1);
            }
        }
        ll k = 1, prev = 0;
        for(ll i=0;i<pos.size();i++){
            cout << pos[i] - k + prev << " ";
            prev += pos[i] - k;
            k++;
        }
        for(ll i=0;i<n-z;i++){
            cout << -1 <<" ";
        }
        cout << endl;
    }
    return 0;
}