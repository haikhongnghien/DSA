#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k;
int x[10000];

void ktao() {
    for(int i = 1 ; i <= n ; i++) {
        x[i] = i;
    }
}

void in() {
    for(int i = 1 ; i <= n ; i++) {
        cout << x[i];
    }
    cout << " ";
}

void sinh() {
    ktao();
    while(true) {
        in();
        int i = n - 1;
        while(i > 0 && x[i] > x[i + 1]) {
            i--;
        }
        if(i == 0) break;
        int j = n;
        while(x[i] > x[j]) j--;
        swap(x[j], x[i]);
        reverse(x + i + 1, x + n + 1);
    }
    cout << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        sinh();
    }

    return 0;

}
