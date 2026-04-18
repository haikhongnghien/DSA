#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

int n;
int used[300];
string res;

bool check(string s) {
    for(int i = 0 ; i < s.size() ; i++) {
        if(abs(s[i] - s[i + 1]) == 1) return false;
    }
    return true;
}

void Try(int k) {
    if(k == n) {
        if(check(res)) cout << res << endl;
        return;
    }
    for(int i = 1 ; i <= n ; i++) {
        if(!used[i]) {
            used[i] = 1;
            res += to_string(i);
            Try(k + 1);
            res.pop_back();
            used[i] = 0;
        }
    }
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        Try(0);
    }

    return 0;
}
