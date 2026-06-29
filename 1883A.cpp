#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test;
    cin >> test;
    cin.ignore();
    string data = "1234567890";

    string input;
    for(int t = 0; t<test; t++)
    {
        getline(cin, input);
        int count = 0, j = 0;
        
        for(int i = 0; i<input.size(); i++)
        {
            while((data[j] - '0')!=(input[i] - '0'))
            {
                if((data[j] - '0') > (input[i] - '0'))
                {
                    if(input[i]-'0' == 0)
                    {
                        j++;
                    }
                    else
                    {
                        j--;
                    }
                    // cout << "<";
                }
                else
                {
                    if(data[j]-'0' == 0)
                    {
                        j--;
                    }
                    else
                    {
                        j++;
                    }
                    // cout << ":";
                }
                count++;
            }
            if((data[j] - '0')==(input[i] - '0'))
            {
                // cout << ". ";
                count++;
            }
        }
        cout << count << "\n";
    }
    
    // This is the End of the program.
    // And this "End" is the signature step of me(Harish) in all the programs.
    // cout << "\n" << "End!" << "\n";
    return 0;
}