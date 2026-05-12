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

Node *Biuld(vector<int> Pre, int left, int right) {
    if(left > right) return NULL;
    Node *root = new Node(Pre[left]);
    int mid = left + 1;
    while(mid <= right && Pre[mid] < root -> data) mid++;
    root -> left = Biuld(Pre, left + 1, mid - 1);
    root -> right = Biuld(Pre, mid, right);
    return root;
}

void Postorder(Node *root) {
    if(root == NULL) return;
    Postorder(root -> left);
    Postorder(root -> right);
    cout << root -> data << ' ';
}

int main() {

    FASTER;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> Pre(n);
        for(auto &x : Pre) cin >> x;
        Node *root = Biuld(Pre, 0, n - 1);
        Postorder(root);
        cout << endl;
    }

    return 0;
}
