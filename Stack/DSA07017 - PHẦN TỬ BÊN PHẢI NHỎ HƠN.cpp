#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

int t, n;
int a[1000005];

int main() {
    FASTER;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        stack<int> st;
        vector<int> idexBig(n + 1, -1);
        for(int i = n - 1 ; i >= 0 ; i--) {
            while(!st.empty() && a[st.top()] <= a[i]) st.pop();
            if(!st.empty()) idexBig[i] = st.top();
            st.push(i);
        }        
        while(!st.empty()) st.pop();
        vector<int> idexMin(n + 1, -1);
        for(int i = n - 1 ; i >= 0 ; i--) {
            while(!st.empty() && a[st.top()] >= a[i]) st.pop();
            if(!st.empty()) idexMin[i] = st.top();
            st.push(i);
        }
        for(int i = 0 ; i < n ; i++) {
            if(idexBig[i] == -1) cout << -1 << ' ';
            else {
                int j = idexBig[i];
                if(idexMin[j] == -1) cout << -1 << ' ';
                else cout << a[idexMin[j]] << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}
