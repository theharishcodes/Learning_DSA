#include <iostream>
#include <set>
using namespace std;
void print_int_multiset(multiset<int> ms)
{
    cout << "{";
    for(auto it = ms.begin(); it != ms.end(); it++)
    {
        cout << *(it);
        if(next(it) != ms.end())
        {
            cout << ", ";
        }
    }
    cout << "}\n";
}
int main()
{
    
    // Multiset
    // Where set stores unique and sorted, multiset can store multiple occurences but in sorted order.

    multiset<int> mst;
    mst.insert(1);
    mst.insert(1);
    mst.insert(1);
    mst.insert(1);
    mst.insert(3);
    mst.insert(2);
    mst.insert(2);
    mst.insert(2);
    mst.insert(4);
    mst.insert(4);
    mst.insert(5);
    cout << "Multiset : ";
    print_int_multiset(mst);

    // Count
    int cnt = mst.count(2);
    cout << "Count of 2 in multiset : " << cnt << "\n";

    // Erase
    mst.erase(4);
    cout << "Erased 4 : ";
    print_int_multiset(mst);
    
    cout << "find(1) : " << *(mst.find(1)) << "\n"; // find(input) returns the iterator pointing to first occurence of the input.

    mst.erase(mst.find(2)); // we pass iterator to erase only one occurence of an element.
    cout << "Erased one occurence of 2 : ";
    print_int_multiset(mst);
    mst.erase(mst.find(1), next(mst.find(1),2));
    cout << "Erased 2 occurence of 1  : ";
    print_int_multiset(mst);


    // This is the End of the program.
    // And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}