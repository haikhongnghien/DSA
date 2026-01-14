#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string n, k;
int x[10000];

void sinh() {
    for(int i = 0 ; i < n.size() ; i++) {
        x[i] = n[i] - '0';
    }
    int i = n.size() - 1;
    while(i >= 0 && x[i] == 0) {
        i--;
    }
    x[i] = 0;
    for(int j = i + 1 ; j < n.size() ; j++) {
        x[j] = 1;
    }
    for(int i = 0 ; i < n.size() ; i++) {
        cout << x[i];
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
