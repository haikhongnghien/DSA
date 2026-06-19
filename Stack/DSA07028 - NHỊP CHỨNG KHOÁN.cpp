#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

int t, n;
ll M[1000005];

int main() {
    FASTER;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0 ; i < n ; i++) cin >> M[i];
        stack<int> st;
        for(int i = 0 ; i < n ; i++) {
            while(!st.empty() && M[st.top()] <= M[i]) st.pop();
            if(st.empty()) cout << i + 1 << ' ';
            else cout << i - st.top() << ' ';
            st.push(i);
        }
        cout << endl;
    }
    return 0;
}
