#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *pre;
        Node* next;
    Node (int v)
    {
        this->val=v;
        this->pre=NULL;
        this->next=NULL;
    }
};
void print_normal(Node *head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail)
{
    Node*tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->pre;
    }
}
int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* tail=c;

    head->next=a;
    a->next=b;
    b->next=c;
    c->pre=b;
    b->pre=a;
    a->pre=head;

    print_normal(head);
    print_reverse(tail);
    return 0;
}