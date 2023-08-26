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
void max(Node * head)
{
    int max=head->val;
    Node*tmp=head;
    while (tmp!=NULL)
    {
        if(tmp->val>max)
        {
            max=tmp->val;
        }
        tmp=tmp->next;
    }
    cout<<max<<" ";
}
void min(Node * head)
{
    int min=head->val;
    Node*tmp=head;
    while (tmp!=NULL)
    {
        if(tmp->val<min)
        {
            min=tmp->val;
        }
        tmp=tmp->next;
    }
    cout<<min;
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
    max(head);
    min(head);
    return 0;
}