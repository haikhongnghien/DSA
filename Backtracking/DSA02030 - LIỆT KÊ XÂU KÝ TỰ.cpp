#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

int n;
char s;
string res;

void Try(char c, int k) {
    if(k == n) {
        cout << res << endl;
        return;
    }
    for(char i = c ; i <= s ; i++) {
        res += i;
        Try(i, k + 1);
        res.pop_back();
    }
}

int main() {

    FASTER;
    cin >> s >> n;
    Try('A', 0);

    return 0;
}
