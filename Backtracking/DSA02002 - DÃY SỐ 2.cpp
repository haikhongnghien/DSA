#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;

void in(vector<int> v) {
    cout << "[";
    for(int i = 0 ; i < v.size() - 1 ; i++) cout << v[i] << ' ';
    cout << v[v.size() - 1];
    cout << "] ";
}

void Try(vector<int> a) {
    if(a.size() == 1) {
        in(a);
        return;
    }
    vector<int> b;
    for(int i = 0 ; i < a.size() - 1 ; i++) {
        b.push_back(a[i] + a[i + 1]);
    }
    Try(b);
    in(a);
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        Try(v);
        cout << endl;
    }

    return 0;

}
