#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

void solve() {
    int k;
    cin >> k;
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0 ; i < n && k ; i++) {
        int idx = i;
        for(int j = i + 1 ; j < n ; j++) {
            if(s[j] >= s[idx]) {
                idx = j;
            }
        }
        if(s[idx] > s[i]) {
            swap(s[idx], s[i]);
            k--;
        }
    }
    cout << s << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
