#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int V, E, u, v, found;
vector<int> ke[1005];
int visited[1005];
int parent[1005];
vector<int> path;

void BFS(int x) {
    queue<int> qe;
    qe.push(x);
    visited[x] = 1;
    while(!qe.empty()) {
        int it = qe.front(); qe.pop();
        if(it == v) {
            found = true;
            return;
        }
        for(auto y : ke[it]) {
            if(!visited[y]) {
                visited[y] = 1;
                parent[y] = it;
                qe.push(y);
            }
        }
    }
}

void solve() {
    cin >> V >> E >> u >> v;
    path.clear();
    found = false;
    memset(visited, 0, sizeof(visited));
    memset(parent, 0, sizeof(parent));
    for(int i = 1 ; i <= V ; i++) ke[i].clear();
    for(int i = 1 ; i <= E ; i++) {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i = 1 ; i <= V ; i++) sort(ke[i].begin(), ke[i].end());
    parent[u] = -1;
    BFS(u);
    if(!found) {
        cout << -1 << endl;
    }
    else {
        for(int i = v ; i != -1 ; i = parent[i]) {
            path.push_back(i);
        }
        reverse(path.begin(), path.end());
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
