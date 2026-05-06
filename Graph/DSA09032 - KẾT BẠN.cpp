#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int V, E, ans;
int parent[100005], sz[100005];

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
    ans = max(ans, sz[u]);
    return true;
}

void solve() {
    cin >> V >> E;
    memset(parent, 0, sizeof(parent));
    memset(sz, 0, sizeof(sz));
    Init();
    ans = 0;
    for(int i = 1 ; i <= E ; i++) {
        int u, v;
        cin >> u >> v;
        Union(u, v);
    }
    cout << ans << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
