#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int n, m, scc;
int matrix[1005][1005];
int dx[8] = {1, -1,  0, 0, -1, -1,  1, 1};
int dy[8] = {0,  0, -1, 1, -1,  1, -1, 1};

void DFS(int x, int y) {
    matrix[x][y] = 0;
    for(int i = 0 ; i < 8 ; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 1 && nx <= n && ny >= 1 && ny <= m && matrix[nx][ny] == 1) {
            DFS(nx,ny);
        }
    }
}

void solve() {
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= m ; j++) {
            cin >> matrix[i][j];
        }
    }
    scc = 0;
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= m ; j++) {
            if(matrix[i][j]) {
                scc++;
                DFS(i,j);
            }
        }
    }
    cout << scc << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
