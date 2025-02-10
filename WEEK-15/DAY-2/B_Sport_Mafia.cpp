#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    ll a = 1;
    ll b = 3;
    ll c = -2 * k - 2 * n + 2;
    ll discriminant = b * b - 4 * a * c;
    ll p = (sqrt(discriminant) - b) / (2 * a);

    ll e = n - 1 - p;

    cout << e << endl;

    return 0;
}