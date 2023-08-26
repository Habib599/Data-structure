#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
void insert(Node*& head, Node*& tail, int val) 
{
    Node* newNode = new Node(val);
    if (head == NULL) 
    {
        head = tail = newNode;
    } else 
    {
        tail->next = newNode;
        tail = newNode;
    }
}
int sizelist(Node*head)
{
    int count=0;
    Node*tmp=head;
    while (tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }return count;
}
void getmid(Node* head)
{
    Node* tmp=head;
    int size=sizelist(head);
    int mid=(size+1)/2;
    for (int i = 1; i <mid; i++)
    {
        tmp=tmp->next;
    }
    if(size%2==0)
    {
        cout<<tmp->val<<" ";
        cout<< tmp->next->val;
    }
    else
        cout<<tmp->val<<endl;
}
int main() {
    int val;
    Node* head=NULL;
    Node* tail=NULL;

    while (1) 
    {
        cin>>val;
        if (val==-1)
            break;
        insert(head,tail,val);
    }
    for (Node* i=head;i->next!=NULL;i=i->next) 
    {
        for (Node* j=i->next;j!=NULL;j=j->next) 
        {
            if (i->val<j->val) 
            {
                swap(i->val,j->val);
            }
        }
    }
    getmid(head);
    return 0;
}
