#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;        
        Node* pre;        

    Node (int val)
    {
        this->val=val;
        this->next=NULL;
        this->pre=NULL;
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
    list<int>head;
    
    return 0;
}