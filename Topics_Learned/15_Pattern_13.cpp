#include <iostream>
using namespace std;
void pattern13( int r)
{
    int num = 1;
    for (int i = 1; i <= r; i++) // r = rows
    {   
        /*
        for (int j = ((((i)*(i-1))/2) + 1); j <= (((i)*(i+1))/2); j++) 
        {
            cout << j << " ";
        
        // For the Pattern, we need to decide starting point and ending point.
        // We found that the ending point is (((i)*(i+1))/2).
        // And the starting point of ith row is the 1 added to the ending point of (i-1)th row.
        // So, the starting point is ((((i)*(i-1))/2) + 1).
        }
        */
        
        // Or simply
        
        
        for (int j = 1; j <= i; j++)
        {
            cout << num++ << " ";
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
        pattern13(r);
        cout << "\n"; // This is used to move to the next line after printing each test case.
    }


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}