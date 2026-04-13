#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
#define testcase() int test; cin >> test; while(test--)
using namespace std;

void solve() {
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= n ; j++) {
            int x; cin >> x;
            if(x == 1) cout << j << ' ';
        }
        cout << endl;
    }
}

int main() {

    FASTER;
    solve(); 

    return 0;
}
