#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> get_divisors(ll n)
{
    vector<ll> prime_div;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            prime_div.push_back(i);
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        prime_div.push_back(n);
    }
    return prime_div;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        ll A, B;
        cin >> A >> B;
        vector<ll> prime_div = get_divisors(B);
        bool divisible = true;
        for (ll prime : prime_div)
        {
            if (A % prime != 0)
            {
                divisible = false;
                break;
            }
        }

        if (divisible)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
