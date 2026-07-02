#include <iostream>
using namespace std;
int main()
{
    int input;
    cin >> input;
    int arr[input];
    for (int i = 0; i<input-1; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (int index = 0; index < input-1; index++)
    {
        for(int num = 1; num <= input; num++)
        {
            if(arr[index] != num)
            {
                ans = num;
            }
        }
    }
    cout << ans;
    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    // cout << "\n" << "End!" << "\n";
    return 0;
}