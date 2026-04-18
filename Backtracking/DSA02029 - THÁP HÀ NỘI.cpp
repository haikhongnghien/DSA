#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

void TowerHaNoi(int n, char A, char B, char C) {
    if(n == 1) {
        cout << A << " -> " << C << endl;
        return;
    }
    TowerHaNoi(n - 1, A, C, B);
    TowerHaNoi(1, A, B, C);
    TowerHaNoi(n - 1, B, A, C);
}

int main() {

    FASTER;
    int n;
    cin >> n;
    TowerHaNoi(n, 'A', 'B', 'C');

    return 0;
}
