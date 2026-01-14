#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k;
int x[50];

void sinh() {
    map<int,int> m;
    for(int i = 1 ; i <= k ; i++) {
        m[x[i]] = 1;
    }
    int i = k;
    while(i >= 1 && x[i] == n - k + i) i--;
    if(i == 0) cout << k << endl;
    else {
        x[i]++;
        for(int j = i + 1 ; j <= k ; j++) x[j] = x[j - 1] + 1;
        for(int j = 1 ; j <= k ; j++) {
            auto it = m.find(x[j]);
            m[x[j]] = 2;
            if(it != m.end()) {
                m.erase(it);
            }
        }
        int d = 0;
        for(auto x : m) {
            if(x.second == 2) d++;
        }
        cout << d << endl;
    }
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        for(int i = 1 ; i <= k ; i++) {
            cin >> x[i];
        }
        sinh();
    }

    return 0;

}
