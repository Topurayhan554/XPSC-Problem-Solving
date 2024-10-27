#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<string> leaves;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        count ++;
        string species, color;
        cin>>species>>color;
        string leaf = species + " " + color;
        leaves.insert(leaf);
    }
    cout<<leaves.size()<<endl;
    return 0;
}