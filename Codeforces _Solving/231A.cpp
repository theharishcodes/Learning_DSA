#include <iostream>
using namespace std;

void printabcd(int t)
{
    int wincount = 0;
    for(int i = 0; i < t; i++)
    {
        int count = 0;
        for(int j = 0; j<3; j++)
        {
            int digit;
            cin >> digit;
            if(digit == 1)
            {
                count++;
            }
            else if(digit!=0)
            {
                return;
            }
        }
        if(count>=2)
        {
            wincount++;
        }
    }
    cout << wincount << "\n";
}
int main()
{
    int no_of_pr;
    cin >> no_of_pr;
    printabcd(no_of_pr);

    // This is the End of the program.
    // And this "End" is the signature step of me(Harish) in all the programs.
    // cout << "\n" << "End!" << "\n";
    return 0;
}