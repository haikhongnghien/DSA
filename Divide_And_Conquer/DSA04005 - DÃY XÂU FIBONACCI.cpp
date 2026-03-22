#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

vector<ll> len(93);

char solve(ll n, ll idex) {
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(idex <= len[n - 2]) return solve(n - 2, idex);
    else return solve(n - 1, idex - len[n - 2]);
}

int main() {

    FASTER;
    len[1] = len[2] = 1;
    for(int i = 3 ; i <= 92 ; i++) len[i] = len[i - 1] + len[i - 2];
    int t;
    cin >> t;
    while(t--) {
        ll n, idex;
        cin >> n >> idex;
        cout << solve(n, idex) << endl;
    }

    return 0;

}
