#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, x;

int cmp(int a, int b) {
    if(abs(a - x) != abs(b - x)) return abs(a - x) < abs(b - x);
}

void TestCase() {
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    stable_sort(a.begin(), a.end(), cmp);
    for(auto i : a) cout << i << ' ';
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
