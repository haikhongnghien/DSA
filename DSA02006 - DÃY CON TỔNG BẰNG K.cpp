#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k;
int cnt = 0;
bool found = false;
vector<int> v;
int c[20];

void in(int i) {
    cout << "[";
    for(int j = 0 ; j < i - 1; j++) {
        cout << c[j] << ' ';
    }
    cout << c[i - 1] << "] ";
}

void Try(int i, int idx) {
    if(cnt == k) {
        in(i);
        found = true;
        return;
    }
    if(cnt > k) return;
    for(int j = idx ; j < n ; j++) {
        c[i] = v[j];
        cnt += v[j];
        Try(i + 1, j + 1);
        cnt -= v[j];
    }
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        v.resize(n);
        for(auto &x : v) cin >> x;
        sort(v.begin(), v.end());
        cnt = 0;
        found = false;
        Try(0, 0);
        if(!found) {
            cout << -1 << endl;
            continue;
        }
        cout << endl;
    }

    return 0;

}
