#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

void solve() {
    string binary;
    cin >> binary;
    int n = binary.size();
    string gray(n, '0');
    //gray[0] = binary[0]
    //gray[k] = binary[k] xor binary[k - 1];
    gray[0] = binary[0];
    for(int i = 1 ; i < n ; i++) {
        gray[i] = ((binary[i] - '0') ^ (binary[i - 1] - '0')) + '0';
    }
    cout << gray << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
