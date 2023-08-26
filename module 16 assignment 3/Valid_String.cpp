#include <bits/stdc++.h>
using namespace std;

bool ValidString(string v) 
{
    stack<char> s;
    for (char ch : v) 
    {
        if (ch == 'A' && !s.empty() && s.top() == 'B') 
        {
            s.pop();
        } 
        else if (ch == 'B' && !s.empty() && s.top() == 'A') 
        {
            s.pop();
        } 
        else 
        {
            s.push(ch);
        }
    }
    return s.empty();
}
int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        string v;
        cin>>v;
        if (ValidString(v)) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
