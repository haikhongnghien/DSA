#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int d[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int dem = 0;
        for(int i = 9 ; i >= 0 ; i--) {
            dem += n / d[i];
            n %= d[i];
        }
        cout << dem << endl;
    }

    return 0;

}
