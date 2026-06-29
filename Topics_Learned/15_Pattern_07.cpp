#include <iostream>
using namespace std;
void pattern7( int r)
{
    for (int i = 1; i <= r; i ++)
    {
        // for (int j = 1; j <= (r+i-1); j ++) // Here, we wanted at least r+i-1 columns in ith row.
        // {
        //     if (j < (r+1-i)) // Here, we are checking if the column number is less than r+1-i, which means that we are in the left side of the pattern where there are spaces. So, we will print spaces in this case.
        //     {
        //         cout << "  ";
        //     }
        //     else // Here, we are in the right side of the pattern where there are stars. So, we will print stars in this case.
        //     {
        //         cout << "* ";
        //     }
        // }
        
        // Or
        
        // spaces
        for (int j= 1; j <= r-i; j++)
        {
            cout << "  ";
        }
        // stars
        for (int j= 1; j <= 2*i - 1; j++)
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
        pattern7(r);
        cout << "\n"; // This is used to move to the next line after printing each test case.
    }


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}