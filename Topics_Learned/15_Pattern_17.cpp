#include <iostream>
using namespace std;
void pattern17( int r)
{
    
    for (int i = 1; i <= r; i++) // r = rows
    {
        // space
        for (int j = 1; j <= r - i; j++)
        {
            cout << "  ";
        }
        // Alphabets
        // for (char j = 'A'; j < 'A' + i; j++)
        // {
        //     cout << j << " ";
        // }
        // // Alphabets in reverse
        // for (char j = 'A' + i - 2; j >= 'A'; j--) // It's j = 'A' + i - 2 because we don't want the peak letter to repeat. So, there is - 2 intead of -1. -1 would give A B C C B A.
        // {
        //     cout << j << " ";
        // }
        // OR After space
        
        char ch = 'A';
        for (int j = 1; j <= (2*i - 1); j ++)
        {
            cout << ch << " ";
            if (j < i)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        
        cout << "\n";
    }
}
int main()
{
    int t, r;
    cout << "Enter the number of test cases : ";
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Test Case " << i << " :\n";
        cout << "Rows = ";
        cin >> r; // Input the number of rows.
        cout << "\nPattern for Test Case " << i << " :\n";
        pattern17(r);
        cout << "\n"; // This is used to move to the next line after printing each test case.
    }


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}