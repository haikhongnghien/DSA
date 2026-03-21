#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k;
int x[10000];


void ktao() {
    for(int i = 1 ; i <= n ; i++) {
        x[i] = i;
    }
}

void in(vector<int>& v) {
    int sum = 0;
    for(int i = 1 ; i <= n ; i++) {
        sum = sum * 10 + x[i];
    }
    v.push_back(sum);
}

void sinh() {
    ktao();
    vector<int> v;
    while(true) {
        in(v);
        int i = n - 1;
        while(i > 0 && x[i] > x[i + 1]) {
            i--;
        }
        if(i == 0) break;
        int j = n;
        while(x[i] > x[j]) j--;
        swap(x[j], x[i]);
        reverse(x + i + 1, x + n + 1);
    }
    for(int i = v.size() - 1 ; i >= 0 ; i--) cout << v[i] << " ";
    cout << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        sinh();
    }

    return 0;

}
