#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string s;
char c[20];
int used[300];

void in() {
    for(int i = 0 ; i < s.size() ; i++) cout << c[i];
    cout << " ";
}

void Try(int i) {
    if(i == s.size()) {
        in();
        return;
    }
    for(int j = 0 ; j < s.size() ; j++) {
        if(!used[s[j]]) {
            c[i] = s[j];
            used[s[j]] = 1;
            Try(i + 1);
            used[s[j]] = 0;
        }
    }
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        cin >> s;
        memset(used, 0, sizeof(used));
        Try(0);
        cout << endl;
    }

    return 0;

}
