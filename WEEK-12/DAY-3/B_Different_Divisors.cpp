#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5;
vector<int> primes;
void sieve()
{
    vector<bool> is_prime(MAX, true);
    for (int i = 2; i < MAX; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (int j = 2 * i; j < MAX; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        auto it = lower_bound(primes.begin(), primes.end(), d + 1);
        int p = *it;
        it = lower_bound(primes.begin(), primes.end(), p + d);
        int q = *it;
        cout << p * q << endl;
    }
    return 0;
}