#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i <n; i++)
    {
        cin>>b[i];
    }

    vector<int>c;
    c.reserve(a.size()+b.size());
    for(int num:b)
    {
        c.push_back(num);
    }
    for(int num:a)
    {
        c.push_back(num);
    }
    
    for (int i = 0; i < c.size(); i++)
    {
        cout<<c[i];
        if(i!=c.size()-1){
            cout<<" ";
        }
    }
    
    return 0;
}