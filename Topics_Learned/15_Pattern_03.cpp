#include <iostream>
using namespace std;
void pattern3( int r)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j= 1; j <= i; j++)
        {
            cout << j << " "; // Here, the column number is printed instead of "*". So, for the 1st row, there will be 1 column with value 1, for the 2nd row, there will be 2 columns with values 1 and 2, and so on.
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
        pattern3(r);
        cout << "\n"; // This is used to move to the next line after printing each test case.
    }


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}