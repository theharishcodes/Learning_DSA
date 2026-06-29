#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

void print_int_vector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if(i<v.size() - 1)
        {
            cout << v[i] << ", ";
        }
        else
        {
            cout << v[i];
        }
        
    }
}

void print_int_vector_iterator(const vector <int>& v)
{   
    if(v.empty())
    {
        return;
    }
    // using iterators.
    // v.begin stores the address of 0th index of 'v' to 'it'
    // v.end stores the address of the v.size()th index to 'it', which index actually don't exist, but its address does. To get address of the (vsize()th - 1) index, use v.end() - 1.
    
    for (vector<int> :: const_iterator it = v.begin(); it != v.end(); it++)
    {// We can use 'auto' as data type, instead of manually assigning data type, depending on the data store, it assigns the data type.
     // So, we can use 'auto' instead of 'vector<int> :: iterator'.
        
        if(it != v.end() - 1)
        {
            cout << *it << ", ";
        }
        else
        {
            cout << *it;
        }
    }
    // There are 2 more iterators, which we don't use generally.
    // Let's say for example, v = {10, 20, 30, 40}
    // v.rend will point to address at -1st index.
    // v.rbegin will point to the (v.size() - 1)th index, in our case to v[3], i.e address of 40.
    // This both work in reverse, and so if we do it++, in case of v.rbegin, then 'it' points to address of 30.

    // v.at(i) : this access the member at ith index in vector v.
    // v.back() : this acces the member at (vsize - 1)th index in vector v.


}

int main()
{
    // Vectors
    // vector<data_type> var_name(number_of_members, data_to_be_repeated_nom_times);
    // vector<data_type> var_name{data_1, data_2, data_3,.....};

    vector <int> v1(5, 200);
    cout << "v1 = {";
    print_int_vector(v1);
    cout << "}\n";

    vector <int> v2{5, 200, 23, 44, 55};
    cout << "v2 = {";
    print_int_vector(v2);
    cout << "}\n";
    
    v1.emplace_back(100); // creates one more space and add 100 as data.
    v2.push_back(73); // creates one more space and add 73 as data.
    
    cout << "v1 = {";
    print_int_vector_iterator(v1); // {200, 200, 200, 200, 200, 100}
    cout << "}\n";

    cout << "v2 = {";
    print_int_vector_iterator(v2); // {5, 200, 23, 44, 55, 73}
    cout << "}\n";

    vector <int> v3(5); //We can also just create vector with defined memory.
    vector <int> v4(v2); // This way, we can create a copy of v2 with name v4.
    vector <pair<int, int>> vecpair{{1, 2}, {4,3}, {5,8}}; // We can also add pair as a data type.

    // Delete/Erase
    v2.erase(v2.begin() + 2); // The 2nd index member will be deleted. 
    cout << "\nDelete/Erase\nv2 = {";
    print_int_vector_iterator(v2); // {5, 200, 44, 55, 73}
    cout << "}\n";

    v1.erase(v1.begin() + 1, v1.begin() + 4); // The elements from 1st index to 4th index are deleted. In syntax, it is as v.erase(start, end), where end is the address of 1 element after the element we want to delete.
    cout << "v1 = {";
    print_int_vector_iterator(v1); // {200, 200, 100}
    cout << "}\n\n";

    // Insert
    v2.insert(v2.begin() + 3, 46); // This inserts 46 at 4th index.
    cout << "Insert\nv2 = {";
    print_int_vector_iterator(v2); // {5, 200, 44, 46, 55, 73}
    cout << "}\n";

    v2.insert(v2.begin() + 1, 2, 50); // This inserts 2 times 50 at 1st index.
    cout << "v2 = {";
    print_int_vector_iterator(v2); // {5, 50, 50, 200, 44, 46, 55, 73}
    cout << "}\n";

    v2.insert(v2.begin() + 2, v1.begin(), v1.begin() + 2); // This will insert the elements from 1st index to 2nd index of v1.
    cout << "v2 = {";
    print_int_vector_iterator(v2); // {5, 50, 200, 200, 50, 200, 44, 46, 55, 73}
    cout << "}\n";

    // Pop Back - Omits the last element
    v3 = {10,20,45,48,47};
    v3.pop_back();
    cout << "\nPop Back\nv3 = {";
    print_int_vector_iterator(v3); // {5, 50, 200, 200, 50, 200, 44, 46, 55, 73}
    cout << "}\n";

    // Swap
    v3.swap(v4);
    cout << "\nSwap\nv3 = {";
    print_int_vector_iterator(v3); // {5, 50, 200, 200, 50, 200, 44, 46, 55, 73}
    cout << "}\n";
    cout << "v4 = {";
    print_int_vector_iterator(v4); // {5, 50, 200, 200, 50, 200, 44, 46, 55, 73}
    cout << "}\n";

    // Clear - Empty the vector
    v4.clear();
    cout << "\nClear\nv4 = {";
    print_int_vector_iterator(v4); // {5, 50, 200, 200, 50, 200, 44, 46, 55, 73}
    cout << "}\n";
    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}
