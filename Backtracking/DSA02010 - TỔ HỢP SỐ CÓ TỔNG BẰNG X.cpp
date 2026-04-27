#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

int n, x, ok;
vector<int> v(25);

void Try(int start, int sum, vector<int> temp) {
    if(sum == x) {
        ok = 1;
        cout << "[";
        for(int i = 0 ; i < temp.size() ; i++) {
            if(i) cout << ' ';
            cout << temp[i];
        }
        cout << "]";
        return;
    }
    if(sum > x) return;
    for(int i = start ; i < n ; i++) {
        temp.push_back(v[i]);
        Try(i, sum + v[i], temp);
        temp.pop_back();
    }
}

void solve() {
    cin >> n >> x;
    v.resize(n);
    for(auto &i : v) cin >> i;
    sort(v.begin(), v.begin() + n);
    ok = 0;
    Try(0,0, {});
    if(!ok) {
        cout << -1 << endl;
        return;
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
