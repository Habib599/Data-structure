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
    int count=0;

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 1; j < a.size(); j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
    }
    cout<<count;

    
    return 0;
}