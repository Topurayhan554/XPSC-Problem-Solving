#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll X;
    cin >> X;
    vector<ll> divisors;
    for(ll i = 1; i * i <= X; i++)
    {
        if(X % i == 0)
        {
            divisors.push_back(i);
            if(i != X / i)
            {
                divisors.push_back(X / i);
            }
        }
    }
    pair<ll, ll> result = {1, X};
    ll minMax = max(result.first, result.second);
    for(ll a : divisors)
    {
        ll b = X / a;
        if (a > 0 && b > 0 && (a * b / __gcd(a, b)) == X)
        {
            if (max(a, b) < minMax)
            {
                minMax = max(a, b);
                result = {a, b};
            }
        }
    }
    cout << result.first << " " << result.second << endl;
    return 0;
}