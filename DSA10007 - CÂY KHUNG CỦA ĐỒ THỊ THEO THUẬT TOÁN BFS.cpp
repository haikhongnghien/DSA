#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int V, E, root;
vector<int> ke[1005];
int visited[1005];
vector<pair<int,int>> res;

void BFS(int s) {
    queue<int> Q;
    Q.push(s);
    visited[s] = 1;
    while(!Q.empty()) {
        int u = Q.front(); Q.pop();
        for(auto v : ke[u]) {
            if(!visited[v]) {
                visited[v] = 1;
                res.push_back({u, v});
                Q.push(v);
            }
        }
    }
}

void solve() {
    cin >> V >> E >> root;
    for(int i = 1 ; i <= V ; i++) ke[i].clear();
    memset(visited, 0, sizeof(visited));
    res.clear();
    for(int i = 1 ; i <= E ; i++) {
        int u, v;
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    BFS(root);
    if(res.size() == V - 1) {
        for(auto [u, v] : res) cout << u << ' ' << v << endl;
    }
    else cout << -1 << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
