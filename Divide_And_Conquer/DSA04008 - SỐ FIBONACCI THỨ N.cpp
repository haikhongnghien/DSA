#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;

//([1 1])^(n - 1)  = [F(n)   F(n-1)]
//([1 0​])            [F(n-1) F(n-2)]

struct Matrix{
    ll m[2][2];
    Matrix operator * (const Matrix &other) const {
        Matrix res;
        for(int i = 0 ; i < 2 ; i++) {
            for(int j = 0 ; j < 2 ; j++) {
                res.m[i][j] = 0;
                for(int k = 0 ; k < 2 ; k++) {
                    res.m[i][j] += (m[i][k] % MOD * other.m[k][j] % MOD);
                    res.m[i][j] %= MOD;
                }
            }
        }
        return res;
    }
};

Matrix power(Matrix A, ll n) {
    if(n == 1) return A;
    Matrix t = power(A, n / 2);
    if(n & 1) return t * t * A;
    else return t * t;
}

int fibonaci(ll n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    Matrix t;
    t.m[0][0] = 1; t.m[0][1] = 1; 
    t.m[1][0] = 1; t.m[1][1] = 0; 
    Matrix res = power(t, n - 1);
    return res.m[0][0] % MOD;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        cout << fibonaci(n) << endl;
    }

    return 0;

}
