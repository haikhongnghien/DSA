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

Node *Biuld(vector<int> &Inorder, vector<int> &Preoder, int l, int r, int &idx) {
    if(l > r) return NULL;
    int rootValue = Preoder[idx++];
    Node *root = new Node(rootValue);
    int mid = l;
    while(Inorder[mid] != rootValue) mid++;
    root -> left = Biuld(Inorder, Preoder, l, mid - 1, idx);
    root -> right = Biuld(Inorder, Preoder, mid + 1 , r, idx);
    return root;
}

void Postorder(Node *root) {
    if(root == NULL) return;
    Postorder(root -> left);
    Postorder(root -> right);
    cout << root -> data << ' ';
}

void solve() {
    int n;
    cin >> n;
    vector<int> Inorder(n + 1), Preorder(n + 1);
    for(int i = 1 ; i <= n ; i++) cin >> Inorder[i];
    for(int i = 1 ; i <= n ; i++) cin >> Preorder[i];
    int idx = 1;
    Node *root = Biuld(Inorder, Preorder, 1, n, idx);
    Postorder(root);
    cout << endl;
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
