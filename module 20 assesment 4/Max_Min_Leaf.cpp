#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int val;
    cin >> val;
    Node* root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node*> q;
    if (root)
        q.push(root);
    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myLeft;
        Node* myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void LeafNodes(Node* root, int& minval, int& maxval) 
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL) 
    {
        minval = min(minval, root->val);
        maxval = max(maxval, root->val);
        return;
    }
    LeafNodes(root->left, minval, maxval);
    LeafNodes(root->right, minval, maxval);
}

int main() {
    Node* root = input_tree();
    int maxval = INT_MIN;
    int minval = INT_MAX;
    LeafNodes(root, minval, maxval);
    cout << maxval << " " << minval << endl;
    return 0;
}
