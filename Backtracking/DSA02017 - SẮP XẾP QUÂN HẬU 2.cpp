#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

int matrix[10][10];
int col[10], chinh[20], phu[20];
int ans;

void Try(int row, int sum) {
    if(row == 9) {
        ans = max(ans, sum);
        return;
    }
    for(int i = 1 ; i <= 8 ; i++) {
        if(!col[i] && !chinh[row - i + 8] && !phu[row + i]) {
            col[i] = 1; chinh[row - i + 8] = 1; phu[row + i] = 1;
            Try(row + 1, sum + matrix[row][i]);
            col[i] = 0; chinh[row - i + 8] = 0; phu[row + i] = 0;
        }
    }
}

void solve() {
    ans = 0;
    memset(col, 0, sizeof(col));
    memset(chinh, 0, sizeof(chinh));
    memset(phu, 0, sizeof(phu));
    for(int i = 1 ; i <= 8 ; i++) {
        for(int j = 1 ; j <= 8 ; j++) {
            cin >> matrix[i][j];
        }
    }
    Try(1,0);
    cout << ans << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
