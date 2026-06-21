#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int t, n, u, v, mn, mx;
char c;
struct Node{
	int data;
	Node *left, *right;
	Node(int x) {
		data = x;
		left = right = NULL;
	}
};

void MakeNode(Node *root, int u, int v, char c) {
	if(c == 'L') root -> left = new Node(v);
	else root -> right = new Node(v);
}

void Insert(Node *root, int u, int v, char c) {
	if(root == NULL) return;
	if(root -> data == u) {
		MakeNode(root, u, v, c);
		return;
	}
	Insert(root -> left, u, v, c);
	Insert(root -> right, u, v, c);
}

void DFS(Node *root, int d) {
	if(root == NULL) return;
	if(!root -> left && !root -> right) {
		mn = min(mn, d);
		mx = max(mx, d);
	}
	DFS(root -> left, d + 1);
	DFS(root -> right, d + 1);
}

int main() {
    FASTER;
	cin >> t;
	while(t--) {
		cin >> n;
		Node *root = NULL;
		for(int i = 1 ; i <= n ; i++) {
			cin >> u >> v >> c;
			if(root == NULL) {
				root = new Node(u);
				MakeNode(root, u, v, c);
			}
			else Insert(root, u, v, c);
		}
		mn = INT_MAX, mx = INT_MIN;
		DFS(root, 1);
		cout << (mn == mx ? 1 : 0) << endl;
	}
    return 0;
}
