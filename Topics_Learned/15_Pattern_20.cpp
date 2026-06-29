#include <iostream>
using namespace std;
void pattern20( int r)
{
    
    for (int i = 0; i < (2*r - 1); i++) // 2r = rows
    {
        if (i<r) // Upper Half
        {
            // stars
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }

            // spaces
            for (int j = 1; j <= 2*(r - i -1); j++)
            {
                cout << " ";
            }

            // stars
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
        }
        else // Lower Half
        {
            // stars
            for (int j = 1 ; j <= (2*r - i - 1); j++)
            {
                cout << "*";
            }

            // spaces
            for (int j = 1; j <= 2*(i - r + 1); j++)
            {
                cout << " ";
            }

            // stars
            for (int j = 1 ; j <= (2*r - i - 1); j++)
            {
                cout << "*";
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