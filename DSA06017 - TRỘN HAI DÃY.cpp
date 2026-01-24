#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define ll long long

int n, m;

void TestCase() {
    cin >> n >> m;
    vector<int> A(n),B(m);
    for(auto &a : A) cin >> a;
    for(auto &b : B) cin >> b;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int p1 = 0, p2 = 0;
    while(p1 < n && p2 < m) {
        if(A[p1] < B[p2]) {
            cout << A[p1] << ' ';
            p1++;
        }
        else {
            cout << B[p2] << ' ';
            p2++;
        }
    }
    while(p1 < n) cout << A[p1++] << ' ';
    while(p2 < m) cout << B[p2++] << ' '; 
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
