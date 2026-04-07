#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    string s;
    getline(cin, s);
    stack<string> st;
    for(int i = s.size() - 1 ; i >= 0 ; i--) {
        string c = string(1, s[i]);
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            string x = st.top(); st.pop();
            string y = st.top(); st.pop();
            string z = "(" + x + c + y + ")";
            st.push(z);
        }
        else st.push(c);
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
