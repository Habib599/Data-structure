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
void insertTail(Node* &head,int val)
{
    Node *tmp=head;
    Node* newnode=new Node(val);
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
void printpos(Node *head,int pos)
{
    Node *tmp=head;
    for(int i=1;i<=(pos/2)-1;i++)
    {
        tmp=tmp->next;
    }
      if(pos%2==0)
    {
        cout<<tmp->val<<" ";
    }
    cout<<tmp->next->val;
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
    int v;
    Node *head = NULL;
    while (cin >> v && v !=-1) 
    {
        insertTail(head,v);
    }
    printpos(head,size(head));
    
    return 0;
}