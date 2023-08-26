#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertTail(Node*& head, int v)
{
    Node* newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}

void insertPos(Node*& head, int pos, int v)
{
    if (pos == 0)
    {
        Node* newnode = new Node(v);
        newnode->next = head;
        head = newnode;
        return;
    }
    Node* tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    Node* newnode = new Node(v);
    newnode->next = tmp->next;
    tmp->next = newnode;
}

void print(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int size(Node* head)
{
    Node* tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main()
{
    int v;
    Node* head = NULL;
    while (cin >> v && v != -1)
    {
        insertTail(head, v);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int pos, v;
        cin >> pos >> v;
        if (pos > size(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insertPos(head, pos, v);
            print(head);
        }
    }

    return 0;
}
