#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
#define testcase() int test; cin >> test; while(test--)
using namespace std;

vector<vector<int>> matrix(1005);
int used[1005];
int parent[1005];

bool DFS(int x, int y) {
    used[x] = 1;
    if(x == y) return true;
    for(auto it : matrix[x]) {
        if(!used[it]) {
            parent[it] = x;
            if(DFS(it, y)) return true;
        }
    }
    return false;
}

void solve() {
    int n, q, x, y;
    cin >> n >> q >> x >> y;
    memset(used, 0, sizeof(used));
    memset(parent, 0, sizeof(parent));
    for(int i = 1 ; i <= n ; i++) matrix[i].clear();
    while(q--) {
        int a, b;
        cin >> a >> b;
        matrix[a].push_back(b);
    }
    for(int i = 1 ; i <= n ; i++) sort(matrix[i].begin(), matrix[i].end());
    parent[x] = -1;
    if(!DFS(x, y)) {
        cout << -1 << endl;
        return;
    }
    vector<int> res;
    for(int i = y ; i != -1 ; i = parent[i]) {
        res.push_back(i);
    }
    reverse(res.begin(), res.end());
    for(auto it : res) cout << it << ' ';
    cout << endl;
}

int main() {

    FASTER;
    testcase() solve(); 

    return 0;
}
