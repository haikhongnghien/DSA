#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
#define testcase() int test; cin >> test; while(test--)
using namespace std;

void solve() {
    int n;
    cin >> n;
    cin.ignore();
    vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));
    for(int i = 1 ; i <= n ; i++) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> s) a[i][stoi(s)] = 1;
    }
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= n ; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {

    FASTER;
    solve(); 

    return 0;
}
