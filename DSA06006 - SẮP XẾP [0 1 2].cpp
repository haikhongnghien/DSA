#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;

void TestCase() {
    int d[3] = {0};
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        int x; cin >> x;
        d[x]++;
    }
    for(int i = 0 ; i <= 2 ; i++) {
        while(d[i]--) cout << i << ' ';
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
