#include <bits/stdc++.h>
using namespace std;

class Student 
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks) 
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class ten 
{
public:
    bool operator()(const Student& a, const Student& b) const 
    {
        if (a.marks == b.marks) 
        {
            return a.roll > b.roll;
        }
        return a.marks < b.marks;
    }
};

int main() 
{
    int n,q;
    cin >> n;

    priority_queue<Student, vector<Student>, ten> pq;

    for (int i = 0; i < n; i++) 
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student val(name, roll, marks);
        pq.push(val);
    }
    cin >> q;
    for (int i = 0; i < q; i++) 
    {
        int c;
        cin >> c;
        if (c == 0) 
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student val(name, roll, marks);
            pq.push(val);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        } 
        else if (c == 1) 
        {
            if (!pq.empty()) 
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            } 
            else 
            {
                cout << "Empty" << endl;
            }
        } 
        else if (c == 2) 
        {
            if (!pq.empty()) 
            {
                pq.pop();
            }
            if (!pq.empty()) 
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            } 
            else 
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}