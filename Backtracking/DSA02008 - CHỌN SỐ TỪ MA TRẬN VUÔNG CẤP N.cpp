#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

int n, k;
int matrix[10][10];
bool usedCol[10];
int chose[10];
vector<vector<int>> res;

void Try(int row, int sum) {
    if(row == n) {
        if(sum == k) res.push_back(vector<int>(chose, chose + n));
        return;
    }
    for(int col = 0 ; col < n ; col++) {
        if(!usedCol[col]) {
            usedCol[col] = true;
            chose[row] = col + 1;
            Try(row + 1, sum + matrix[row][col]);
            usedCol[col] = false;
        }
    }
}

void solve() {
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cin >> matrix[i][j];
        }
    }
    Try(0, 0);
    cout << res.size() << endl;
    for(auto v : res) {
        for(int i = 0 ; i < v.size() ; i++) {
            cout << v[i] << ' ';
        }
        cout << endl;
    }
}

int main() {

    FASTER;
    solve();

    return 0;
}
