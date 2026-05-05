#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int V, E;
vector<int> ke[1005];
int visited[1005];

void DFS(int u) {
    visited[u] = 1;
    for(auto v : ke[u]) {
        if(!visited[v]) {
            DFS(v);
        }
    }
}

void solve() {
    cin >> V >> E;
    for(int i = 1 ; i <= V ; i++) ke[i].clear();
    for(int i = 1 ; i <= E ; i++) {
        int u, v;
        cin >> u >> v;
        ke[u].push_back(v);
    }
    for (int i = 1; i <= V; i++) {
        memset(visited, 0, sizeof(visited));
        DFS(i);
        for(int j = 1 ; j <= V ; j++) {
            if(!visited[j]) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
