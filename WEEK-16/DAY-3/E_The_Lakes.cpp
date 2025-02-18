#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000 + 5;
const int MAX_M = 1000 + 5;

int grid[MAX_N][MAX_M];
bool visited[MAX_N][MAX_M];

int n, m;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

// DFS ফাংশন
int dfs(int x, int y) {
    if (x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == 0 || visited[x][y])
        return 0;

    visited[x][y] = true;  
    int volume = grid[x][y];

    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        volume += dfs(newX, newY);
    }

    return volume;
}

void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            visited[i][j] = false;
        }
    }

    int maxVolume = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] > 0 && !visited[i][j]) {
                maxVolume = max(maxVolume, dfs(i, j));
            }
        }
    }

    cout << maxVolume << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
