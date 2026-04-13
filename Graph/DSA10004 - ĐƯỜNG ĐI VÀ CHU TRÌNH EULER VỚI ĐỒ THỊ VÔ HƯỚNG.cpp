#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
#define testcase() int test; cin >> test; while(test--)
using namespace std;

vector<vector<int>> matrix(1005);
int used[1005];

void DFS(int k) {
    used[k] = 1;
    for(auto it : matrix[k]) {
        if(!used[it]) {
            DFS(it);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++) matrix[i].clear();
    memset(used, 0, sizeof(used));
    while(m--) {
        int a, b;
        cin >> a >> b;
        matrix[a].push_back(b);
        matrix[b].push_back(a);
    }
    int odd = 0, idx = 1;
    for(int i = 1 ; i <= n ; i++) {
        if(matrix[i].size() & 1) odd++;
        if(matrix[i].size()) idx = i;
    }
    DFS(idx);
    for(int i = 1 ; i <= n ; i++) {
        if(!used[i] && matrix[i].size()) {
            cout << 0 << endl;
            return;
        }
    }
    if(odd == 0) cout << 2 << endl;
    else if(odd == 2) cout << 1 << endl;
    else cout << 0 << endl;
}

int main() {

    FASTER;
    testcase() solve(); 

    return 0;
}
