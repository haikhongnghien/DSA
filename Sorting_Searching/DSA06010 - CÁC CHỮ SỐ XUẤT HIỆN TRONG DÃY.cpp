#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define ll long long

int n;

void TestCase() {
    cin >> n;
    vector<int> X(n);
    for(auto &x : X) cin >> x;
    vector<bool> check(10, false);
    for(auto x : X) {
        while(x) {
            check[x % 10] = true;
            x /= 10;
        }
    }
    for(int i = 0 ; i < 10 ; i++) {
        if(check[i]) cout << i << ' ';
    }
    cout << endl;
}
int main() {
    
    FASTER;
    int t;
    cin >> t;
    while(t--) {
        TestCase();
    }

    return 0;
}
