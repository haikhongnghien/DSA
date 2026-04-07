#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1e9 + 7
using namespace std;

int solve() {
    string s;
    cin >> s;
    stack<char> st;
    for(int i = 0 ; i < s.size() ; i++) {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        }
        else {
            if(st.empty()) return 0;
            if(s[i] == ')' && st.top() != '(') return 0;
            if(s[i] == ']' && st.top() != '[') return 0;
            if(s[i] == '}' && st.top() != '{') return 0;
            st.pop();
        }
    }
    return st.empty();
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) cout << (solve() ? "YES\n" : "NO\n");

    return 0;
}
