#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> prime(n+1, 0);
    for(int i=2;i<=n;i++)
    {
        if(!prime[i])
        {
            for(int j=i;j<=n;j+=i)
            {
                prime[j]++;
            }
        }
    }
    int allmost_prime = 0;
    for(int i= 2;i<=n;i++)
    {
        if(prime[i] == 2)
        {
            allmost_prime++;
        }
    }
    cout<<allmost_prime<<endl;
    return 0;
}