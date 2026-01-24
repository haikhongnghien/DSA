#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define ll long long

int n;
int prime[1000005];

void sieve() {
    for(int i = 0 ; i <= 1000000 ; i++) prime[i] = 1;
    prime[0] = prime[1] = 0;
    for(int i = 2 ; i <= sqrt(1000000) ; i++) {
        if(prime[i]) {
            for(int j = i * i ; j <= 1000000 ; j += i) 
                prime[j] = 0;
        }
    }
}

void TestCase() {
    cin >> n;
    bool ok = false;
    for(int i = 2 ; i <= n ; i++) {
        if(prime[i] && prime[n - i]) {
            ok = true;
            cout << i << ' ' << n - i << endl;
            break;
        }
    }
    if(!ok) cout << -1 << endl;
}

int main() {
    
    FASTER;
    sieve();
    int t;
    cin >> t;
    while(t--) {
        TestCase();
    }

    return 0;
}
