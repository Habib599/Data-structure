#include <bits/stdc++.h>
using namespace std;
int main() 
{
    list<int>val;
    int v;
    while (cin >> v && v != -1) 
    {
        val.push_back(v);
    }
    val.sort();
    val.unique();
    for (int v : val) 
    {
        cout<<v<<" ";
    }
    cout<<endl;
    return 0;
}
