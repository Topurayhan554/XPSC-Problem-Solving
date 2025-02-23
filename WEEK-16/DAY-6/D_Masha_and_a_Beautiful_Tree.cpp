#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int res = 0;
        for(int i = 1; i < 20; i++) {
            ll p = pow(2, i - 1);
            ll l = 0, r = p;
            while(r < n)
            {
                if(a[l] > a[r]) {
                    res++;
                    if(r - l == 1) {
                        swap(a[l], a[r]);
                    }
                    else {
                        for(int j = l; j < r && r + 1 < n; j++)
                        {
                            swap(a[j], a[j + p]);
                        }
                    }
                }
                l = r + p;
                r = l + p;
            }
        }
        bool isSorted = true;
        for(int i = 0; i < n; i++) {
            if(a[i] != i + 1) {
                isSorted = false;
                break;
            }
        }

        if(isSorted) {
            cout << res << endl;
        }
        else {
            cout << -1 << endl;
        }
    }

    return 0;
}
