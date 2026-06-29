#include <iostream>
using namespace std;

void cf1096B(string strng, int len)
{
    if(len%2 != 0)
    {
        cout << "NO\n";
    }
    else
    {
        int count_a = 0, count_b = 0;
        bool valid = true;
        for(int j = 0; j<len; j++)
        {
            if (strng[j] == '(')
            {
                count_a++;
            }
            else if(strng[j] == ')')
            {
                count_b++;
            }
            
        }
        if(count_a == count_b)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

int main()
{
    int t;
    cin >> t;
    int n;
    string str;
    for(int i=0; i < t; i++)
    {
        cin >> n >> str;
        cf1096B(str, n);
    }
}