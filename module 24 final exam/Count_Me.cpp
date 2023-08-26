#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--) 
    {
        string S;
        getline(cin, S);

        map<string, int> table;

        stringstream ss(S);
        string word;
        string maxword;
        int count = 0;
        while (ss >> word) 
        {
            table[word]++;
            if(table[word] > count)
            {
                count = table[word];
                maxword = word;
            }
        }
        cout << maxword << " " << count << endl;
    }

    return 0;
}