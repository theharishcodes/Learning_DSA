#include <iostream>
#include <list>
#include <iterator>
using namespace std;
void print_int_list (const list<int>& ls)
{
    if (ls.empty())
    {
        cout << "{}";
        return;
    }

    cout << "{";    
    for(auto it = ls.begin(); it != ls.end(); it++)
    {
        if (next(it) != ls.end()) // ls.end -1 or ls.end + 1 are not valid operations in list as list are bidirectional. 
        // next(it) means the one element ahead of present element
        // prev(it) means the one element previous of present element
        {
            cout << *it << ", ";
        }
        else
        {
            cout << *it;
        }
    }
    cout << "}";
}
int main()
{
    // Lists
    // same as vector.
    // list<data_type> var_name;

    list<int> lst;

    lst.push_back(2); // {2}
    cout << "lst = "; print_int_list(lst); cout << "\n";
    lst.emplace_back(4); // {2, 4}
    cout << "lst = "; print_int_list(lst); cout << "\n";

    lst.push_front(7); // {7, 2, 4} This is new in list than vector. This is cheap in terms of TC than v.insert(v.begin, data).
    cout << "lst = "; print_int_list(lst); cout << "\n";
    lst.emplace_front(8); // {8, 7, 2, 4}
    cout << "lst = "; print_int_list(lst); cout << "\n";

    
    // rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap.

    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}