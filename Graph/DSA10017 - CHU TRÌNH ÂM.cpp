#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const long long MOD = 1e9 + 7;
const long long INF = 1e9;
#define endl '\n'
using namespace std;

int t, V, E, u, v, w;
vector<tuple<int,int,int>> ke;

void BellmanFord() {
	vector<int> d(V + 1, INF);
	for(int i = 1 ; i <= V - 1 ; i++) {
		for(auto [u, v, w] : ke) {
			if(d[v] > d[u] + w) {
				d[v] = d[u] + w;
			}
		}
	}
	for(auto [u, v, w] : ke) {
		if(d[v] > d[u] + w) {
			cout << 1 << endl;
			return;
		}
	}
	cout << 0 << endl;
}

int main() {
    FASTER;
	cin >> t;
	while(t--) {
		cin >> V >> E;
		ke.clear();
		for(int i = 1 ; i <= E ; i++) {
			cin >> u >> v >> w;
			ke.push_back({u, v, w});
		}
		BellmanFord();
	}
    return 0;
}
