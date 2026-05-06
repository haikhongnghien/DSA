#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int V, E, start;
vector<pair<int,int>> ke[1005];

void Dijkstra() {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> Q;
    Q.push({0, start});
    vector<int> d(V + 1, 1e9); d[start] = 0;
    while(!Q.empty()) {
        auto top = Q.top(); Q.pop();
        int distance = top.first, u = top.second;
        if(distance > d[u]) continue;
        for(auto it : ke[u]) {
            int v = it.first, w = it.second;
            if(d[v] > d[u] + w) {
                d[v] = d[u] + w;
                Q.push({d[v], v});
            }
        }
    }
    for(int i = 1 ; i <= V ; i++) cout << d[i] << ' ';
    cout << endl;
}

void solve() {
    cin >> V >> E >> start;
    for(int i = 1 ; i <= V ; i++) ke[i].clear();
    for(int i = 1 ; i <= E ; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        ke[u].push_back({v, w});
        ke[v].push_back({u, w});
    }
    Dijkstra();
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
