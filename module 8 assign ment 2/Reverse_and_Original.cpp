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
void insert(Node *&head,int v)
{
    Node * newnode= new Node(v);
    if(head== NULL)
    {
        head=newnode;
        return;
    }
    Node *tmp=head;
    while (tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void reverse(Node* n)
{
    if(n==NULL)
        return;
    reverse(n->next);
    cout<<n->val<<" ";
}
void orginal(Node*head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp-> next;
    }
        
}
int main()
{
    int val;
    Node* head=NULL;
    while(1)
    {
        cin>>val;
        if(val==-1)
            break;
        insert(head,val);
    }
    reverse(head);
    cout<<endl;
    orginal(head);
    return 0;
}