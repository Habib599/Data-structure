#include <bits/stdc++.h>
using namespace std;

class Node 
{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) 
    {
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

vector<int> reverseOrder(Node* root) 
{
    vector<int> v;
    queue<Node*> q;
    if (root)
        q.push(root);
    while (!q.empty()) 
    {
        Node* node = q.front();
        q.pop();
        v.push_back(node->val);
        if (node->right)
            q.push(node->right);
        if (node->left)
            q.push(node->left);
    }
    reverse(v.begin(), v.end());
    return v;
}

int main() 
{
    Node* root = input_tree();
    vector<int> v = reverseOrder(root);
    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
