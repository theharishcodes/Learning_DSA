#include <iostream>
#include <map>
using namespace std;
void print_map(map<int, string> mpp)
{
    cout << "{\n";
    for(auto it = mpp.begin(); it != mpp.end(); it++)
    {
        cout << it->first << " " << it->second << "\n";
    }
    cout << "}\n";
}
int main()
{
    // Map
    // collection of (Key, Value) pairs.
    // Keys are unique and sorted. Values may not.

    map<int, string> mp;
    mp[1] = "Raj";
    mp.emplace(2, "Rohan");
    print_map(mp);
    
    // also you can access value like
    cout << mp[1] << "\n";
    cout << mp[5]; // as the key does not exist, it prints nothing

    // Find - finds the iterator for the key.
    auto it = mp.find(2);
    cout << it->second;

    // all other functions are same.
    // Timecomplexity - Log(n)
    
    
    // MultiMap -- Duplicate keys are allowed - log(N)

    // UnorderedMap -- Unique keys but not sorted - O[1]

    // This is the End of the program.
    // And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}