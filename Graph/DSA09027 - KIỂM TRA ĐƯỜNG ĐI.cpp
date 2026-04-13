#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
#define testcase() int test; cin >> test; while(test--)
using namespace std;

vector<vector<int>> matrix(1005);
int used[1005];

bool DFS(int x, int y) {
    used[x] = 1;
    if(x == y) return true;
    for(auto it : matrix[x]) {
        if(!used[it]) {
            if(DFS(it, y)) return true;
        }
    }
    return false;
}

void solve() {
    int n, m;
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++) matrix[i].clear();
    while(m--) {
        int a, b;
        cin >> a >> b;
        matrix[a].push_back(b);
        matrix[b].push_back(a);
    }
    for(int i = 1 ; i <= n ; i++) sort(matrix[i].begin(), matrix[i].end());
    int q; cin >> q;
    while(q--) {
        int x, y;
        cin >> x >> y;
        memset(used, 0, sizeof(used));
        cout << (DFS(x, y) ? "YES" : "NO") << endl;
    }
}

int main() {

    FASTER;
    testcase() solve(); 

    return 0;
}
