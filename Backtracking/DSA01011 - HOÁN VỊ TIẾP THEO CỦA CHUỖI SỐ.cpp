#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

void solve() {
    int test;
    cin >> test;
    cout << test << ' ';
    string s;
    cin >> s;
    int n = s.size();
    int i = n - 1;
    while(i > 0 && s[i] <= s[i - 1]) i--;
    if(i == 0) {
        cout << "BIGGEST\n";
        return;
    }
    int j = n - 1;
    while(s[j] <= s[i - 1]) j--;
    swap(s[i - 1], s[j]);
    reverse(s.begin() + i, s.end());
    cout << s << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
