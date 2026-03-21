#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
using namespace std;

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int freq[26] = {0};
        int n = s.size();
        int maxf = 0;
        for(char c : s) {
            int idx = c - 'a';
            freq[idx]++;
            maxf = max(maxf, freq[idx]);
        }
        cout << ((maxf <= (n + 1) / 2) ? 1 : -1) << endl;
    }

    return 0;

}
