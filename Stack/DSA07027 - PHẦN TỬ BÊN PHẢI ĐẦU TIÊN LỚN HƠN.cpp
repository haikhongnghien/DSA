#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1e9 + 7
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<int> v(n), a(n);
    stack<int> st;
    for(auto &x : v) cin >> x;
    for(int i = n - 1 ; i >= 0 ; i--) {
        while(!st.empty() && st.top() <= v[i]) {
            st.pop();
        }
        if(st.empty()) a[i] = -1;
        else a[i] = st.top();
        st.push(v[i]);
    }
    for(int x : a) cout << x << ' ';
    cout << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
