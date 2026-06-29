#include <iostream>
using namespace std;
void pattern20( int r)
{
    
    for (int i = 0; i < r; i++) // r = no. of rows or test case input
    {
        for (int j = 0; j < r; j++) // colums in each row
        {
            if (i==0 || j==0 || i == r-1 || j == r-1) // stars
            {// condition to print stars. For empty square/rectangle, in first row and column and last row and column, the star is printed. The coordinates will be (0, j), (r-1, j), (i, 0), (i, r-1).
                cout << "* ";
            }
            else
            {// other coordinates are filled with space, i.e, are empty.
                cout << "  ";
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
        pattern20(r);
        cout << "\n"; // This is used to move to the next line after printing each test case.
    }


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}