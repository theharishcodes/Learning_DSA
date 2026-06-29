#include <iostream>
using namespace std;
void pattern17( int r)
{
    
    for (int i = 0; i < r; i++) // r = rows
    {
        char ch = 'A' + r - 1; // The max alphabet declared.
        for (int j = i; j >= 0; j--) // reverse loop - runs for same no. of time but useful for character printing.
        {
            cout << char(ch - j) << " "; // Printing max alphabet and j alphabets before it, but in normal order.
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
        pattern17(r);
        cout << "\n"; // This is used to move to the next line after printing each test case.
    }


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}