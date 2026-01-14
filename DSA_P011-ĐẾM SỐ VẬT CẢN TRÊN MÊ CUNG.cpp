#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, dem;
string s[1001];

void sieve() {
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            if(s[i][j] == '#') {
                dem++;
                for(int k = j + 1 ; j < m ; j++) {
                    if(s[i][k] == '#') {
                        s[i][k] = '.';
                    }
                    else break;
                }
                for(int k = i + 1 ; k < n ; k++) {
                    if(s[k][j] == '#') {
                        s[k][j] = '.';
                    }
                    else break;
                }
            }
        }
    }
    cout << dem << endl;
}

int main() {

    FASTER;
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++) cin >> s[i];
    sieve();

    return 0;

}
