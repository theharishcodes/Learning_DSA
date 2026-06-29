#include <iostream>
using namespace std;
void pattern22( int r)
{
    
    for (int i = 0; i < (2*r - 1); i++) // r = no. of rows or test case input
    {
        for (int j = 0; j < (2*r - 1); j++) // colums in each row
        {
            for (int k = 0; k < 2*r - 1; k++) // At Every psition/coordinate, we will run a loop of k increasing.
            {   
                    if (i==k || j==k || k == (2*r - 2) - i || k == (2*r - 2) - j) // numbers
                    {// For decreasing pattern, like in top left, first 2 conditions work, but to get increasing pattern in bottom right, last 2 conditions are needed.
                     // Top right, and Bottom left patterns are mixture of both, while (2*r - 2) - j and (2*r - 2) - i are distance from the boundaries.
                     // We are converting the coordinates from  ( i, j) to ((2*r - 2) - i, (2*r - 2) - j) so we can get perfect value of k, according to the region and position to create the pattern
                        // cout << k << " ";
                        cout << r - k << "  ";
                        break;
                    }
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
        pattern22(r);
        cout << "\n"; // This is used to move to the next line after printing each test case.
    }


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}