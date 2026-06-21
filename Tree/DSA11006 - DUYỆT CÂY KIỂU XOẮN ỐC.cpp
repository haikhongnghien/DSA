#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const long long MOD = 1e9 + 7;
const long long INF = 1e9;
#define endl '\n'
using namespace std;

struct Node {
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
	else {
		Insert(root -> left, u, v, c);
		Insert(root -> right, u, v, c);
	}
}

void SpiralOrder(Node *root) {
	stack<Node*> s1, s2;
	s1.push(root);
	while(!s1.empty() || !s2.empty()) {
		while(!s1.empty()) {
			Node *t = s1.top(); s1.pop();
			cout << t -> data << ' ';
			if(t -> right != NULL) s2.push(t -> right);
			if(t -> left != NULL) s2.push(t -> left);
		}
		while(!s2.empty()) {
			Node *t = s2.top(); s2.pop();
			cout << t -> data << ' ';
			if(t -> left != NULL) s1.push(t -> left);
			if(t -> right != NULL) s1.push(t -> right);
		}
	}
}

int main() {
    FASTER;
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		Node *root = NULL;
		for(int i = 0 ; i < n ; i++) {
			int u, v; char c;
			cin >> u >> v >> c;
			if(root == NULL) {
				root = new Node(u);
				MakeNode(root, u, v, c);
			}
			else Insert(root, u, v, c);
		}
		SpiralOrder(root);
		cout << endl;
	}
    return 0;
}
