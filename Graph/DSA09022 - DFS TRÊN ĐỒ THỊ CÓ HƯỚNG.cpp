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
    cout << k << ' ';
    used[k] = 1;
    for(auto x : matrix[k]) {
        if(!used[x]) DFS(x);
    }
}

void solve() {
    int n, q, k;
    cin >> n >> q >> k;
    memset(used, 0, sizeof(used));
    for(int i = 1 ; i <= n ; i++) matrix[i].clear();
    while(q--) {
        int a, b;
        cin >> a >> b;
        matrix[a].push_back(b);
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
