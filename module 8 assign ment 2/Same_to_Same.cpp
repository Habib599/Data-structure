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
int checklist(Node* head1, Node* head2) 
{
    while (head1 != NULL && head2 != NULL) 
    {
        if (head1->val != head2->val) 
        {
            return 0;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1 == NULL && head2 == NULL) 
    {
        return 1;
    }
    return 0;
}
int main()
{
    int val;
    Node* head1=NULL;
    Node* head2=NULL;
    while(1)
    {
        cin>>val;
        if(val==-1)
            break;
        insert(head1,val);
    }
    while(1)
    {
        cin>>val;
        if(val==-1)
            break;
        insert(head2,val);
    }
    if (checklist(head1, head2)) 
    {
        cout << "YES" <<endl;
    } else 
    {
        cout << "NO" <<endl;
    }
    
    return 0;
}