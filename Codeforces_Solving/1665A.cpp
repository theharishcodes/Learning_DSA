#include <iostream>
using namespace std;

void printabcd(int t)
{
    for(int i = 0; i < t; i++)
    {
        // Input
        int input;
        cin >> input;
        
        // Logic
        int a = 1, b = input - 3, c = 1, d = 1;

        // Output
        cout << a << " " << b << " " << c << " " << d << "\n";
    }
}
int main()
{
    int test;
    cin >> test;
    printabcd(test);

    // This is the End of the program.
    // And this "End" is the signature step of me(Harish) in all the programs.
    // cout << "\n" << "End!" << "\n";
    return 0;
}