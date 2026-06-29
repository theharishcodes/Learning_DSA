#include <iostream>
using namespace std;

int main()
{
    // Space Complexity
    /*
        Space Complexity = Auxiliary Space + Space taken by the input.
        Auxiliary Space = Space taken to solve the problem, which is the space taken by the variables, data structures, function calls, etc. used in the program.
        Space taken by the input = Space taken to store the input, which is the space taken by the variables, data structures, etc. used to store the input.
        We will be using O(f(n)) notation to represent the space complexity.
        For example,
        We are taking 2 inputs - a and b.
        And we are using 1 variable - c to store the sum of a and b.
        Thus, Input Space = 2
        and Auxiliary Space = 1
        Therefore, Space Complexity = O(2 + 1) = O(3) = O(1) as we remove the constants.

        For int arr[n], the space taken by the input is O(n) as we are taking n inputs in the array.
        And the auxiliary space is O(1) as we are using only a constant space to solve the problem. 
        Therefore, Space Complexity = O(n + 1) = O(n)
    */
    
    /*
        - Never do anything to the input. Because the input is given to us, and we should not modify it. We should only use it to solve the problem.
        It is okay to use a bit more space to solve the problem, but we should not manupulate the input.
        - Most of the servers take 1 second to execute around 10^8 operations.
        For 2s, it will be 2 × 10^8 operations.
        So, if the time limit is given as 2s, then we can say that the time complexity should be O(2 × 10^8).
    */
    
    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}