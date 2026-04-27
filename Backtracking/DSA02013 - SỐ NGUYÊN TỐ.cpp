#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

int n, p, s;
int prime[205];
vector<int> chose;
vector<vector<int>> res;

void sieve() {
    prime[0] = prime[1] = 0;
    for(int i = 2 ; i <= 200 ; i++) prime[i] = 1;
    for(int i = 2 ; i <= sqrt(200) ; i++) {
        if(prime[i]) {
            for(int j = i * i ; j <= 200 ; j += i) {
                prime[j] = 0;
            }
        }
    }
}

void Try(int idx, int sum) {
    if(chose.size() == n) {
        if(sum == s) res.push_back(chose);
        return;
    }
    if(sum > s) return;
    for(int i = idx + 1; i <= 200 ; i++) {
        if(prime[i] && sum + i <= s) {
            chose.push_back(i);
            Try(i, sum + i);
            chose.pop_back();
        }
    }
}

void solve() {
    chose.clear();
    res.clear();
    cin >> n >> p >> s;
    Try(p,0);
    cout << res.size() << endl;
    for(auto v : res) {
        for(auto i : v) cout << i << ' ';
        cout << endl;
    }
}

int main() {

    FASTER;
    sieve();
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
