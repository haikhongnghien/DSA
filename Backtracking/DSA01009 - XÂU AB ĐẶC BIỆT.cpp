#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

int n, k;
char x[20];
vector<string> res;

bool check(int mask) {
    int d = 0;
    bool ok = false;
    for(int i = 0 ; i < n ; i++) {
        if(!((mask >> i) & 1)) {
            d++;
            if(d == k) ok = true;
            if(d > k) return false;
        }
        else d = 0;
    }
    return ok;
}

void PUSH(int mask) {
    string s = "";
    for(int i = n - 1 ; i >= 0 ; i--) {
        if((mask >> i) & 1) s += 'B';
        else s += 'A';
    }
    res.push_back(s);
}

int main() {

    FASTER;
    cin >> n >> k;
    int mask = 1 << n;
    for(int i = 0 ; i < mask ; i++) {
        if(check(i)) PUSH(i);
    }
    cout << res.size() << endl;
    for(auto x : res) cout << x << endl;

    return 0;
}
