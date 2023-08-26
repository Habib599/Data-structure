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

        int a[n];
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        map<int, int> frq;

        for (int i = 0; i < n; i++) 
        {
            frq[a[i]]++;
        }

        int c = 0;
        int v = a[0];

        for (const auto& e : frq) 
        {
            int c2 = e.second;
            int v2 = e.first;

            if (c2 > c || (c2 == c && v2 > v)) 
            {
                c = c2;
                v = v2;
            }
        }
        cout << v << " " << c << endl;
    }

    return 0;
}
