#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1e9 + 7;
#define endl '\n'
using namespace std;

int dx[2] = {1, 0};
int dy[2] = {0, 1};
char dir[2] = {'D', 'R'};
int n, m;
vector<string> res;

void dfs(int x, int y, string s, vector<vector<int>> v) {
    if(x == m - 1 && y == n - 1) {
        res.push_back(s);
        return;
    }
    for(int i = 0 ; i < 2 ; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && ny >= 0 && nx < m && ny < n) {
            dfs(nx, ny, s + dir[i], v);
        }
    }
}

void solve() {
    cin >> m >> n;
    res.clear();
    vector<vector<int>> v(m, vector<int>(n));
    for(auto &i : v) {
        for(auto &j : i) cin >> j;
    }
    dfs(0, 0, "", v);
    cout << res.size() << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
