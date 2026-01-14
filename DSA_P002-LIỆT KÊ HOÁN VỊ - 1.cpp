#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, x[100], d;

void ktao() {
    for(int i = 1 ; i <= n ; i++) x[i] = i;
}

void in() {
    cout << ++d << ": ";
    for(int i = 1 ; i <= n ; i++) cout << x[i] << " ";
    cout << endl;
}

void sinh() {
    ktao();
    while(true) {
        in();
        int i = n - 1;
        while(i > 0 && x[i] > x[i + 1]) i--;
        if(i == 0) break;
        int j = n;
        while(x[i] > x[j]) j--;
        swap(x[i], x[j]);
        reverse(x + i + 1, x + n + 1);
    }
}

int main() {

    FASTER;
    cin >> n;
    sinh();

    return 0;

}
