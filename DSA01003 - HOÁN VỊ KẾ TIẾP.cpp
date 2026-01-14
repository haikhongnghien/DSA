#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k;
int x[10000];

void sinh() {
    for(int i = 1 ; i <= n ; i++) {
        cin >> x[i];
    }
    int i = n - 1;
    while(i >= 1 && x[i] > x[i + 1]) i--;
    int j = n;
    if(i) {
        while(x[i] > x[j]) j--;
        swap(x[i], x[j]);
        reverse(x + i + 1, x + n + 1);
        for(int i = 1 ; i <= n ; i++) cout << x[i] << " ";
        cout << endl;
    }
    else {
        for(int i = 1 ; i <= n ; i++) cout << i << ' ';
        cout << endl;
    }
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
