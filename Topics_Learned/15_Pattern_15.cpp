#include <iostream>
using namespace std;
void pattern15( int r)
{
    
    for (int i = r-1; i >= 0; i--) // r = rows
    {   // We want first row to go till ('A' + (r-1)). So, we change the parameters of i to go from r-1 to 0.
        
        for (char j = 'A'; j <= 'A' + i ; j++) 
        {
            cout << j << " ";
            // The Characters are stored in Ascii.
            // When we say char j = 'A' + 2, we are saying to access the ascii, which have stored 'C' that is 2 alphabets after 'A'.
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
        pattern15(r);
        cout << "\n"; // This is used to move to the next line after printing each test case.
    }


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}