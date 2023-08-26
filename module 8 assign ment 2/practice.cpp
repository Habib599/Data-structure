#include<bits/stdc++.h>
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
void insert(Node *&head,Node *&tail,int v)
{
    Node * newnode= new Node(v);
    if(head== NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void reverse(Node*n)
{
    if(n==NULL)
        return;
    reverse(n->next);
    cout<<n->val<<" ";
}
void orginal(Node*m)
{
    if(m==NULL)
        return;
    cout<<m->val<<" ";
    orginal(m->next);
    
}
int main()
{
    int val;
    Node* head=NULL;
    Node* tail=NULL;
    while(1)
    {
        cin>>val;
        if(val==-1)
            break;
        insert(head,tail,val);
    }
    reverse(head);
    cout<<endl;
    orginal(head);
    return 0;
}