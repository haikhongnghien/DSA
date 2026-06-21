#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int t, n, m, u, v;
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
	}
	Insert(root -> left, u, v, c);
	Insert(root -> right, u, v, c);
}

int check(Node *root1, Node *root2) {
	if(root1 == NULL && root2 == NULL) return 1;
	if((root1 == NULL) && (root2 == NULL)) return 0;
	if(root1 -> data != root2 -> data) return 0;
	return check(root1 -> left, root2 -> left) && check(root1 -> right, root2 -> right);
}

int main() {
    FASTER;
	cin >> t;
	while(t--) {
		cin >> n;
		Node *root1 = NULL;
		for(int i = 1 ; i <= n ; i++) {
			cin >> u >> v >> c;
			if(root1 == NULL) {
				root1 = new Node(u);
				MakeNode(root1, u, v, c);
			}
			else Insert(root1, u, v, c);
		}
		cin >> m;
		Node *root2 = NULL;
		for(int i = 1 ; i <= m ; i++) {
			cin >> u >> v >> c;
			if(root2 == NULL) {
				root2 = new Node(u);
				MakeNode(root2, u, v, c);
			}
			else Insert(root2, u, v, c);
		}
		cout << check(root1, root2) << endl;
	}
    return 0;
}
