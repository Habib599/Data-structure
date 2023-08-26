#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]>0)
        { 
            a[i]=1;
        }
        else if(a[i]<0)
        { 
            a[i]=2;
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i];
        if(i!=a.size()-1){
            cout<<" ";
        }
    }
    
    return 0;
}