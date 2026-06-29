#include <bits/stdc++.h> // All libraries
using namespace std; // Used to save from repeating 'std' again and again.


int main()
{
    // Algorithms
    //  1. Containers
    //  2. Functions
    //  3. Iterator

    // We would proceed with Containers.
    // But before, we need to learn about pairs.
    // What is Pair? If we want to store more than one data in one variable, we can store it as Pair.
    // Syntax
    // pair <data_type_1, data_type_2> var_name = {data_1, data_2};
    pair <int, int> p = { 1, 4};
    cout << "{" << p.first << ", " << p.second << "}\n";

    pair <int, pair <int, int>> p2 = {1, {2,3}};
    cout << "{" << p2.first << ", {" << p2.second.first << ", " << p2.second.second << "}}\n"; // Nested Pair.

    pair <int, int> arr1[4] = {{1,3}, {2,4}, {3,5} ,{6,7}};
    cout << "The second member of third member of the array is : arr1[2].second = " << arr1[2].second << "\n";
    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}