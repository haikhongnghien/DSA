#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k;
vector<string> v;
vector<string> choice;

void Try(int i, int cnt) {
    if(cnt == k) {
        for(auto x : choice) cout << x << ' ';
        cout << endl;
        return;
    }
    if(i >= (int)v.size()) return;  
    //chon v[i]
    choice.push_back(v[i]);
    Try(i + 1, cnt + 1);
    choice.pop_back(); // backtrack
    //khong chon v[i]
    Try(i + 1, cnt);

}

int main() {

    FASTER;
    cin >> n >> k;
    string s;
    while(cin >> s) {
        if(find(v.begin(), v.end(), s) != v.end()) continue;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    Try(0, 0);

    return 0;

}
