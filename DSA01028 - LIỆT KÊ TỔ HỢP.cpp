#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k;
vector<int> a,b;

void in() {
    for(int i = 1 ; i <= k ; i++) {
        cout << a[b[i]] << ' ';
    }
    cout << endl;
}

void Try(int i) {
    for(int j = b[i - 1] + 1 ; j <= n ; j++) {
        b[i] = j;
        if(i == k) in();
        else Try(i + 1);
    }
}

void TestCase() {
    cin >> n >> k;
    set<int> s;
    for(int i = 1 ; i <= n ; i++) {
        int x; cin >> x;
        s.insert(x);
    }
    a.push_back(-1);
    for(auto x : s) a.push_back(x);
    n = s.size();
    b.resize(n + 1);
    for(int i = 0 ; i <= n ; i++) b[i] = i;
    Try(1);
}

int main() {
    
    FASTER;
    int t = 1;
    while(t--) {
        TestCase();
    }

    return 0;
}
