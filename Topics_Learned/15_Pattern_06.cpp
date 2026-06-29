#include <iostream>
using namespace std;
void pattern6( int r)
{
    for (int i = 1; i <= r; i++) // r = rows
    {
        for (int j= r; j >= i; j--)
        {
            cout << r-j+1 << " "; // Here, the value of r-j+1 is printed instead of "*". So, for the 1st row, there will be r columns with values 1, 2, 3, ..., r, for the 2nd row, there will be r-1 columns with values 1, 2, 3, ..., r-1, and so on.
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
        pattern6(r);
        cout << "\n"; // This is used to move to the next line after printing each test case.
    }


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}