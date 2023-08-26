#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insertTail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}
void reverse(Node* &newhead, Node* current)
{
    if(current->next == NULL)
    {
        newhead=current;
        return;
    }
    reverse(newhead,current->next);
    current->next->next =current;
    current->next=NULL;
}
int palindrome(Node* head) 
{
    Node* newhead = NULL;
    Node* newtail = NULL;
    Node* tmp = head;
    while(tmp != NULL)
    {
        insertTail(newhead,newtail,tmp->val);
        tmp = tmp->next;
    }
    reverse(newhead,newhead);
    tmp=head;
    Node* dmp = newhead;
    while(dmp != NULL)
    {
        if(tmp->val != dmp->val)
        {
            return 0;
        }
        tmp=tmp->next;
        dmp=dmp->next;
    }
    return 1;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int v;
    while(cin>>v&&v!=-1)
    {
        insertTail(head,tail,v);
    }
    if(palindrome(head))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

