#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

void makeNode(Node *root, int u, int v, char s) {
    if(s == 'L') root -> left = new Node(v);
    else root -> right = new Node(v);
}

void insert(Node *root, int u, int v, char s) {
    if(root == NULL) return;
    if(root -> data == u) makeNode(root, u, v, s);
    else {
        insert(root -> left, u, v, s);
        insert(root -> right, u, v, s);
    }
}

void levelOrder(Node *root) {
    queue<Node*> Q;
    Q.push(root);
    while(!Q.empty()) {
        Node *top = Q.front(); Q.pop();
        cout << top -> data << ' ';
        if(top -> left != NULL) Q.push(top -> left);
        if(top -> right != NULL) Q.push(top -> right);
    }
    cout << endl;
}

void solve() {
    int n;
    cin >> n;
    Node *root = NULL;
    while(n--) {
        int u, v; char s;
        cin >> u >> v >> s;
        if(root == NULL) {
            root = new Node(u);
            makeNode(root, u, v, s);
        }
        else insert(root, u, v, s);
    }
    levelOrder(root);
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
