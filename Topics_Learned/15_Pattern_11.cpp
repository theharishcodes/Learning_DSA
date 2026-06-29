#include <iostream>
using namespace std;
void pattern11( int r)
{
    //for (int i = 1; i <= r; i++) // r = rows
    //{
        /*
        if ((i % 2) == 0) // Even row number
        {
            for(int j = 1; j <= i; j++)
            {
                if((j % 2) == 0)
                {// for even column
                    cout << "1 ";
                }
                else
                {// for odd column
                    cout << "0 ";
                }
            }
        }
        else // Odd row number
        {
            for(int j = 1; j <= i; j++)
            {
                if((j % 2) == 0)
                {// for even column
                    cout << "0 ";
                }
                else
                {// for odd column
                    cout << "1 ";
                }
            }
        }*/
        // Or simply,
            // for (int j = 1; j <= i; j++) // this access every point in the grid.
            // {
            //     if ((i+j)%2 == 0)
            //     {// conditions like even+even or odd + odd which give an even result.
            //         cout << "1 ";
            //     }
            //     else
            //     {// conditions like even + odd or odd + even which give an odd result.
            //         cout << "0 ";
            //     }
            // }
        // Or
        
        int start;
        for (int i = 0; i < r; i++)
        {
            if (i%2 == 0)
            {
                start = 1;
            }
            else
            {
                start = 0;
            }
            for (int j = 0; j <= i; j++)
            {
            cout << start << " ";
            start = 1 - start;
            }
            cout << "\n";
        }
        // cout << "\n";
    //}
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
        pattern11(r);
        cout << "\n"; // This is used to move to the next line after printing each test case.
    }


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}