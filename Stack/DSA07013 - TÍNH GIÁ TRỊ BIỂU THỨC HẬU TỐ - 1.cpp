#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int run(int x, int y, char s) {
    if(s == '+') return x + y;
    if(s == '-') return x - y;
    if(s == '*') return x * y;
    if(s == '/') return x / y;
}

void solve() {
    string s;
    getline(cin, s);
    stack<int> st;
    for(int i = 0 ; i < s.size() ; i++) {
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            int x = st.top(); st.pop();
            int y = st.top(); st.pop();
            int z = run(y, x, s[i]);
            st.push(z);
        }
        else st.push(s[i] - '0');
    }
    cout << st.top() << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    cin.ignore();
    while(t--) solve();

    return 0;
}
