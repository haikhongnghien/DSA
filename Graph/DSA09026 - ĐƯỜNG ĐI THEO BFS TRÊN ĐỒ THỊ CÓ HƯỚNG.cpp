#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
#define testcase() int test; cin >> test; while(test--)
using namespace std;

vector<vector<int>> matrix(1005);
int used[1005];
int  parent[1005];

void BFS(int x, int y) {
    queue<int> qe;
    qe.push(x);
    used[x] = 1;
    parent[x] = -1;
    while(!qe.empty()) {
        int t = qe.front(); qe.pop();
        if(t == y) break;
        for(auto x : matrix[t]) {
            if(!used[x]) {
                used[x] = 1;
                qe.push(x);
                parent[x] = t;
            }
        }
    }
    if(!used[y]) {
        cout << -1 << endl;
        return;
    }
    vector<int> res;
    for(int i = y ; i != -1 ; i = parent[i]) {
        res.push_back(i);
    }
    reverse(res.begin(), res.end());
    for(auto x : res) cout << x << ' ';
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
    BFS(x, y);
    cout << endl;
}

int main() {

    FASTER;
    testcase() solve(); 

    return 0;
}
