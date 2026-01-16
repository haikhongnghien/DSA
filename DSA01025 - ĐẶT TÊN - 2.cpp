#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k;
int x[20];

void Try(int i) {
    for(char c = (i == 1) ? 'A' : x[i - 1] + 1 ; c <= 'A' + n - 1 ; c++) {
        x[i] = c;
        if(i == k) {
            for(int j = 1 ; j <= k ; j++) {
                cout  << (char)x[j];
            }
            cout << endl;
        }
        else Try(i + 1);
    }
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        Try(1);
    }

    return 0;

}
