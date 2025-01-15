#include <bits/stdc++.h>
using namespace std;
const int max_N = 1e6 + 5;
vector<int> divisor(max_N);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i=1; i<max_N; i++)
    {
        for(int j=i; j<max_N; j += i)
        {
            divisor[j]++;
        }
    }

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout << divisor[n] << endl;
    }
    return 0;
}