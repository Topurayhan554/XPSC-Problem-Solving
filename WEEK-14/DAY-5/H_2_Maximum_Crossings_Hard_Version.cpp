#include<bits/stdc++.h>
using namespace std;
const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   mod                             = (int) 1000000007;
const int   max_prime                       = (int) 1e6+3;
const int   BLK                             = (int) 700;
#define     ll                              long long int
#define     ull                             unsigned long long int
#define     ui                              unsigned int
#define     vi                              vector<int>
#define     vb                              vector<bool>
#define     vs                              vector<string>
#define     vl                              vector<ll>
#define     si                              set<int>
#define     sl                              set<ll>
#define     ip                              pair<int,int>
#define     lp                              pair<ll,ll>
#define     ips                             pair<string,int>
#define     lps                             pair<string,ll>
#define     ipc                             pair<char,int>
#define     lpc                             pair<char,ll>
#define     vip                             vector<ip>
#define     PQ                              priority_queue
#define     vlp                             vector<lp>
#define     hashmap                         unordered_map
#define     msi                             multiset<int>
#define     msl                             multiset<ll>
#define     pb                              push_back
#define     spb                             insert
#define     erase_duplicates(x)             x.erase(unique(all(x)),x.end());
#define     all(x)                          x.begin(),x.end()
#define     all_0(x)                        memset(x,0,sizeof(x))
#define     all_neg(x)                      memset(x,-1,sizeof(x))
#define     all_1(x)                        memset(x,1,sizeof(x))
//I/O :
#define     Faster                          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define     Read(x)                         freopen(x,"r",stdin)
#define     Write(x)                        freopen (x,"w",stdout)
#define     PI                              acos(-1)
#define     take_the_array_INT(x,o,n)       for(int i=o;i<=n;i++){scanf("%d",&x[i]);}
#define     take_the_array_LL(x,o,n)        for(int i=o;i<=n;i++){scanf("%lld",&x[i]);}
#define     print_the_array_INT(x,o,n)      for(int i=o;i<=n;i++){printf("%d ",x[i]);}printf("\n");
#define     print_the_array_LL(x,o,n)       for(int i=o;i<=n;i++){printf("%lld ",x[i]);}printf("\n");
#define     cin_the_array(x,o,n)            for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_the_array(x,o,n)           for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<endl;
#define     int_in(x)                       scanf("%d",&x)
#define     ll_in(x)                        scanf("%lld",&x)
#define     dbl_in(x)                       scanf("%lf",&x)
#define     char_in(x)                      scanf(" %c",&x)
#define     str_in(x)                       scanf("%s",&x)
#define     int_in2(x,y)                    scanf("%d %d",&x,&y)
#define     int_in3(x,y,z)                  scanf("%d %d %d",&x,&y,&z)
#define     ll_in2(x,y)                     scanf("%lld %lld",&x,&y)
#define     ll_in3(x,y,z)                   scanf("%lld %lld %lld",&x,&y,&z)
#define     int_out(x)                      printf("%d",x)
#define     ll_out(x)                       printf("%lld",x)
#define     char_out(x)                     printf("%c",x)
#define     str_out(x)                      printf("%s",x)
#define     YES                             printf("YES\n")
#define     Yes                             printf("Yes\n")
#define     NO                              printf("NO\n")
#define     No                              printf("No\n")
#define     nl                              printf("\n")
//extras :
#define     e4                              int main()
#define     checkmate                       return 0;
#define     UNDEFINED                       0x3f
#define     INF                             LLONG_MAX
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)

ll inp[N];
struct Segment_Tree{
    ll ST[N],lazy[N];
    void propagate(int SI,int b,int e){
        if(lazy[SI]!=0){
            ST[SI]+=lazy[SI];
            if(b!=e){
                lazy[2*SI]+=lazy[SI];
                lazy[2*SI+1]+=lazy[SI];
            }
            lazy[SI]=0;
        }
        return;
    }
    void build(int SI,int b,int e){
        if(b==e){
            ST[SI]=0;
            return;
        }
        int left=2*SI;
        int right=left+1;
        int mid=(b+e)/2;
        build(left,b,mid);
        build(right,mid+1,e);
        ST[SI]=ST[left]+ST[right];
    }
    void update(int SI,int b,int e,int l,int r,int val){
        if(b>r || e<l){
            return;
        }
        if(b>=l && e<=r){
            ST[SI]+=val;
            return;
        }
        int left=2*SI;
        int right=left+1;
        int mid=(b+e)/2;
        update(left,b,mid,l,r,val);
        update(right,mid+1,e,l,r,val);
        ST[SI]=ST[left]+ST[right];
    }
    ll query(int SI,int b,int e,int l,int r){
        if(b>r || e<l){
            return 0;
        }
        if(b>=l && e<=r){
            return ST[SI];
        }
        int left=2*SI;
        int right=left+1;
        int mid=(b+e)/2;
        ll L=query(left,b,mid,l,r);
        ll R=query(right,mid+1,e,l,r);
        return L+R;
    }
}STree;
e4{
    int t;                 
    int_in(t);
    while(t--){
        int n;              
        int_in(n);
        vi a(n);            
        take_the_array_INT(a,0,n-1);

        STree.build(1,1,n);
        ll ans=0;
        in_range(i,0,n-1){
            ans+=STree.query(1,1,n,a[i],n);
            STree.update(1,1,n,a[i],a[i],1);
        }

        ll_out(ans);nl;
    }
    checkmate
}
