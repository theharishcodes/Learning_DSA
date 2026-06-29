#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print_array(int arra[],int n)
{
    for(int i = 0; i<n; i++)
    {
        cout << arra[i];
        if(i != n-1)
        {
            cout << ", ";
        }
        else
        {
            cout << "\n";
        }
    }
}

void print_int_vector(vector<int> vect)
{
    for(auto it = vect.begin(); it != vect.end(); it++)
    {
        cout << *(it);
        if(it != vect.end() - 1)
        {
            cout << ", ";
        }
        else
        {
            cout << "\n";
        }
    }
}

void print_pair_vector(vector<pair<int,int>> vecp)
{
    for(auto it = vecp.begin(); it != vecp.end(); it++)
    {
        cout << "{" << it->first << ", " << it->second << "}";
        if(it != vecp.end() - 1)
        {
            cout << ", ";
        }
        else
        {
            cout << "\n";
        }
    }
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    // Sort ascending according to second element.
    // if second members are equal, sort descending to first element.
    if(p1.second < p2.second)
    {
        return true;
    }
    else if(p1.second > p2.second)
    {
        return false;
    }
    else
    {
        if(p1.first >= p2.second)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

void Algorithm_1_Sort(int a[], int n, vector<int>& v, int c, int d)
{
    
    int vsize = v.size();

    // sort(first iterator, last iterator)
    // list iterator - iterator after the last element.

    // Sort Ascending
    sort(a + c, a + d); // (start, end)
    sort(v.begin() + c, v.begin() + d);
    cout << "\nSorted Ascending\nArray : ";
    print_array(a, n);
    cout << "Vector : ";
    print_int_vector(v);

    // Sort Decending
    sort(a + c, a + d, greater<int>()); // (start, end)
    sort(v.begin() + c, v.begin() + d, greater<int>());
    cout << "\nSorted Decending\nArray : ";
    print_array(a, n);
    cout << "Vector : ";
    print_int_vector(v);

}
int main()
{
    int n = 5;
    int arr[n] = {6,9,3,2,5};
    vector<int> vec = {6,4,8,3,5};
    Algorithm_1_Sort(arr, n, vec, 0, 5);
    
    // My own way.
    // Sort ascending according to second element.
    // if second members are equal, sort descending to first element.
    vector<pair<int,int>> vecpair = {{2,4},{7,8},{4,6},{1,5},{9,6}};
    sort(vecpair.begin(), vecpair.end(), comp);
    cout << "Vector Pair : ";
    print_pair_vector(vecpair);

    // Built in Popcount
    int num = 6;
    int cnt = __builtin_popcount(num);
    cout << "Built in Popcount (6) : " << cnt<< "\n";
    // In binary, 6 is written as 110;
    // built in popcount counts no. of 1.

    // Built in Popcount for long long.
    long long num2 = 255165444846;
    int cnt2 = __builtin_popcountll(num2);
    cout << "Built in Popcount for long long (6) : " << cnt2;

    // Permutations
    string stnum = "345";
    // sort(stnum.begin(), stnum.end()); // Sort to get all the combinations.
    int permcnt=0;
    do{
        cout << stnum << "\n";
        permcnt++;
    }
    while(next_permutation(stnum.begin(), stnum.end()));
    /*
        next_permutation() starts from the current value and writes dictionary wise permutations.
        To get all the permutations, sort and bring it to first value according to dictionary.
        At the end, when permutations are over, next_permutation returns null.
        And hence, the while loops ends.
    */

    int maxinarr = *max_element(arr, arr+5);
    int mininarr = *min_element(arr, arr+5);
    // These returns the iterator of max and min elements among [arr[0], arr[5]);
    cout << "Max in arr : " << maxinarr << "\nMin in arr : " << mininarr << "\n";



    // This is the End of the program.
    // And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}