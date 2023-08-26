#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    int n, cmd;
    string v;
    cin >> n;

    while (n--)
    {
        cin >> cmd;
        if (cmd == 0)
        {
            cin >> v;
            q.push(v);
        }
        else
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    return 0;
}
