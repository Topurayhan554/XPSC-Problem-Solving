#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> events;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        events.push_back({a, 1});
        events.push_back({b, -1});
    }
    sort(events.begin(), events.end());
    int max_customers = 0, current_customers = 0;
    for (auto [time, type] : events)
    {
        current_customers += type;
        max_customers = max(max_customers, current_customers);
    }
    cout << max_customers << '\n';
    return 0;
}
