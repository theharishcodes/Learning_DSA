#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[5] = {2, 4, 5, 8, 9};

    // Binary Search
    bool res1 = binary_search(a, a+5, 3);
    cout << "res1 : " << res1 << "\n";

    bool res2 = binary_search(a, a+5, 5);
    cout << "res2 : " << res2 << "\n";

    // Lower Bound
    // lower_bound() returns pointer.
    // If the input is present in array, lower_bound() returns the iterator pointing to the input.
    // If input is not present in array, lower_bound() returns the iterator pointing to the integer that is just greater than the input.
    int* ind_ptr = lower_bound(a, a+5, 4);
    cout << "value at index using pointer: " << *ind_ptr << "\n";

    int ind = lower_bound(a, a+5, 7) - a; // Doing '-a' returns the index of the iterator.
    cout << "index : " << ind << "\n";

    ind = lower_bound(a, a+5, 10) - a; // if the input is greater than whole array, it returns iterator pointing to the address after the array.
    cout << "index : " << ind << "\n";

    // For Vector, syntax is
    // int ind = lower_bound(a.begin(), a.end(), input) - a.begin()

    // Upper Bound
    // if the input is present, it returns the iterator pointing to just greater than input.
    // In other cases, it is same as lower_bound().
    ind_ptr = upper_bound(a, a+5, 4);
    cout << "value at index using pointer: " << *ind_ptr << "\n";

    ind = upper_bound(a, a+5, 7) - a; // Doing '-a' returns the index of the iterator.
    cout << "index : " << ind << "\n";

    ind = upper_bound(a, a+5, 10) - a; // if the input is greater than whole array, it returns iterator pointing to the address after the array.
    cout << "index : " << ind << "\n";

    // For Vector, syntax is
    // int ind = lower_bound(a.begin(), a.end(), input) - a.begin()

    return 0;
}