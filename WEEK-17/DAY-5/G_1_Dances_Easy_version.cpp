#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{
	ll n, m;
	cin >> n >> m;

	ll arr[n];
	arr[0] = m;
	for(ll i = 1; i < n; i++) cin >> arr[i];

	ll brr[n];
	for(ll i = 0; i < n; i++) cin >> brr[i];

	sort(arr, arr + n);
	sort(brr, brr + n);

	ll j = 0;
	ll i = 0;

	ll ans = 0;
	while(i < n) {

		if(arr[j] < brr[i]) {
			i++;
			j++;
		}
        else {
			while(i < n && arr[j] >= brr[i]) {
				ans++;
				i++;
			}
			j++;
			i++;
		}
	}

	cout << ans << '\n';

}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}