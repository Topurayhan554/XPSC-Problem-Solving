#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x , n;
    cin>>x>>n;
    set<int> position;
    multiset<int> length;
    position.insert(0);
    position.insert(x);
    length.insert(x - 0);

    for(int i = 0; i<n; i++)
    {
        int p;
        cin>>p;
        position.insert(p);
        auto it = position.find(p);
        int previousVal = *prev(it);
        int nextVal = *next(it);
        length.erase(length.find(nextVal - previousVal));
        length.insert(p - previousVal);
        length.insert(nextVal - p);
        cout<<*length.rbegin()<<" ";
    }
    return 0;
}