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
        cin>>n;
        vector<ll> cards(n);
        for(ll i=0;i<n;i++)
        {
            cin>>cards[i];
        }
        priority_queue<ll> pq;
        ll total_power = 0;
        for(ll i=0;i<n;i++)
        {
            if(cards[i] == 0)
            {
                if(!pq.empty())
                {
                    total_power += pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(cards[i]);
            }
        }
        cout<<total_power<<endl;
    }
    return 0;
}