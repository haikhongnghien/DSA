#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    string s;
    getline(cin, s);
    stack<int> st;
    st.push(-1);
    int ans = 1;
    for(int i = 0 ; i < s.size() ; i++) {
        if(s[i] == '(') st.push(i);
        else {
            st.pop();
            if(st.empty()) st.push(i);
            else {
                ans = max(ans, i - st.top());
            }
        }
    }
    cout << ans << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    cin.ignore();
    while(t--) solve();

    return 0;
}
