#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int V, E;
vector<int> ke[1005];
int visited[1005];
int disc[1005], low[1005];
int timer;
bool isAP[1005];

void DFS(int u, int parent) {
    visited[u] = 1;
    int child = 0;
    disc[u] = low[u] = ++timer;
    for(auto v : ke[u]) {
        if(!visited[v]) {
            child++;
            DFS(v, u);
            low[u] = min(low[u], low[v]);
            if(parent == -1 && child > 1) isAP[u] = true;
            if(parent != -1 && low[v] >= disc[u]) isAP[u] = true;
        }
        else if(v != parent) {
            low[u] = min(low[u], disc[v]);
        }
    }
}

void solve() {
    int V, E;
    cin >> V >> E;
    memset(disc, 0, sizeof(disc));
    memset(low, 0, sizeof(low));
    memset(visited, 0, sizeof(visited));
    memset(isAP, false, sizeof(isAP));
    for(int i = 1 ; i <= V ; i++) ke[i].clear();
    for(int i = 1 ; i <= E ; i++) {
        int u, v;
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    timer = 0;
    DFS(1, -1);
    for(int i = 1 ; i <= V ; i++) if(isAP[i]) cout << i << ' ';
    cout << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
