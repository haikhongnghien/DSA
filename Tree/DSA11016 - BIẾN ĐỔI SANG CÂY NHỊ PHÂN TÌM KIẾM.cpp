#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 1e9
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
vector<int> res;

void MakeNode(Node *root, int u, int v, char c) {
    if(c == 'L') root -> left = new Node(v);
    else root -> right = new Node(v);
}

void Insert(Node *root, int u, int v, char c) {
    if(root == NULL) return;
    if(root -> data == u) {
        MakeNode(root, u, v, c);
    }
    else {
        Insert(root -> left, u, v, c);
        Insert(root -> right, u, v, c);
    }
}

void Inorder(Node *root) {
    if(root == NULL) return;
    Inorder(root -> left);
    res.push_back(root -> data);
    Inorder(root -> right);
}

void Assign(Node *root, vector<int> res, int &idx) {
    if(root == NULL) return;
    Assign(root -> left, res, idx);
    root -> data = res[idx++];
    Assign(root -> right, res, idx);
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
            int u, v; char s;
            cin >> u >> v >> s;
            if(root == NULL){
                root = new Node(u);
                MakeNode(root, u, v, s);
            }
            else Insert(root, u, v, s);
        }
        res.clear();
        Inorder(root);
        sort(res.begin(), res.end());
        int idx = 0;
        Assign(root, res, idx);
        res.clear();
        Inorder(root);
        for(auto x : res) cout << x << ' ';
        cout << endl;
    }

    return 0;
}
