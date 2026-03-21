#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k;
int x[10000];

void ktao() {
    for(int i = 1 ; i <= k ; i++) {
        x[i] = i;
    }
}

void in() {
    for(int i = 1 ; i <= k ; i++) {
        cout << x[i];
    }
    cout << " ";
}

void sinh() {
    ktao();
    while(true) {
        in();
        int i = k;
        while(i > 0 && x[i] == n - k + i) {
            i--;
        }
        if(i == 0) break;
        x[i]++;
        for(int j = i + 1 ; j <= k ; j++) x[j]= x[j - 1] + 1;
    }
    cout << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        sinh();
    }

    return 0;

}
