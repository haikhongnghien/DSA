#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> odd, even;
    for(int i = 0 ; i < n ; i++) {
        int x; cin >> x;
        if(i & 1) even.push_back(x);
        else odd.push_back(x);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end(), greater<int>());
    int x = 0, y = 0;
    for(int i = 0 ; i < n ; i++) {
        if(i & 1) cout << even[x++] << ' ';
        else cout << odd[y++] << ' ';
    }
}

int main() {

    FASTER;
    solve();

    return 0;
}
