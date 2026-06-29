#include <iostream>
using namespace std;

int main()
{
    int i;

    // for(initialization; condition; update)
    // {
    // body of the loop;
    // }

    for( i = 1; i <=10; i++) // It will run till the condition i<=10 is true. So, it will run 10 times.
    {
        cout << "Count " << i << "\n";
    }
    
    // For the 10th time, the i will become 11 as in the update step(i++).
    cout << "Value of i after the loop : " << i << "\n"; // This will print the value of i after the loop, which is 11.

    // for(int k = 0; k >= 0 ; k++)
    // {
    //     cout << "This is an infinite loop.\n";
    // }

    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}