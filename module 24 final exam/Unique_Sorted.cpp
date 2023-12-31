#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>());

        a.erase(unique(a.begin(), a.end()), a.end());

        for (int i = 0; i < a.size(); i++) 
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
