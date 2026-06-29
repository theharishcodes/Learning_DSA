#include <iostream>
using namespace std;
void pattern16( int r)
{
    
    for (int i = 0; i < r; i++) // r = rows
    {
        char ch = 'A' + i; // We want same alphabet to be printed and the alphabet depends on the row number.
        for (int j = 0; j <= i ; j++) 
        {
            cout << ch << " ";
            // Same alphabet is printed row number times as loop runs till j == i.
            // The Characters are stored in Ascii.
            // When we say char ch = 'A' + 2, we are saying to access the ascii, which have stored 'C' that is 2 alphabets after 'A'.
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
        pattern16(r);
        cout << "\n"; // This is used to move to the next line after printing each test case.
    }


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}