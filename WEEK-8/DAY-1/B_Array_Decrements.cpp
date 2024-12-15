#include <bits/stdc++.h>
using namespace std;
long long n;
    cin>>n;
    bool flag=true;
    set<long long> s;
    long long zero_max=0;
    vector<long long> a(n),b(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    for(long long i=0;i<n;i++){
        cin>>b[i];
        if(b[i]==0){
            zero_max=max(zero_max,a[i]);
        }
        else{
            s.insert(a[i]-b[i]);
        }
    }
    for(long long i=0;i<n;i++){
        if(b[i]==0){
            zero_max=max(zero_max,a[i]);
        }
        else if(b[i]>a[i]){
            no
            return 0;
        }
        else{
            s.insert(a[i]-b[i]);
        }
    }
 
 
    // cout<<"-------"<<endl;
    // for(auto x:s){
    //     cout<<"x "<<x<<endl;
    // }
    // cout<<"-------"<<endl;
 
 
    if(s.size()==0){
        yes
        return 0;
    }
    else if(s.size()==1){
        for(auto x:s){
            if(x>=zero_max){
                yes
                return 0;
            }
        }
        no
    }
    else{
        no
    }
    return 0;
}
int main(){
    speed;
    /*
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif 
    */
    ll TestCase=1;
    cin>>TestCase;
    while(TestCase--){
        solve();
    }
}