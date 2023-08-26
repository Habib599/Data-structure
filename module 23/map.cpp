#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    mp["sakib"]=75;
    mp.insert({"akib", 100});
    mp.insert({"akib", 150});
    mp["tamim"]=79;
    for( auto it=mp.begin(); it!=mp.end(); it++)
    {
        cout <<it->first<<" "<<it->second<< endl;
    }

    cout << mp.count("akib")<<endl;
}