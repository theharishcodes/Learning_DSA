#include <iostream>
#include <deque>
#include <bits/stdc++.h>
using namespace std;

void print_int_stack(stack<int> stk)
{
    cout << "{";
    while(!stk.empty())
    {
        cout << stk.top();
        if (stk.size() != 1)
        {
            cout << ", ";
        }
        stk.pop();
    }
    cout <<"}";
}

int main()
{
    // Stack
    // LIFO : Last In First Out
    // In stack, the data is arrnged as we place block in a container, first at bottom, second above it, and last at the top.
    // We can not do index based locating.
    stack <int> st;
    cout << "initial : "; print_int_stack(st); cout << "\n";
    st.push(7); // {7}, insert data at top, i.e, in the front.
    cout << "push: "; print_int_stack(st); cout << "\n";
    st.emplace(50); // {50, 7}, insert data at top, i.e, in the front.
    cout << "Emplace : "; print_int_stack(st); cout << "\n";
    
    cout << "Top : " << st.top() << '\n'; // access the top element, i.e, the first element.

    st.pop(); // {7}, Erases the top element, i.e, the first element.
    cout << "Pop : "; print_int_stack(st); cout << "\n";
    
    cout << "Size : " << st.size() << "\n";
    

    // There are only three functions in stack, which are push/emplace, pop and top.

    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;

}