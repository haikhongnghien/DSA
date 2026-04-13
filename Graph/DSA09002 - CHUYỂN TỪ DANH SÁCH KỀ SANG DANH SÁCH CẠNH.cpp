#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
#define testcase() int t; cin >> t; while(t--)
using namespace std;

void solve() {
    int n; cin >> n;
    cin.ignore();
    vector<vector<int>> v(n + 1);
    for(int i = 1 ; i <= n ; i++) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> s) v[i].push_back(stoi(s));
    }
    for(int i = 1 ; i <= n ; i++) {
        for(int x : v[i]) {
            if(i < x) {
                cout << i << ' ' << x << endl;
            }
        }
    }
}

int main() {

    FASTER;
    solve(); 

    return 0;
}
