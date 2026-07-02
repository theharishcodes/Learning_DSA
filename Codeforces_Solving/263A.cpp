// Beautiful Matrix
#include <iostream>
#include <cmath>
using namespace std;
void func_name()
{

}
int main()
{
    int n = 0;
    int row, col;
    int count = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> n;
            /*
            if(count>0 || (n != 0 && n !=1))
            {
                cout << "Error";
                return 0;
            }
            */
            if(n == 1)
            {
                row = i;
                col = j;
                count++;
            }
        }
    }
    
    int output = abs(2 - row) + abs(2 - col);
    cout << output;
    // This is the End of the program.
    // And this "End" is the signature step of me(Harish) in all the programs.
    // cout << "\n" << "End!" << "\n";
    return 0;
}