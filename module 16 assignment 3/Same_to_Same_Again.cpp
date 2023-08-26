#include <iostream>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;

        Node(int val) 
        {
            this->val = val;
            this->next = NULL;
        }
};

class Stack 
{
    public:
        Node* top=NULL;
        void push(int val) // insert in head
        {
            Node* newNode = new Node(val);
            newNode->next = top;
            top = newNode;
        }
        int pop() 
        {
            if (isEmpty()) return 0;
            Node* tmp = top;
            int value = tmp->val;
            top = top->next;
            delete tmp;
            return value;
        }
        bool isEmpty() 
        {
            return top == NULL;
        }
};

class Queue 
{
    public:
        Node* front=NULL;
        Node* rear=NULL;

        void queuePush(int val) 
        {
            Node* newNode = new Node(val);
            if (isEmpty()) 
            {
                front = newNode;
                rear = newNode;
            }
            rear->next = newNode;
            rear = newNode;
        }

        int queuePop() 
        {
            if (isEmpty()) return 0;
            Node* tmp = front;
            int value = tmp->val;
            front = front->next;
            if (front == NULL) 
            {
                rear = NULL;
            }
            delete tmp;
            return value;
        }

        bool isEmpty() 
        {
            return front == NULL;
        }
};

int main() {
    int N, M,v;
    cin >> N >> M;

    Stack stack;
    Queue queue;

    for (int i = 0; i < N; i++) 
    {
        cin >> v;
        stack.push(v);
    }

    for (int i = 0; i < M; i++) 
    {
        cin >>v;
        queue.queuePush(v);
    }

    bool sameLists = true;
    if(N!=M)
    {
        sameLists=false;
    }
    else
    {
        while (!stack.isEmpty() && !queue.isEmpty()) 
        {
            int stackValue = stack.pop();
            int queueValue = queue.queuePop();

            if (stackValue != queueValue) 
            {
                sameLists = false;
                break;
            }
        }
    }
    if (sameLists) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
