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
void insert_head(Node*&head, Node*&tail, int val)
{
    Node* newnode=new Node(val);
    if(tail==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->pre=newnode;
    head=newnode;
}

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

void insert_at_position(Node* head,int x,int val)
{
    Node*tmp=head;
    Node*newnode=new Node(val);
    for (int i = 1; i <= x-1; i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->pre=tmp;
    newnode->next->pre=newnode;
}

void print_normal(Node *head)
{
    Node *tmp = head;
    if(head==NULL) return;
    cout <<"L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    if(tail==NULL) return;
    cout <<"R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->pre;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *tmp = head;
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
    int val,x;
    Node* head=NULL;
    Node* tail=NULL;
    int q;
    cin>>q;
    while(q--)
    {
        cin>>x>>val;
        if (x > size(head))
        {
            cout << "Invalid"<<endl;
        }
        else if (x == 0)
        {
            insert_head(head,tail,val);
        }
        else if (x == size(head))
        {
            insert_tail(head,tail,val);
        }
        else
        {
            insert_at_position(head,x,val);
        }
        if(x < size(head))
        {
            print_normal(head);
            print_reverse(tail);
        }
    }
    return 0;
}