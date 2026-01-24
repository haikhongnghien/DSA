#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define ll long long

int n, m;

int solve(int x, vector<int> &Y, vector<int> &d, int m) {
    if(x == 0) return 0;
    if(x == 1) return d[0];
    auto it = upper_bound(Y.begin(), Y.end(), x) - Y.begin();
    int ans = m - it;
    ans += (d[0] + d[1]);
    if(x == 2) ans -= (d[3] + d[4]);
    if(x == 3) ans += d[2];
    return ans;
}

void TestCase() {
    cin >> n >> m;
    vector<int> X(n), Y(m);
    vector<int> d(5,0);
    for(auto &x : X) cin >> x;
    for(auto &y : Y) {
        cin >> y;
        if(y < 5) d[y]++;
    }
    sort(Y.begin(), Y.end());
    long long cnt = 0;
    for(int i = 0 ; i < n ; i++) {
        cnt += solve(X[i], Y, d, m);
    }
    cout << cnt << endl;
}

int main() {
    
    FASTER;
    int t;
    cin >> t;
    while(t--) {
        TestCase();
        // voi x >= 5 thi y > x => x^y > y^x
        // x >= 2 thi y < x => x^y > y^x
        // tru th (2,3) (2,4) sai (3,2) dung
    }

    return 0;
}
