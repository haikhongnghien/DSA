#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m;
vector<int> a(100005), b(100005);

void TestCase() {
    int d[100005] = {0};
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
        d[a[i]]++;
    }
    for(int i = 0 ; i < m ; i++) {
        cin >> b[i];
        d[b[i]]++;
    }
    for(int i = 0 ; i <= 100000 ; i++) {
        if(d[i]) cout << i << ' ';
    }
    cout << endl;
    for(int i = 0 ; i <= 100000 ; i++) {
        if(d[i] == 2) cout << i << ' ';
    }
    cout << endl;
}

int main() {
    
    FASTER;
    int t;
    cin >> t;
    while(t--) {
        TestCase();
    }

    return 0;
}
