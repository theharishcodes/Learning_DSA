#include <iostream>
using namespace std;
void pattern9( int r)
{
    for (int i = 1; i <= 2*r; i++) // r = rows
    {
        if (i <= r) // For pyramid pattern, till the rth row.
        {
            // space
            for (int j = 1; j <= (r-i); j++ ) //
            {
                cout << "  ";
            }
            // stars
            for (int j = 1; j <= ((2*i)-1); j ++)
            {
                cout << "* ";
            }
        }
        else // For inverted pyramid pattern, from the (r+1)th row to the 2*rth row.
        {
            // space
            for (int j = 1; j <= (i-(r+1)); j++ )
            {
                cout << "  ";
            }
            // stars
            for (int j = 1; j <= ((4*r)-(2*i)+1); j ++)
            {
                cout << "* ";
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
        pattern9(r);
        cout << "\n"; // This is used to move to the next line after printing each test case.
    }


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}