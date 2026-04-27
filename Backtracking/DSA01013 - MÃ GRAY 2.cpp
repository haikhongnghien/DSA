#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

void solve() {
    string gray;
    cin >> gray;
    int n = gray.size();
    string binary(n, '0');
    binary[0] = gray[0];
    //b[0] = g[0];
    //b[k] = b[k-1] XOR gray[k]   
    for(int i = 1 ; i < n ; i++) {
        binary[i] = ((gray[i] - '0') ^ (binary[i - 1] - '0')) + '0';
    }
    cout << binary << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
