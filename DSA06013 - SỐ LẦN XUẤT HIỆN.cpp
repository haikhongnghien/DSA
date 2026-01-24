#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define ll long long

int n, x;

void TestCase() {
    cin >> n >> x;
    vector<int> A(n);
    int d = 0;
    for (int &a : A) {
        cin >> a;
        if(a == x) d++;
    }
    if(!d) {
        cout << -1 << endl;
        return;
    }
    cout << d << endl;
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
