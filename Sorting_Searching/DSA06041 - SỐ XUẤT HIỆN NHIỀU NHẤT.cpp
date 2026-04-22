#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int,int> m;
    for(auto &it : v) {
        cin >> it;
        m[it]++;
    }
    pair<int,int> p(0,0);
    for(auto it : m) {
        if(it.second > (int)n/2 && it.second > p.second) {
            p = {it.first, it.second};
        }
    }
    if(!p.first && !p.second) {
        cout << "NO\n";
        return;
    }
    cout << p.first << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
