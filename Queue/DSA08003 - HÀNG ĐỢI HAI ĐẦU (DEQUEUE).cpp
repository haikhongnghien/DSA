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
    deque<int> dq;
    while(t--) {
        string q;
        cin >> q;
        if(q == "PUSHBACK") {
            int x; cin >> x;
            dq.push_back(x);
        }
        else if(q == "PRINTBACK") {
            if(!dq.empty()) cout << dq.back() << endl;
            else cout << "NONE\n";
        }
        else if(q == "POPBACK") {
            if(!dq.empty()) dq.pop_back();
        }
        else if(q == "PRINTFRONT") {
            if(!dq.empty()) cout << dq.front() << endl;
            else cout << "NONE\n";
        }
        else if(q == "PUSHFRONT") {
            int x; cin >> x;
            dq.push_front(x);   
        }
        else if(q == "POPFRONT") {
            if(!dq.empty()) dq.pop_front();
        }
    }

    return 0;
}
