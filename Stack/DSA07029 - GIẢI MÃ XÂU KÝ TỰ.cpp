#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

int t, k;
string s;

int main() {
    FASTER;
    cin >> t;
    while(t--) {
        cin >> s;
        stack<char> st;
        for(int i = 0 ; i < s.size() ; i++) {
            if(s[i] != ']') st.push(s[i]);
            else {
                string tmp = "";
                while(!st.empty() && st.top() != '[') {
                    tmp = st.top() + tmp;
                    st.pop();
                }
                st.pop();
                string num = "";
                while(!st.empty() && isdigit(st.top())) {
                    num = st.top() + num;
                    st.pop();
                }
                if(!num.empty()) k = stoi(num);
                string res = "";
                for(int j = 0; j < k; j++) res += tmp;
                for(int j = 0 ; j < res.size() ; j++) st.push(res[j]);
            }
        }
        string res = "";
        while(!st.empty()) {
            res = st.top() + res;
            st.pop();
        }
        cout << res << '\n';
    }
    return 0;
}
