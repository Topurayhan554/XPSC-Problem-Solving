#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin>>a>>b>>t;
    double total_time = t + 0.5;
    int total_biscut = 0;
    for(int i=1;i*a <= total_time;i++)
    {
        total_biscut += b;
    }
    cout<<total_biscut<<endl;
    return 0;
}