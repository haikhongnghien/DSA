#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, a[10], b[10];
bool used[10];

void in() {
    for(int i = 1 ; i <= n ; i++) cout << b[i] << ' ';
    cout << endl;
}

void Try(int x) {
    if(x > n) {
        in();
        return;
    }
    for(int i = 1 ; i <= n ; i++) {
        if(!used[i]) {
            b[x] = a[i];
            used[i] = true;
            Try(x + 1);
            used[i] = false;
        }
    }
}

int main() {

    FASTER;
    cin >> n;
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    Try(1);

    return 0;
}
