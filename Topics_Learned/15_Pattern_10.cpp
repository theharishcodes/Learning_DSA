#include <iostream>
using namespace std;
void pattern10( int r)
{
    for (int i = 1; i <= ((2*r) - 1); i++) // r = rows
    {
        if (i <= r) // For pyramid pattern, till the rth row.
        {
            // stars
            for (int j = 1; j <= i; j++ ) //
            {
                cout << "* ";
            }
        }
        else // For inverted pyramid pattern, from the (r+1)th row to the (2*r -1)th row.
        {
            // stars
            for (int j = 1; j <= ((2*r) - i); j++ ) // Here, the number of stars decreases with the increase in the number of rows. The formula (2*r - i) is actually, r - (i - r) = 2*r - i, where (i - r) is the number of spaces after stars.
            {
                cout << "* ";
            }
            
        }
        // As the body in if and else statement is same, with just the difference of limit(condition) on j.
        // We can write
        // int stars = i;
        // if (i > r)
        // {
        //     stars = ((2*r) - i)
        // }
        // And replace the limit in condition by variable stars.
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
        pattern10(r);
        cout << "\n"; // This is used to move to the next line after printing each test case.
    }


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}