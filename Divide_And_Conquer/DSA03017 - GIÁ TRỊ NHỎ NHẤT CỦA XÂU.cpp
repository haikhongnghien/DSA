#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const long long MOD = 1e9 + 7;
#define endl '\n'
using namespace std;

int t, k;
string s;

int main() {
    FASTER;
    cin >> t;
    while(t--) {
        cin >> k >> s;
        map<char,int> m;
        priority_queue<int> Q;
        for(int i = 0 ; i < s.size() ; i++) m[s[i]]++;
        for(auto it : m) Q.push(it.second);
        for(int i = 1 ; i <= k ; i++) {
            int x = Q.top(); Q.pop();
            Q.push(--x);
        }
        ll s = 0;
        while(!Q.empty()) {
            int x = Q.top(); Q.pop();
            s += x * x;
        }
        cout << s << endl;
    }
    return 0;
}
