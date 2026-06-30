#include <iostream>
using namespace std;
void recursion_func(int n)
{
    // Code to execute.
    cout << n << "\n"; // Going Deeper

    if(n>0) // Base Condition -- This condition is provided to stop recursion at some point.
    {
        // Recursive call
        recursion_func(n-1);
    }
    cout << n << "\n"; // Coming Back

    // If the Base Condition is not provided, it will run infinitely, but also stop at some unknown point where memory overflows.
    // This overflow is called Stack Overflow.
    /*
    Each recursive call is stored on the Call Stack.
       |      |
       | f(5) |
       | f(4) |
       | f(3) |
       | f(2) |
       | f(1) |
       | f(0) |
       --------
    After reaching the base condition, the stack unwinds
    from f(0) back to f(5).
    */

}
int main()
{
    // Recursion
    // When a function call itself until a specific condition is met.

    // Calling the Function.
    recursion_func(5);

    // Recursion Tree (for recursion_func)
    // main() -> f(5) -> f(4) -> f(3) -> f(2) -> f(1) -> f(0)
    //   <-----|  <-----| <-----| <-----| <-----| <-----|   
    
    // This is the End of the program.
    // And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}