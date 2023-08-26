#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void inserthead(Node*& head, Node*& tail, int val) 
{
    Node* newNode = new Node(val);
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
    } 
    else 
    {
        newNode->next = head;
        head = newNode;
    }
}

void inserttail(Node*& head, Node*& tail, int val) 
{
    Node* newNode = new Node(val);
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
    } 
    else 
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void printheadtail(Node* head, Node* tail) 
{
    cout << head->val << " " << tail->val <<endl;
}

int main() {
    int Q;
    cin >> Q;

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < Q; i++) 
    {
        int X, V;
        cin >> X >> V;

        if (X == 0) 
        {
            inserthead(head, tail, V);
        } else 
        {
            inserttail(head, tail, V);
        }

        printheadtail(head, tail);
    }
    return 0;
}
