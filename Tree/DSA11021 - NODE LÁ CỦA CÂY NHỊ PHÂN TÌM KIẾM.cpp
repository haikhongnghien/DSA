#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int t, n, x;
char c;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

void Insert(Node* &root, int x) {
	if(root == NULL) {
		root = new Node(x);
		return;
	}
	if(root -> data > x) {
		Insert(root -> left, x);
	}
	else Insert(root -> right, x);
}

void solve(Node *root) {
	if(root == NULL) return;
	if(root -> left == NULL && root -> right == NULL) {
		cout << root -> data << ' ';
	}
	solve(root -> left);
	solve(root -> right);
}

int main() {
    FASTER;
    cin >> t;
    while(t--) {
        cin >> n;
		Node *root = NULL;
        for(int i = 1 ; i <= n ; i++) {
			cin >> x;
			Insert(root, x);
		}
		solve(root);
		cout << endl;
    }
    return 0;
}
