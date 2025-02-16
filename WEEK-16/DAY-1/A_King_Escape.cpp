#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1001;
bool is_visited[MAX_N][MAX_N];
int n, ax, ay, bx, by, cx, cy;
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
bool is_safe(int x, int y)
{
    return !(x == ax || y == ay || (abs(x - ax) == abs(y - ay)));
}
bool bfs()
{
    queue<pair<int, int>> q;
    q.push({bx, by});
    is_visited[bx][by] = true;
    while(!q.empty())
    {
        auto[x, y] = q.front();
        q.pop();
        if(x == cx && y == cy) return true;
        for(int i=0;i<8;i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 1 && nx <= n && ny >= 1 && ny <= n && !is_visited[nx][ny] && is_safe(nx, ny))
            {
                is_visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> ax >> ay >> bx >> by >> cx >> cy;
    if(bfs())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}