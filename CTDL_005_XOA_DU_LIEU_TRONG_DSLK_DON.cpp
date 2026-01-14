#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k;

int main() {

    FASTER;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    cin >> k;
    for(int i = 0 ; i < n ; i++) {
        if(a[i] != k) cout << a[i] << " ";
    }

    return 0;

}
