#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int V, E, u, v, found;
vector<int> ke[1005];
int visited[1005];
vector<int> path;

void DFS(int x) {
    visited[x] = 1;
    path.push_back(x);
    if(x == v) {
        found = true;
        return;
    }
    for(auto y : ke[x]) {
        if(!visited[y]) {
            DFS(y);
            if(found) return;
        }
    }
    path.pop_back();
}

void solve() {
    cin >> V >> E >> u >> v;
    path.clear();
    memset(visited, 0, sizeof(visited));
    for(int i = 1 ; i <= V ; i++) ke[i].clear();
    for(int i = 1 ; i <= E ; i++) {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i = 1 ; i <= V ; i++) sort(ke[i].begin(), ke[i].end());
    found = false;
    DFS(u);
    if(!found) cout << -1 << endl;
    else {
        for(auto it : path) cout << it << ' ';
        cout << endl;
    }
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
