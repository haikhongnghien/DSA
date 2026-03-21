#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;

void TestCase() {
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int l = 0, r = a.size() - 1;
    while(l < r) {
        cout << a[r] << ' ' << a[l] << ' ';
        l++;
        r--;
    }
    if(l == r) cout << a[l] << ' ';
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
