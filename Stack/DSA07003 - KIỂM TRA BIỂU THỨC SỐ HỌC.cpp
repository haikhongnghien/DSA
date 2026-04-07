#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    string s;
    getline(cin, s);
    stack<char> st;
    for(int i = 0 ; i < s.size() ; i++) {
        if(s[i] != ')') st.push(s[i]);
        else {
            bool ok = false;
            while(!st.empty()) {
                char c = st.top(); st.pop();
                if(c == '+' || c == '-' || c == '*' || c == '/') 
                    ok = true;
                if(c == '(') break;
            }
            if(!ok) {
                cout << "Yes\n";
                return;
            }
        }
    }
    cout << "No\n";
}

int main() {

    FASTER;
    int t;
    cin >> t;
    cin.ignore();
    while(t--) solve();

    return 0;
}
