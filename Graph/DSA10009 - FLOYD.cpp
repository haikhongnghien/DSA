#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
const int INF = 1e9;
using namespace std;

int n, m;
int Mat[105][105];

void Floyd() {
    for(int k = 1 ; k <= n ; k++) {
        for(int i = 1 ; i <= n ; i++) {
            for(int j = 1 ; j <= n ; j++) {
                Mat[i][j] = min(Mat[i][j], Mat[i][k] + Mat[k][j]);
            }
        }
    }
}

void solve() {
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= n ; j++) {
            if(i == j) Mat[i][j] = 0;
            else Mat[i][j] = INF;
        }
    }
    for(int i = 0 ; i < m ; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        Mat[u][v] = w;
        Mat[v][u] = w;
    }
    Floyd();
    int q;
    cin >> q;
    while(q--) {
        int x, y;
        cin >> x >> y;
        cout << Mat[x][y] << endl;
    }
}

int main() {

    FASTER;
    solve();

    return 0;
}
