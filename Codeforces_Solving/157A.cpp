// Game Outcome
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    vector<int> sumrow(n,0);
    vector<int> sumcol(n,0);
    // Taking Input;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    // Storing Sum
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            // Sum of Column Elements
            sumcol[i] += arr[j][i];

            // Sum of Row Elements
            sumrow[i] += arr[i][j];
        }
    }
    
    sort(sumrow.begin(), sumrow.end());
    sort(sumcol.begin(), sumcol.end());
    // Count Winners
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        auto it = upper_bound(sumcol.begin(), sumcol.end(), sumrow[i]);
        count += n - (it - sumcol.begin());
        

    }

    // Print Output
    cout << count << "\n";


    // This is the End of the program.
    // And this "End" is the signature step of me(Harish) in all the programs.
    // cout << "\n" << "End!" << "\n";
    return 0;
}