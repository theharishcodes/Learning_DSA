#include <iostream>
using namespace std;

int main()
{
    //  Time Complexity
    /*
        Time Complexity != Time Taken.
        It is the rate at which the time increases with respect to the input size.
        It is denoted by O(f(n)), called as Big O notation, where f(n) is the function of input size n.

        How to calculate Time Complexity in terms of O(f(n))?
        - Determine the worst case scenario.
          Which means maximum number of operations will be performed for the given input size n and the case where it takes the maximum time.
        - Count the number of basic operations in the code.
        - Express the count as a function of input size n.
        - Remove the constants and lower order terms.
        For example, if the count is 3n^2 + 5n + 2, then the time complexity is O(n^2) as we remove the constants and lower order terms.

        Types of Notations for Time Complexity:
        1. Big O Notation - It is used to describe the upper bound of the time complexity. It gives the worst case scenario of the time complexity.
        2. Omega Notation - It is used to describe the lower bound of the time complexity. It gives the best case scenario of the time complexity.
        3. Theta Notation - It is used to describe the tight bound of the time complexity. It gives the average case scenario of the time complexity.
    */
    
    // Question 1 :
    int n = 5;  
    for (int i=0; i < n; i++)
    {
        for (int j=0; j < n; j++)
        {
            cout << i << j << endl; // Body of the Loop. Constant Time Operation. O(1)
        }
    }
    cout << "Time Complexity = O(n^2)" << endl;
    /*
    
        Outer loop runs n times.
        For each iteration of outer loop,
        the inner loop also runs n times.

        Therefore total iterations:
        n × n = n²

        Hence Time Complexity = O(n²)
    */

    // Question 2 :
    n = 6;
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l <= k; l++)
        {
            cout << k << l << endl; // Body of the Loop. Constant Time Operation. O(1)
        }
    }
    cout << "Time Complexity = O(n^2)" << endl;
    /*
        Outer loop runs n times.
        For each iteration of outer loop,
        the inner loop runs k+1 times, where k is the current iteration of outer loop.

        For k = 0, inner loop runs 1 time.
        For k = 1, inner loop runs 2 times.
        For k = 2, inner loop runs 3 times.
        and so on...

        Therefore total iterations:
        1 + 2 + 3 + ... + n = n(n+1)/2

        Hence Exact Time Complexity = O(n²/2 + n/2)
        But as we remove the constants and lower order terms, we get O(n²).
        Hence Time Complexity = O(n²)
     */


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}