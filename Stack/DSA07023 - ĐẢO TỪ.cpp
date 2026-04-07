#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    string s;
    getline(cin, s);
    stack<string> st;
    stringstream ss(s);
    string word;
    while(ss >> word) {
        st.push(word);
    }
    while(!st.empty()) {
        cout << st.top() << ' ';
        st.pop();
    }
    cout << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    cin.ignore();
    while(t--) solve();

    return 0;
}
