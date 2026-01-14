#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, x[20];

void sinh(int i) {
    for(char c : {'A', 'H'}) {
        if(c == 'H' && x[i - 1] == 'H') continue;
        x[i] = c;
        if(i == n) {
            if(x[i] == 'A') {
                for(int j = 1 ; j <= n ; j++) cout << (char)x[j];
                cout << endl;
            }
        }
        else sinh(i + 1);
    }
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        x[1] = 'H';
        sinh(2);
    }

    return 0;

}
