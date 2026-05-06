#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int V, E;
vector<int> ke[1005];
int visited[1005];
int found;

void DFS(int u, int cnt) {
    if(cnt == V) {
        found = 1;
        return;
    }
    for(auto v : ke[u]) {
        if(found) return;
        if(!visited[v]) {
            visited[v] = 1;
            DFS(v, cnt + 1);
            visited[v] = 0;
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
        ke[v].push_back(u);
    }
    found = 0;
    for(int i = 1 ; i <= V && !found ; i++) {
        memset(visited, 0, sizeof(visited));
        visited[i] = 1;
        DFS(i, 1);
    }
    cout << found << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
