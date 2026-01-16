#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int x[20], n, d = 0;

void Try(int i) {
    if(i > n) return;
    for(int j : {6,8}) {
        if(j == 8 && x[i-1] == 8) continue;
        if(j == 6 && d >= 3) continue;
        x[i] = j;
        if(j == 6) d++;
        else d = 0;
        if(i == n) {
            if(x[i] == 6) {
                for(int j = 1 ; j <= n ; j++) cout << x[j];
                cout << endl;
            }
            
        }
        else Try(i + 1);
        if(j == 6) d--;
    }
}

int main() {

    FASTER;
    cin >> n;
    x[1] = 8;
    Try(2);

    return 0;

}
