#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int V, E;
bool found;
ll parent[100005], sz[100005];

void Init() {
    for(int i = 1 ; i <= V ; i++) {
        parent[i] = i;
        sz[i] = 1;
    }
}

int Find(int u) {
    if(u == parent[u]) return u;
    return parent[u] = Find(parent[u]);
}

bool Union(int u, int v) {
    u = Find(u);
    v = Find(v);
    if(u == v) return false;
    if(sz[u] < sz[v]) swap(u, v);
    parent[v] = u;
    sz[u] += sz[v];
    return true;
}

void solve() {
    cin >> V >> E;
    Init();
    found = true;
    for(int i = 1 ; i <= E ; i++) {
        int u, v;
        cin >> u >> v;
        if(!Union(u, v)) found = false;
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
