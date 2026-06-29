#include <iostream>
#include <deque>
#include <bits/stdc++.h>
using namespace std;

void print_int_deque(deque<int> deq)
{
    cout << "{";
    for (auto it = deq.begin(); it != deq.end() ; it++)
    {
        if (it != deq.end() - 1)
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
    // Deque
    // Same as Vectors
    deque <int> dq = {1, 2};
    cout << "initial : "; print_int_deque(dq); cout << "\n";
    dq.push_back(7);
    cout << "push back : "; print_int_deque(dq); cout << "\n";
    dq.emplace_back(50);
    cout << "emplace back : "; print_int_deque(dq); cout << "\n";
    dq.push_front(60);
    cout << "push front : "; print_int_deque(dq); cout << "\n";
    dq.emplace_front(45);
    cout << "emplace front : "; print_int_deque(dq); cout << "\n";

    dq.pop_back();
    cout << "pop back : "; print_int_deque(dq); cout << "\n";
    dq.pop_front();
    cout << "pop front : "; print_int_deque(dq); cout << "\n";
    
    
    cout << "back : "; cout << dq.back() << "\n";
    cout << "front : "; cout << dq.front() ; cout << "\n";


    // Rest functions are same as Vector;
    // begin, end, rbegin, rend, clear, insert, size, swap.


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;

}