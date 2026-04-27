#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

int n;
int matrix[10][10];
string s;
vector<string> res;
bool visited[10][10];
int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};
char d[] = {'D', 'L', 'R', 'U'};

void Try(int x, int y) {
    if(x == n && y == n) {
        res.push_back(s);
        return;
    }
    for(int i = 0 ; i < 4 ; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 1 || nx > n || ny < 1 || ny > n) continue;
        if(visited[nx][ny] || matrix[nx][ny] == 0) continue;
        visited[nx][ny] = true;
        s += d[i];
        Try(nx, ny);
        s.pop_back();
        visited[nx][ny] = false;
    }
}

void solve() {
    cin >> n;
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= n ; j++) {
            cin >> matrix[i][j];
        }
    }
    s = "";
    res.clear();
    memset(visited, false, sizeof(visited));
    if(matrix[1][1] == 0) {
        cout << -1 << endl;
        return;
    }
    
    visited[1][1] = true;
    Try(1, 1);
    if(res.empty()) cout << -1 << endl;
    else {
        for(auto it : res) cout << it << ' ';
        cout << endl;
    }
    
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
