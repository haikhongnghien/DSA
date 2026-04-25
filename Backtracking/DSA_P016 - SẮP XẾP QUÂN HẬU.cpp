#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

int matrix[10][10];
bool col[20], diagonal1[20], diagonal2[20];
int value, sum;

void Try(int i) {
    if(i > 8) {
        value = max(value, sum);
        return;
    }
    for(int j = 1 ; j <= 8 ; j++) {
        if(col[j] || diagonal1[i - j + 8] || diagonal2[i + j]) continue;
        col[j] = diagonal1[i - j + 8] = diagonal2[i + j] = true;
        sum += matrix[i][j];
        Try(i + 1);
        col[j] = diagonal1[i - j + 8] = diagonal2[i + j] = false;
        sum -= matrix[i][j];
    }
}

void solve() {
    for(int i = 1 ; i <= 8 ; i++) {
        for(int j = 1 ; j <= 8 ; j++) {
            cin >> matrix[i][j];
        }
    }
    value = 0, sum = 0;
    memset(col, 0, sizeof(col));
    memset(diagonal1, 0, sizeof(diagonal1));
    memset(diagonal2, 0, sizeof(diagonal2));
    Try(1);
    cout << value << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    for(int i = 1 ; i <= t ; i++) {
        cout << "Test " << i << ": ";
        solve();
    }

    return 0;
}
