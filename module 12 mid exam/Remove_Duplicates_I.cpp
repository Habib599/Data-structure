#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node (int val)
    {
        this->val=val;
        this->next=NULL;
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
void deleteDublicate(Node*head)
{
    if(head==NULL)
    {
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        if(tmp->val==tmp->next->val)
        {
            Node* deletenode=tmp->next;
            tmp->next=deletenode->next;
            delete deletenode;
        }
        else
        {
            tmp=tmp->next;
        }
    }
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

int main() 
{
    int val;
    Node* head=NULL;

    while (cin >> val && val != -1) 
    {
        insertTail(head,val);
    }
    for(Node*i=head; i->next!=NULL;i=i->next)
    {
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    deleteDublicate(head);
    print(head);
    return 0;
}
