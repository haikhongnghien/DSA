#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define ll long long

int n;

void TestCase() {
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    int ans = a[0] + a[1];
    for (int i = 0 ; i < n ; i++) {
        for (int j = i + 1 ; j < n ; j++) {
            int sum = a[i] + a[j];
            if (abs(sum) < abs(ans)) {
                ans = sum;
            }
        }
    }
    cout << ans << endl;
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
