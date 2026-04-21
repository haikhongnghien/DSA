#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
#define endl '\n'
using namespace std;

void merge(vector<int> &v, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for(int i = 0 ; i < n1 ; i++) {
        L[i] = v[l + i];
    }
    for(int i = 0 ; i < n2 ; i++) {
        R[i] = v[m + i + 1];
    }
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2) {
        if(L[i] < R[j]) {
            v[k] = L[i];
            i++;
        }
        else {
            v[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1) v[k++] = L[i++];
    while(j < n2) v[k++] = R[j++];
}

void mergeSort(vector<int> &v, int l, int r) {
    if(l < r) {
        int m = (l + r) / 2;
        mergeSort(v, l, m);
        mergeSort(v, m + 1, r);
        merge(v, l, m, r);
    }
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &it : v) cin >> it;
        mergeSort(v, 0, n - 1);
        for(int i = 0 ; i < n ; i++) {
            cout << v[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}
