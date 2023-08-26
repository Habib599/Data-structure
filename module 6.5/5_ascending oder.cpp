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
void insertTail(Node*&head,int v)
{
    Node*newnode=new Node(v);
    Node* tmp=head;
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void chake_ascending(Node*head)
{
    Node*tmp=head;
    Node*dmp=tmp->next;
    string t="YES";
    while(dmp!=NULL)
    {
        if(tmp->val>dmp->val)
        {
            t="NO";
        }
        tmp=tmp->next;
        dmp=dmp->next;
    }
    cout<<t;
}
int main()
{
    int v;
    Node*head=NULL;
    while(cin >>v && v!=-1)
    {
        insertTail(head,v);
    }
    chake_ascending(head);
    return 0;
}