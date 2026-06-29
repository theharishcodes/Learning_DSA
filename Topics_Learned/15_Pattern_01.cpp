#include <iostream>
using namespace std;
void pattern1( int r, int c)
{
    for (int i=1; i <= r; i++) // r = rows
    {
        for (int j= 1; j <= c; j++) // c = columns
        {
            cout << "* ";
        }
        cout << "\n"; // This is used to move to the next line after printing each row.
    }
}
int main()
{
    int t, r, c;
    cout << "Enter the number of test cases : ";
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Test Case " << i << " :\n";
        cout << "Rows = ";
        cin >> r; // Input the number of rows.
        cout << "Columns = ";
        cin >> c; // Input the number of columns.
        cout << "\nPattern for Test Case " << i << " :\n";
        pattern1(r, c);
        cout << "\n"; // This is used to move to the next line after printing each test case.
    }


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}