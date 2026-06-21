#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int t, n;
string s;
vector<string> a(10005);

ll dfs(int i){
    if(i > n) return 0;
    if(a[i] != "+" && a[i] != "-" &&
       a[i] != "*" && a[i] != "/")
        return stoll(a[i]);
    ll l = dfs(2*i);
    ll r = dfs(2*i+1);
    if(a[i] == "+") return l + r;
    if(a[i] == "-") return l - r;
    if(a[i] == "*") return l * r;
    return l / r;
}

int main() {
    FASTER;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 1 ; i <= n ; i++) cin >> a[i];
		cout << dfs(1) << endl;
	}
    return 0;
}
