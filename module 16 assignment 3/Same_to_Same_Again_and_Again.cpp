#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    queue<int> q;
    int N, M, v;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> v;
        s.push(v);
    }
    for (int i = 0; i < M; i++)
    {
        cin >> v;
        q.push(v);
    }

    bool sameLists = true;
    if (N != M)
    {
        sameLists = false;
    }
    else
    {
        while (!s.empty() && !q.empty())
        {
            int stackValue = s.top();
            int queueValue = q.front();

            if (stackValue != queueValue)
            {
                sameLists = false;
                break;
            }
            s.pop();
            q.pop();
        }
    }
    if (sameLists)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
