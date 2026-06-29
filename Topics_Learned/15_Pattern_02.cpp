#include <iostream>
using namespace std;
void pattern2( int r)
{
    for (int i = 1; i <= r; i++) // r = rows
    {
        for (int j= 1; j<= i; j++) // Here, the number of columns increases with the increase in the number of rows. So, for the 1st row, there will be 1 column, for the 2nd row, there will be 2 columns, and so on.
        {
            cout << "* ";
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
        pattern2(r);
        cout << "\n"; // This is used to move to the next line after printing each test case.
    }


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}