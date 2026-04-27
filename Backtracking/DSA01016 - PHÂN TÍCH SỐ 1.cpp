#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

int n, ok;
vector<int> temp;
vector<vector<int>> res;

void Try(int s, int maxValue) {
    if(s == 0) {
        res.push_back(temp);
        return;
    }
    for(int i = min(s, maxValue) ; i >= 1 ; i--) {
        temp.push_back(i);
        Try(s - i, i);
        temp.pop_back();
    }
}

void solve() {
    cin >> n;
    temp.clear();
    res.clear();
    Try(n, n);
    for(auto it : res) {
        cout << "(";
        for(int i = 0 ; i < it.size() ; i++) {
            if(i) cout << ' ';
            cout << it[i];
        }
        cout << ") ";
    }
    cout << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
