#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

vector<int> adj[1005];
bool visited[1005];
int disc[1005], low[1005];
vector<pair<int,int>> edges;
int timer;

void DFS(int u, int parent) {
    visited[u] = true;
    disc[u] = low[u] = timer++;
    for(int v : adj[u]) {
        if(!visited[v]) {
            DFS(v, u);
            low[u] = min(low[u], low[v]);
            if(low[v] > disc[u]) {
                int a = min(u,v), b = max(u, v);
                edges.push_back({a,b});
            }
        }
        else if(v != parent) {
            low[u] = min(low[u], disc[v]);
        }
    }
}

void solve() {
    int V, E;
    cin >> V >> E;
    for(int i = 1 ; i <= V; i++) {
        adj[i].clear();
        visited[i] = false;
    }
    edges.clear();
    timer = 0;
    for(int i = 1 ; i <= E ; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1 ; i <= V ; i++) {
        if(!visited[i]) {
            DFS(i, -1);
        }
    }
    sort(edges.begin(), edges.end());
    for(auto x : edges) cout << x.first << ' ' << x.second << ' ';
    cout << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
