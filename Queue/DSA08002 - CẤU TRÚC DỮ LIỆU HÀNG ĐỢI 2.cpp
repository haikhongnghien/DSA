#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1e9 + 7;
#define endl '\n'
using namespace std;

int main() {

    FASTER;
    int t;
    cin >> t;
    queue<int> qe;
    while(t--) {
        string q;
        cin >> q;
        if(q == "PUSH") {
            int x; cin >> x;
            qe.push(x);
        }
        else if(q == "POP") {
            if(!qe.empty()) qe.pop();
        }
        else if(q == "PRINTFRONT") {
            if(!qe.empty()) cout << qe.front() << endl;
            else cout << "NONE" << endl;
        }
    }

    return 0;
}
