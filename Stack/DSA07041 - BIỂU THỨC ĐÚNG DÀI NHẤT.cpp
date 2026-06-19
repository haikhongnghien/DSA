#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

int t, k;
string s;

int main() {
    FASTER;
    cin >> t;
    while (t--) {
		string s; cin >> s;
		int count = 0;
		while (true) {
			int pos = s.find("()");
			if (pos == -1)break;
			else {
				count += 2;
				s.erase(pos, 2);
			}
		}
		cout << count << endl;
	}
    return 0;
}
