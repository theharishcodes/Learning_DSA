#include <iostream>
using namespace std;
void pattern8( int r)
{
    for (int i = 1; i <= r; i ++)
    {
        // for (int j = 1; j <= ((2*r) - i); j ++) // Here, we wanted at least (2*r - 1) columns in ith row.
        // {
        //     if (j < (i)) // In the pattern, it is noticed that for each row, there are i-1 spaces in the left side of the pattern. So, we are checking if the column number is less than i, which means that we are in the left side of the pattern where there are spaces. So, we will print spaces in this case.
        //     {
        //         cout << "  ";
        //     }
        //     else // As we would be adding i-1 spaces, the remaining will have stars, i.e, (2*r - i) - (i - 1) = 2*r - 2*i + 1 stars.
        //     {
        //         cout << "* ";
        //     }
        // }
        // Or
        
        // spaces
        for (int j= 1; j < i; j++)
        {
            cout << "  ";
        }
        // stars
        for (int j= 1; j <= 2*(r-i) + 1; j++)
        {
            cout << "* ";
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
        pattern8(r);
        cout << "\n"; // This is used to move to the next line after printing each test case.
    }


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}