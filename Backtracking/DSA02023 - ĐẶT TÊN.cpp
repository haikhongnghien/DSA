#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

int n, k;
vector<string> v;
vector<string> res;

void Try(int i, int cnt) {
    if(cnt == k) {
        for(auto x : res) cout << x << ' ';
        cout << endl;
        return;
    }
    if(i >= (int)v.size()) return;
    res.push_back(v[i]);
    Try(i + 1, cnt + 1);
    res.pop_back();
    Try(i + 1, cnt);
}

void solve() {
    
    cin >> n >> k;
    string s;
    while(cin >> s) {
        if(find(v.begin(), v.end(), s) != v.end()) continue;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    Try(0,0);
}

int main() {

    FASTER;
    solve();

    return 0;
}
