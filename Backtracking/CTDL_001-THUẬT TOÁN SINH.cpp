#include <bits/stdc++.h>

using namespace std;

int a[100], n;

void ktao() {
    for(int i = 1 ; i <= n ; i++) a[i] = 0;
}

void in() {
    for(int i = 1 ; i <= n ; i++) cout << a[i] << ' ';
    cout << endl;
}

void check() {
    for(int i = 1 ; i <= n ; i++) {
        if(a[i] != a[n - i + 1]) return;
    }
    in();
}

void sieve() {
    check();
    while(true) {
        int i = n;
        while(i >= 1 && a[i] == 1) {
            a[i] = 0;
            i--;
        }
        if(i == 0) return;
        else {
            a[i] = 1;
            check();
        }
    }
}

int main() {

    cin >> n;
    ktao();
    sieve();

    return 0;
}
