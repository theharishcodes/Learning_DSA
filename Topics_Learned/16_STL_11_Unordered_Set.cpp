#include <iostream>
#include <unordered_set>
using namespace std;
void print_int_unordered_set(unordered_set<int> uost)
{
    cout << "{";
    for(auto it = uost.begin(); it != uost.end(); it++)
    {
        cout << *(it);
        if(next(it) != uost.end())
        {
            cout << ", ";
        }
    }
    cout << "}\n";
}
int main()
{
    // Unordered Set
    // The elements are not stored in sorted order, but every element is unique.
    // The elements are stored randomly.
    unordered_set<int> ust;
    ust.insert(2);
    ust.insert(2);
    ust.insert(3);
    ust.insert(6);
    ust.insert(4);
    ust.insert(1);
    print_int_unordered_set(ust);

    // Lowerbound and Upperbound funtions do not work.
    // All other functions are same as set.

    // O[1] is the timecomplexity for most of the time.
    // Once in a blue moon, timecomplexity goes to O[N].
    
    // This is the End of the program.
    // And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}