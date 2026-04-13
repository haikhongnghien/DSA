#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
#define testcase() int t; cin >> t; while(t--)
using namespace std;

void solve() {
    int  v, e;
    cin >> v >> e;
    vector<vector<int>> matrix(v + 1);
    while(e--) {
        int x, y;
        cin >> x >> y;
        matrix[x].push_back(y);
        matrix[y].push_back(x);
    }
    for(int i = 1 ; i <= v ; i++) {
        cout << i << ": ";
        sort(matrix[i].begin(), matrix[i].end());
        for(int j = 0 ; j < matrix[i].size() ; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {

    FASTER;
    testcase() solve(); 

    return 0;
}
