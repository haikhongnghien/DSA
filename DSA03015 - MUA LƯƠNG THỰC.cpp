#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

int n, s, m;

int solve() {
    cin >> n >> s >> m;
    int total = s * m;
    double buyDays = s - s/7;
    if(buyDays * n < total) return -1;
    return (total + n - 1) / n;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) cout << solve() << endl;

    return 0;

}
