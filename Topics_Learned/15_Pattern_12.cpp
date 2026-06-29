#include <iostream>
using namespace std;
void pattern12( int r)
{
    for (int i = 1; i <= r; i++) // r = rows
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {// The column number will be printed on the left side of the pattern. So, for the 1st row, there will be 1 column with value 1, for the 2nd row, there will be 2 columns with values 1 and 2, and so on.
            cout << j << " ";
        }
        // spaces
        for (int j = 1; j <= (2*(r-i)); j++)
        {// The number of spaces will be printed in the middle of the pattern. So, for the 1st row, there will be 2*(r-1) spaces, for the 2nd row, there will be 2*(r-2) spaces, and so on.
         // This 2*(r-1) is derived as 2*i columns taken by the numbers and the total number of columns in the pattern is 2*r. So, the remaining columns will be taken by spaces, which is 2*r - 2*i = 2*(r-i).
            cout << "  ";
        }
        // numbers
        /*
        for (int j = 1; j <= i; j++)
        {// The column number will be printed on the right side of the pattern. So, for the 1st row, there will be 1 column with value 1, for the 2nd row, there will be 2 columns with values 2 and 1, and so on. So, the value of the column will be i-j+1.
            cout << i-j+1 << " ";
        }
        */
        // Or for right numbers
        
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
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
        pattern12(r);
        cout << "\n"; // This is used to move to the next line after printing each test case.
    }


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}