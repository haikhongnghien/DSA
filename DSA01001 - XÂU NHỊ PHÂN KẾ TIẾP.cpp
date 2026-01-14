#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string s;
int x[10000];

void sinh() {
    for(int i = 0 ; i < s.length() ; i++) {
        x[i] = s[i] - '0';
    }
    int i = s.length() - 1;
    while(i >= 0 && x[i] == 1) {
        x[i] = 0;
        i--;
    }
    if(i >= 0) x[i] = 1;
    for(int i = 0 ; i < s.length() ; i++) cout << x[i];
    cout << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        cin >> s;
        sinh();
    }

    return 0;

}
