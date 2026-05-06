#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int V, E;
bool found;
vector<int> ke[1005];
int visited[1005];
string res;

void DFS(int u, string s, int parent) {
    if(found) return;
    visited[u] = 1;
    for(auto v : ke[u]) {
        if(!visited[v]) {
            DFS(v, s + " " + to_string(v), u);
        }
        else if(v != parent && v == 1) found = true, res = s;
    }
}   

void solve() {
    cin >> V >> E;
    for(int i = 1 ; i <= V ; i++) ke[i].clear();
    memset(visited, 0, sizeof(visited));
    res.clear();
    found = false;
    for(int i = 1 ; i <= E ; i++) {
        int u, v;
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    for(int i = 1 ; i <= V ; i++) sort(ke[i].begin(), ke[i].end());
    found = false;
    DFS(1, "1", 0);
    if(!found) cout << 'NO\n';
    else cout << res << ' ' << 1 << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
