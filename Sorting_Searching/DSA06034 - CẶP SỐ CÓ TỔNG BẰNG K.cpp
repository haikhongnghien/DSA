#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(auto &it : v) cin >> it;
    sort(v.begin(), v.end());
    int l = 0, r = n - 1;
    ll count = 0;
    while(l < r) {
        int sum = v[l] + v[r];
        if(sum == x) {
            if(v[l] == v[r]) {
                ll len = r - l + 1;
                count += len * (len - 1) / 2;
                break;
            }
            ll cntL = 0, cntR = 0;
            while(l < r && v[l] == v[l + 1]) { cntL++; l++; }
            while(l < r && v[r] == v[r - 1]) { cntR++; r--; }
            cntL++; cntR++;
            count += cntL * cntR;
            l++; r--;
        }
        else if(sum > x) r--;
        else l++;   
    }
    cout << count << endl;
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
