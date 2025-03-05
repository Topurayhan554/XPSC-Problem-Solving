#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      ll arr[n + 10],sum=0;
      for(int i=1;i<=n;i++)
      {
          cin>>arr[i];
          sum+=arr[i];
      }
      if(n==1 || n==2)
      {
          cout<<-1<<endl;
          continue;
      }
      ll l=0,r=1e18,ans=-1;
      while(l<=r)
      {

          ll mid=(l+r)>>1;
          ll avg=(mid+sum+n-1)/n;
          ll half;
          if(avg%2==0)
          {
              half=avg/2;
          }
          else
          {
              half=(avg+1)/2;
          }
          ll cnt=0;
          for(int i=1;i<=n;i++)
          {
              if(arr[i]<half)
              {
                  cnt++;
              }
          }
          ll need=n/2;
          if(need<cnt && n%2==0)
          {
              ans=mid;
              r=mid-1;
          }
          else if(need+1<=cnt)
          {
              ans=mid;
              r=mid-1;
          }
          else{
            l=mid+1;
          }

      }
      cout<<ans<<endl;

    }
    return 0;
}