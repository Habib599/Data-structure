#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    set<int> v;
    int flag=0;

    for (int i = 0; i < n; i++) 
    {
        if (v.count(a[i]) > 0) //v.count man 1 0
        {
            flag = 1;
            break;
        }
        v.insert(a[i]);// v=2,1,3,5
    }

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
