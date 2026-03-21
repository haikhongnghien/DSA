#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, x[20];

long long giaithua(int k) {
    if(k == 0 || k == 1) return 1;
    return k * giaithua(k - 1);
}

void sieve() {
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> x[i];
    }
    int res = 1;
    int d[10] = {0};
    for(int i = 0 ; i < n ; i++) {
        d[x[i]]++;
    }
    for(int i = 0 ; i < n ; i++) {
        d[x[i]] = 0;
        int dem = 0;
        for(int j = 1 ; j < x[i] ; j++) {
            if(d[j]) {
                dem++;
            }
        }
        res += dem * giaithua(n - i - 1);
    }
    cout << res << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        sieve();
    }

    return 0;

}
