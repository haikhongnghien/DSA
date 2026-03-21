#include <bits/stdc++.h>
#define FASTER ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1e9 + 7;
using namespace std;

struct task{
    int start, end;
};

int cmp(task A, task B) {
    return A.end < B.end;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<task> A(n);
        for(int i = 0 ; i < n ; i++) cin >> A[i].start;
        for(int i = 0 ; i < n ; i++) cin >> A[i].end;
        sort(A.begin(), A.end(), cmp);
        int count = 1;
        int lastEnd = A[0].end;
        for(int i = 1 ; i < n ; i++) {
            if(A[i].start >= lastEnd) {
                count++;
                lastEnd = A[i].end;
            }
        }
        cout << count << endl;
    }

    return 0;

}
