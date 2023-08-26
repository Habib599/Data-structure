#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* pre;
        Node* next;
    Node (int val)
    {
        this->val=val;
        this->pre=NULL;
        this->next=NULL;
    }
};
void insert_tail(Node*&head, Node*&tail, int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->pre=tail;
    tail=newnode;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->pre;
    }
    cout << endl;
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
        insert_tail(head,tail,val);
    }
    // print_reverse(head);
    print_reverse(tail);

    return 0;
}