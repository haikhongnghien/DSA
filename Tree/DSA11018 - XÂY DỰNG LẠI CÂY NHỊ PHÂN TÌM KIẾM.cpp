#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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

Node* Insert(Node *root, int value) {
    if(root == NULL) return new Node(value);
    if(root -> data > value) {
        root -> left = Insert(root -> left, value);
    } 
    else root -> right = Insert(root -> right, value);
    return root;
}

void Preorder(Node *root) {
    if(root == NULL) return;
    cout << root -> data << ' ';
    Preorder(root -> left);
    Preorder(root -> right);
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
            int x; cin >> x;
            root = Insert(root, x);
        }
        Preorder(root);
        cout << endl;
    }

    return 0;
}
