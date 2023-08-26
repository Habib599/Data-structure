#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0 && a == b && b == c) 
    {
        cout<<"Yes";
    } 
    else 
    {
        cout<<"No";
    }

    return 0;
}
