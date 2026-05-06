#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

struct Edge{
    int u, v, w;
};
int V, E;
vector<Edge> ds;
int parent[1005], sz[1005];

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

void Kruskal() {
    vector<Edge> MST;
    sort(ds.begin(), ds.end(), [](Edge A, Edge B) -> bool{
        return A.w < B.w;
    });
    int d = 0;
    for(auto e : ds) {
        if(MST.size() == V - 1) break;
        if(Union(e.u, e.v)) {
            MST.push_back(e);
            d += e.w;
        }
    }
    cout << d << endl;
}

void solve() {
    cin >> V >> E;
    ds.clear();
    memset(parent, 0, sizeof(parent));
    memset(sz, 0, sizeof(sz));
    Init();
    for(int i = 1 ; i <= E ; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        ds.push_back({u, v, w});
    }
    Kruskal();
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
