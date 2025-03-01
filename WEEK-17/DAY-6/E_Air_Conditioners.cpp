#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

void solve() 
{
	int n, k;
	cin >> n >> k;

	int a[k];
	ll t[k];

	for(int i = 0; i < k; i++) cin >> a[i];
	for(int i = 0; i < k; i++) cin >> t[i];

	ll temp[n];

	for(int i = 0; i < n; i++) {
        temp[i] = INT_MAX;
    }
	for(int i = 0; i < k; i++) {
        temp[a[i] - 1] = t[i];
    }

	ll pref[n];
	ll suff[n];

	ll prev = INT_MAX;
	for(int i = 0; i < n; i++) {
		pref[i] = min(prev + 1, temp[i]);
		prev = pref[i];
	}

	prev = INT_MAX;
	for(int i = n - 1; i >= 0; i--) {
		suff[i] = min(prev + 1, temp[i]);
		prev = suff[i];
	}

	for(int i = 0; i < n; i++) {
		cout << min(pref[i], suff[i]) << " ";
	}

	cout << '\n';	

}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}