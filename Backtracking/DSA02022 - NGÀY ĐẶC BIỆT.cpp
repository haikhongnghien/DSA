#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

string s;
vector<string> res;

int check(string s) {
    int dd = stoi(s.substr(0,2));
    int mm = stoi(s.substr(2,2));
    int yyyy = stoi(s.substr(4,4));
    if(yyyy < 2000) return 0;
    if(mm < 1 || mm > 12) return 0;
    return dd >= 1;
}

void Try(int i) {
    if(i == 8) {
        if(check(s)) {
            string ans = s.substr(0,2) + "/" + s.substr(2,2) + "/" + s.substr(4,4);
            res.push_back(ans);
        }
        return;
    }
    for(char c : {'0', '2'}) {
        s.push_back(c);
        Try(i + 1);
        s.pop_back();
    }
}

int main() {

    FASTER;
    Try(0);
    sort(res.begin(), res.end());
    for(auto x : res) cout << x << endl;

    return 0;
}
