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
        stack<int> st;
        string res = "";
        for(int i = 0 ; i <= s.size() ; i++) {
            st.push(i + 1);
            if(s[i] == 'I' || i == s.size()) {
                while(!st.empty()) {
                    res += to_string(st.top());
                    st.pop();
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
