#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void sieve1(string &a) {
    for(int i = 0 ; i < a.size() ; i++) {
        if(a[i] == '5') a[i]= '6';
    }
}

void sieve2(string &a) {
    for(int i = 0 ; i < a.size() ; i++) {
        if(a[i] == '6') a[i]= '5';
    }
}

int maxSum(string a, string b) {
    sieve1(a);
    sieve1(b);
    return stoi(a) + stoi(b);
}

int minSum(string a, string b) {
    sieve2(a);
    sieve2(b);
    return stoi(a) + stoi(b);
}

int main() {

    FASTER;
    string a, b;
    cin >> a >> b;
    cout << minSum(a, b) << ' ' << maxSum(a, b) << endl;

    return 0;

}
