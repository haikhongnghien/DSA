#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
#define testcase() int t; cin >> t; while(t--)
using namespace std;

int n, m, k;
vector<vector<int>> matrix(1005);
int used[1005];

void DFS(int k) {
    cout << k << ' ';
    used[k] = 1;
    for(auto x : matrix[k]) {
        if(!used[x]) DFS(x);
    }  
}

void solve() {
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++) matrix[i].clear();
    memset(used, false, sizeof(used));
    while(m--) {
        int a, b;
        cin >> a >> b;
        matrix[a].push_back(b);
        matrix[b].push_back(a);
    }
    for(int i = 1 ; i <= n ; i++) sort(matrix[i].begin(), matrix[i].end());
    DFS(k);
    cout << endl;
}

int main() {

    FASTER;
    testcase() solve(); 

    return 0;
}
