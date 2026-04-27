#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

int n, k, s, d;

void Try(int start, int idx, int sum) {
    if(sum > s) return;
    if(idx == k) {
        if(sum == s) d++;
        return;
    }
    for(int i = start ; i <= n ; i++) {
        Try(i + 1, idx + 1, sum + i);
    }
}

int main() {

    FASTER;
    while(cin >> n >> k >> s) {
        if(n == 0 && k == 0 && s == 0) break;
        d = 0;
        Try(1, 0, 0);
        cout << d << endl;
    }

    return 0;
}
