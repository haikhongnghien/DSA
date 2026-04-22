#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

void solve() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> A(m, vector<int>(n));
    for(auto &i : A) 
        for(auto &j : i) cin >> j;
    vector<vector<int>> matrix(m, vector<int>(n, -1));
    queue<pair<int,int>> qe;
    matrix[0][0] = 0;
    qe.push({0,0});
    while(!qe.empty()) {
        auto [i, j] = qe.front();
        qe.pop();
        int step = A[i][j];
        pair<int,int> next[] = {
            {i, j + step},
            {i + step, j}
        };
        for(auto [ni, nj] : next) {
            if(ni >= m || nj >= n) continue;
            if(matrix[ni][nj] != -1) continue;
            matrix[ni][nj] = matrix[i][j] + 1;
            qe.push({ni, nj});
        }
    }
    cout << matrix[m - 1][n - 1] << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
