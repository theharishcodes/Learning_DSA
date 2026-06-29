#include <iostream>
using namespace std;

int main()
{
    /*
        Initialization;
        while(condition)
        {
            body of the loop;
            update;
        }
    */
    int i = 1;
    while(i <=10)
    {
        cout << "Count " << i << "\n";
        i++;
    }

    /*
        Do While Loop - Runs the body at least one time even if the condition is false initially. Then it goes forward and checks the condition for the (one time)updated value of 'i'.

        Initialization;
        do
        {
            body of the loop;
            update;
        }
        while(condition);


        do
        {
            cout << "Count " << i << "\n";
            i++;
        }
        while(i <=10);
    */
    cout << "Value of i after the loop : " << i;
    // Try using i = 20 for initialization in both the while loop and do while loop, with the same condition, to see the difference in the output.
    
    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}