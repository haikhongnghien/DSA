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
    vector<string> v;
    stringstream ss(s);
    string word;
    while(ss >> word) {
        v.push_back(word);
    }
    for(int i = n - 1 ; i >= 0 ; i--) {
        if(v[i] == "+" || v[i] == "-" || v[i] == "*" || v[i] == "/") {
            ll x = st.top(); st.pop();
            ll y = st.top(); st.pop();
            ll z = run(x, y, v[i]);
            st.push(z);
        }
        else st.push(stoll(v[i]));
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
