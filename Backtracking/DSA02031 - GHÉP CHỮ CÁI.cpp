#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

char s;
int used[300];
string res;

bool isVowel(char x) {
    return x == 'A' || x == 'E';
}

bool check(string s) {
    for(int i = 1; i < (int)s.size() - 1; i++) {
        if(isVowel(s[i]) && !isVowel(s[i-1]) && !isVowel(s[i+1]))
            return false;
    }
    return true;
}

void Try(int k) {
    if(k == s - 'A' + 1) {
        if(check(res)) cout << res << endl;
        return;
    }
    for(char i = 'A' ; i <= s ; i++) {
        if(!used[i]) {
            used[i] = 1;
            res += i;
            Try(k + 1);
            res.pop_back();
            used[i] = 0;
        }
    }
}

int main() {

    FASTER;
    cin >> s;
    Try(0);

    return 0;
}
