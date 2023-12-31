#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++) 
    {
        int val;
        cin >> val;
        pq.push(val);
    }

    int Q;
    cin >> Q;

    while (Q--) 
    {
        int c;
        cin >> c;

        if (c == 0) 
        {
            int X;
            cin >> X;
            pq.push(X);
            cout << pq.top() << endl;
        } 
        else if (c == 1) 
        {
            if (!pq.empty()) 
            {
                cout << pq.top() << endl;
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
                if (!pq.empty()) 
                {
                    cout << pq.top() << endl;
                } 
                else 
                {
                    cout << "Empty" << endl;
                }
            } 
            else 
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
