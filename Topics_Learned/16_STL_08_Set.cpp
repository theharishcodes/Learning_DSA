#include <iostream>
#include <set>
using namespace std;

void print_int_set(set<int> sett)
{
    cout << "{";
    for(auto it = sett.begin(); it != sett.end(); it++)
    {
        cout << *(it);
        if(next(it) != sett.end())
        {
            cout << ", ";
        }
    }
    cout <<"}\n";
}
int main()
{
    // Set -- sorted -- unique
    // The element are always sorted and no duplicate element can be added.
    // The data is not stored linearly, a tree is maintained and we will learn about it on some day in future.
    set <int> st;
    st.insert(3);
    st.insert(5);
    st.insert(2);
    st.insert(4);
    st.insert(1);
    st.insert(8);
    cout << "Set : ";
    print_int_set(st);
    
    // Find
    auto it = st.find(4); // finds and stores the adderess of 4.
    auto it_end = st.find(9); // When there is no element as input, then .find() returns .end()
    cout << "it : " << *(it) << "\n";
    cout << "it_end : " << *(it_end) << "\n"; // this prints no. of elements in set but the pointer points to st.end().

    // Erase
    st.erase(5);
    cout << "Erased 5 : ";
    print_int_set(st);
    // Erase Multiple
    auto it1 = st.find(2);
    auto it2 = st.find(8);
    st.erase(it1, it2);
    cout << "Erased from 2 to 4 : ";
    print_int_set(st);

    // Count no. of times any element is repeated.
    int count_8 = st.count(8); // it will either be zero or 1, cause set stores unique elements.
    cout << "count of 8 : " << count_8 << "\n";

    auto it_begin = st.begin();
    auto it_lb = st.lower_bound(2);
    auto it_ub = st.upper_bound(1);
    cout << "Lower Bound (2) index = " << distance(st.begin(), it_lb) << "\n"; // distance calculates the number of elements between two iterators.
    cout << "Upper Bound (1) index = " << distance(st.begin(), it_ub) << "\n"; // distance calculates the number of elements between two iterators.
    /* Time Complexity
        Everything in set is of log(n) timecomplexity.
    */


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;

}