#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
        cin>>a[i];
    } 
	int pref[n + 1], suff[n + 1];
	pref[0] = 0;
	pref[1] = 0;
	pref[2] = 1;

	for (int i = 2; i < n; i++){

		int left=(a[i]-a[i-1]);
		int right =(a[i+1]-a[i]);

		if(right <left){
            pref[i+1]=(1 + pref[i]);
        }
		else pref[i+1]=(right + pref[i]);
	}

	suff[n]=0;suff[n-1]=1;
	for(int i = n - 1; i >= 2; i--){

		int left=(a[i]-a[i-1]);
		int right =(a[i+1]-a[i]);

		if(left<right ){
            suff[i-1]=(suff[i]+1);
        }
		else{
            suff[i-1]=(suff[i]+left);
        }
	}

	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		if(r>l){
			cout<<pref[r]-pref[l]<<endl;
		}
		else{
			cout<<abs(suff[r]-suff[l])<<endl;
		}
	}
	return;
}

int main()
{
	
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}