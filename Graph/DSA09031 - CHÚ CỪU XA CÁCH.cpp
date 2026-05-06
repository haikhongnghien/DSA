#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int n, k, m;
struct Edge{
    int x, y;
};
set<pair<int,int>> block[105][105];
vector<Edge> cow;
int visited[105][105];
int dx[4] = {1, -1,  0, 0};
int dy[4] = {0,  0, -1, 1};

void DFS(int x, int y) {
    visited[x][y] = 1;
    for(int i = 0 ; i < 4 ; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 1 || nx > n || ny < 1 || ny > n) continue;
        if(visited[nx][ny]) continue;
        if(block[x][y].count({nx, ny})) continue;
        DFS(nx, ny);
    }
}

void solve() {
    cin >> n >> k >> m;
    for(int i = 0 ; i < m ; i++) {
        int u, v, x, y;
        cin >> u >> v >> x >> y;
        block[u][v].insert({x, y});
        block[x][y].insert({u, v});
    }
    for(int i = 0 ; i < k ; i++) {
        int x, y;
        cin >> x >> y;
        cow.push_back({x,y});
    }
    int d = 0;
    for(int i = 0 ; i < k ; i++) {
        memset(visited, 0, sizeof(visited));
        DFS(cow[i].x, cow[i].y);
        for(int j = i + 1 ; j < k ; j++) {
            if(!visited[cow[j].x][cow[j].y]) d++;
        }
    }
    cout << d << endl;
}

int main() {

    FASTER;
    solve();

    return 0;
}
