#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    string s;
    getline(cin, s);
    stack<char> st;
    int start = 0, end = 0;
    for(int i = 0 ; i < s.size() ; i++) {
        if(s[i] == '(') {
            start++;
            st.push(s[i]);
        }
        else {
            if(!st.empty() && st.top() == '(') {
                start--;
                st.pop();
            }
            else {
                end++;
                st.push(s[i]);
            }
        }
    }
    int ans = start / 2 + end / 2; // mỗi cặp đóng mở ngoặc chỉ cần đảo ngược 1 dấu
    ans += start % 2 + end % 2; // nếu có cặp ngoặc trái hướng, cần đảo cả 2
    cout << ans << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    cin.ignore();
    while(t--) solve();

    return 0;
}
