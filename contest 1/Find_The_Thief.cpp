#include <iostream>
using namespace std;

int find_thief(int N, int pearls[]) 
{
    int thief = 0;
    for (int i = 0; i < N; i++) 
    {
        thief ^= pearls[i];
    }
    return thief;
}

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int N;
        cin >> N;

        int pearls[N];
        for (int i = 0; i < N; i++) 
        {
            cin >> pearls[i];
        }

        cout << find_thief(N, pearls) << endl;
    }

    return 0;
}
