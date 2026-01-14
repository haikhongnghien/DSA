#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k, d, x[100];

int ngto(int n) {
    for(int i = 2 ; i <= sqrt(n) ; i++) {
        if(n % i == 0) return 0;
    }
    return n > 1;
}

void Try(int i) {

    for(int j = x[i - 1] + 1 ; j <= n - k + i ; j++) {
        x[i]= j;
        if(i == k) {
            d++;
            if(ngto(d)) {
                cout << d << ": ";
                for(int s = 1 ; s <= k ; s++) {
                    cout << x[s] << " ";
                }
                cout << endl;
            }
        }
        else Try(i + 1);
    }
}

int main() {

    FASTER;
    cin >> n >> k;
    Try(1);

    return 0;

}
