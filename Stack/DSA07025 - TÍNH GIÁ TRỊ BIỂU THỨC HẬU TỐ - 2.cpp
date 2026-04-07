#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1e9 + 7
using namespace std;

ll run(ll x, ll y, string s) {
    if(s == "+") return x + y;
    if(s == "-") return x - y;
    if(s == "*") return x * y;
    if(s == "/") return x / y;
}

void solve() {
    int n; cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    stack<ll> st;
    stringstream ss(s);
    string word;
    while(ss >> word) {
        if(word == "+" || word == "-" || word == "*" || word == "/") {
            ll x = st.top(); st.pop();
            ll y = st.top(); st.pop();
            ll z = run(y, x, word);
            st.push(z);
        }
        else st.push(stoll(word));
    }
    cout << st.top() << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
