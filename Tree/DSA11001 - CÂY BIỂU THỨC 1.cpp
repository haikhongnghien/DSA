#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
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
		for(auto c : s) {
			if(c == '+' || c == '-' || c == '*' || c == '/') {
				string a = st.top(); st.pop();
				string b = st.top(); st.pop();
				st.push(b + c + a);
			}	
			else st.push(string(1, c));
		}
		cout << st.top() << endl;
	}
    return 0;
}
