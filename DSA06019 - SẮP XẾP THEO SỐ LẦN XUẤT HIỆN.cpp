#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define ll long long

int n;

int cmp(pair<int,int> a, pair<int,int> b) {
    if(a.second == b.second) 
        return a.first < b.first;
    else return a.second > b.second;
}

void TestCase() {
    cin >> n;
    vector<pair<int,int>> v;
    map<int,int> m;
    for(int i = 0 ; i < n ; i++) {
        int x; cin >> x;
        m[x]++;
    }
    for(map<int,int>::iterator it = m.begin(); it != m.end() ; it++) {
        v.push_back(make_pair(it->first, it->second));
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x : v) {
        while(x.second--) cout << x.first << ' ';
    }
    cout << endl;
}

int main() {
    
    FASTER;
    int t;
    cin >> t;
    while(t--) {
        TestCase();
    }

    return 0;
}
