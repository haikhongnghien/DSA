#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;
int x[10000];

void ktao() {
    for(int i = 1 ; i <= n ; i++) {
        x[i] = 0;
    }
}

void in() {
    for(int i = 1 ; i <= n ; i++) {
        if(x[i] == 0) cout << "A";
        else cout << "B";
    }
    cout << " ";
}

void sinh() {
    ktao();
    while(true) {
        in();
        int i = n;
        while(i >= 1 && x[i] == 1) {
            x[i] = 0;
            i--;
        }
        if(i == 0) break;
        x[i] = 1;
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
