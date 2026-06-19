#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

int t;
string s;

int priority(char c) {
    if(c == '+' || c == '-') return 1;
    if(c == '*' || c == '/') return 2;
    if(c == '^') return 3;
    return 0;
}

int main() {
    FASTER;
    cin >> t;
    while(t--) {
        cin >> s;
        stack<char> st;
        string res = "";
        for(auto c : s) {
            if(isalpha(c)) res += c;
            else if(c == '(') st.push(c);
            else if(c == ')') {
                while(!st.empty() && st.top() != '(') {
                    res += st.top(); st.pop();
                }
                if(!st.empty()) st.pop();
            }
            else {
                while(!st.empty() && st.top() != '(' && 
                    (priority(st.top()) > priority(c)||
                    (priority(st.top()) == priority(c) && c != '^'))) {
                    res += st.top(); st.pop();
                }
                st.push(c);
            }
        }
        while(!st.empty()) {
            if(st.top() != '(') res += st.top(); 
            st.pop();
        }
        cout << res << endl;
    }
    return 0;
}
