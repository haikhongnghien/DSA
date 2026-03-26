#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 123456789;
#define ll long long
using namespace std;

ll n, k;
ll fibo[93];

char solve(ll n, ll k) {
    ll t = 1 << (n - 1);
    if(k == t) return 'A' + n - 1;
    if(k < t) return solve(n - 1, k);
    else return solve(n - 1, k - t);
}

int main() {

    FASTER; 
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }

    return 0;

}
