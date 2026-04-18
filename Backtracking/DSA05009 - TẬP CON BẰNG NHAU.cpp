#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

int n;
int a[105];
int target;

bool Try(int k, int sum) {
    if(sum == target) {
        return true;
    }
    if(k == n || sum > target) return false;
    if(Try(k + 1, sum + a[k])) return true;
    if(Try(k + 1, sum)) return true;
    return false;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        int sum = 0;
        for(int i = 0 ; i < n ; i++) {
            cin >> a[i];
            sum += a[i];
        }
        target = sum / 2;
        if(sum & 1) {
            cout << "NO\n";
            continue;
        }
        cout << (Try(0, 0) ? "YES\n" : "NO\n");
    }

    return 0;
}
