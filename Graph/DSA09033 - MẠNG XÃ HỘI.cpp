#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int V, E;
bool found;
ll parent[100005], sz[100005];
ll edge[100005];

void Init() {
    for(int i = 1 ; i <= V ; i++) {
        parent[i] = i;
        sz[i] = 1;
        edge[i] = 0;
    }
}

int Find(int u) {
    if(u == parent[u]) return u;
    return parent[u] = Find(parent[u]);
}

bool Union(int u, int v) {
    u = Find(u);
    v = Find(v);
    if(u == v) {
        edge[u]++;
        return false;
    }
    if(sz[u] < sz[v]) swap(u, v);
    parent[v] = u;
    sz[u] += sz[v];
    edge[u] += edge[v] + 1;
    return true;
}

void solve() {
    cin >> V >> E;
    Init();
    found = true;
    for(int i = 1 ; i <= E ; i++) {
        int u, v;
        cin >> u >> v;
        Union(u, v);
    }
    for(int i = 1 ; i <= V ; i++) {
        if(Find(i) == i) {
            ll e = edge[i];
            ll k = sz[i];
            if(e != k * (k - 1) / 2) {
                found = false;
                break;
            }
        }
    }
    cout << (found ? "YES" : "NO") << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
