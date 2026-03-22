#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

struct Matrix{
    ll n;
    vector<vector<ll>> m;
    Matrix(int __n) {
        n = __n;
        m.assign(n, vector<ll>(n, 0));
    }
    Matrix operator * (const Matrix &other) const {
        Matrix res(n);
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n ; j++) {
                for(int k = 0 ; k < n ; k++) {
                    res.m[i][j] += (m[i][k] % MOD * other.m[k][j]) % MOD;
                    res.m[i][j] %= MOD;
                }
            }
        }
        return res;
    }
};

Matrix power(Matrix A, ll k) {
    if(k == 1) return A;
    Matrix t = power(A, k/2);
    if(k & 1) return t * t * A;
    else return t * t;
}

ll solve(ll n, ll k) {
    Matrix A(n);
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cin >> A.m[i][j];
        }
    }
    Matrix res = power(A, k);
    ll sum = 0;
    for(int i = 0 ; i < n ; i++) {
        sum += res.m[i][n - 1];
        sum %= MOD;
    }
    return sum;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }

    return 0;

}
