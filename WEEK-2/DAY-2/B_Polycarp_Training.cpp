#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> contests(n);
    for (int i = 0; i < n; i++)
    {
        cin >> contests[i];
    }
    sort(contests.begin(), contests.end());
    
    int day = 1;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(contests[i] >= day)
        {
            count++;
            day++;
        }
    }
    cout << count << endl;
    return 0;
}
