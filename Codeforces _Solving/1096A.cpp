#include <iostream>
using namespace std;

void cf1096A(int x, int y)
{
    if(x%2!=0 && y%2!=0)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
}

int main()
{
    int n;
    cin >> n;
    int a, b;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cf1096A(a,b);
    }
}
