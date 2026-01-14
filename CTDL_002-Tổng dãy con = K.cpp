#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k, a[1000], dem = 0;
int x[1000];

void ktao() {
    for(int i = 0 ; i < 1000 ; i++) x[i] = 0;
}

void check() {
    int sum = 0;
    for(int i = 0 ; i < 1000 ; i++) {
        if(x[i] == 1) sum += a[i];
    }
    if(sum == k) {
        dem++;
        for(int i = 0 ; i < 1000 ; i++) {
            if(x[i] == 1) cout << a[i] << " ";
        }
        cout << endl;
    }
    
}

void sinh() {
    while(true) {
        check();
        int i = n - 1;
        while(i >= 0 && x[i] == 1) {
            x[i] = 0;
            i--;
        }
        if(i >= 0) x[i] = 1;
        else break;
    }
    cout << dem << endl;
}

int main() {

    FASTER;
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sinh();

    return 0;

}
