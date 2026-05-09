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

Node *Biuld(vector<int> &Inorder, vector<int> &Levelorder, int l, int r) {
    if(l > r || Levelorder.empty()) return NULL;
    int rootValue = Levelorder[0];
    Node *root = new Node(rootValue);
    int mid = l;
    while(Inorder[mid] != rootValue) mid++;
    set<int> left(Inorder.begin() + l, Inorder.begin() + mid);
    set<int> right(Inorder.begin() + mid + 1, Inorder.begin() + r + 1);
    vector<int> leftLv, rightLv;
    for(int i = 1 ; i < Levelorder.size() ; i++) {
        if(left.count(Levelorder[i])) leftLv.push_back(Levelorder[i]);
        if(right.count(Levelorder[i])) rightLv.push_back(Levelorder[i]);
    }
    root -> left = Biuld(Inorder, leftLv, l, mid - 1);
    root -> right = Biuld(Inorder, rightLv, mid + 1, r);
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
    vector<int> Inorder(n + 1), Levelorder(n + 1);
    for(int i = 0 ; i < n ; i++) cin >> Inorder[i];
    for(int i = 0 ; i < n ; i++) cin >> Levelorder[i];
    Node *root = Biuld(Inorder, Levelorder, 0, n - 1);
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
