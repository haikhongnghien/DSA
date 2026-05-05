#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int V, E;
bool found;
vector<int> ke[1005];
int color[1005];

void DFS(int u) {
    color[u] = 1;
    for(auto v : ke[u]) {
        if(color[v] == 1) {
            found = true;
            return;
        }
        if(color[v] == 0) {
            DFS(v);
        }
    }
    color[u] = 2;
}

void solve() {
    cin >> V >> E;
    memset(color, 0, sizeof(color));
    for(int i = 1 ; i <= V ; i++) ke[i].clear();
    for(int i = 1 ; i <= E ; i++) {
        int u, v;
        cin >> u >> v;
        ke[u].push_back(v);
    }
    found = false;
    for(int i = 1 ; i <= V ; i++) {
        if(color[i] == 0) DFS(i);
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
