#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll n;
	cin >> n;

	ll a[n];
	for(ll i = 0; i < n; i++)
        cin >> a[i];

	for(ll i = 0; i < n - 1; i++) {
		if(a[i + 1] < a[i]) {
			if(((i + 1) & i) != 0) {
				cout << "NO" << '\n';
				return;
			}
		}
	}
	cout << "YES" << '\n';

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