#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

int t;
string s;

int main() {
    FASTER;
    cin >> t;
    while(t--) {
        cin >> s;
        stack<string> st;
        for(int i = 0 ; i < s.size() ; i++) {
            if(isalpha(s[i])) st.push(string(1, s[i]));
            else {
                string x = st.top(); st.pop();
                string y = st.top(); st.pop();
                st.push('(' + y + s[i] + x +')');
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}
