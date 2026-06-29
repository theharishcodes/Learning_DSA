#include <iostream>
#include <queue>
using namespace std;

void print_int_prior_queue(priority_queue<int> pq)
{
    cout << "{";
    while(!pq.empty())
    {
        cout << pq.top();
        if (pq.size() != 1)
        {
            cout << ", ";
        }
        pq.pop();
    }
    cout <<"}\n";
}

void print_int_min_prior_queue(priority_queue<int, vector<int>, greater<int>> pq)
{
    cout << "{";
    while(!pq.empty())
    {
        cout << pq.top();
        if (pq.size() != 1)
        {
            cout << ", ";
        }
        pq.pop();
    }
    cout <<"}\n";
}
int main()
{
    // Priority Queue
    // The element with largest value stays at the top.
    // In Priority Queue, the data is arranged as people standing in a queue, but height-wise. First is at top and will be the largest, second will be smaller, third will be more smaller, and this goes on.
    // The data is not stored linearly, a tree is maintained and we will learn about it on some day in future.
    priority_queue <int> prqu;
    prqu.push(5); // {5}
    prqu.push(2); // {5, 2}
    prqu.push(8); // {8, 5, 2}
    prqu.push(6); // {8, 6, 5, 2}
    cout << "prqu : ";
    print_int_prior_queue(prqu);

    // Print the top element
    cout << "Top : " << prqu.top() << "\n"; // 9

    // Delete the top element
    prqu.pop(); // {6, 5, 2}
    cout << "After using pop : ";
    print_int_prior_queue(prqu);
    
    // size, swap, empty functions same as others.

    // Minimum Heap - Minimum at the top
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(5); // {5}
    minpq.push(2); // {5, 2}
    minpq.push(8); // {8, 5, 2}
    minpq.push(6); // {8, 6, 5, 2}
    cout << "Minimum Heap(minpq) : ";
    print_int_min_prior_queue(minpq);

    /* Time Complexity
        1. push : log(n)
        2. top : O(1)
        3. pop : log(n)
    */
    

    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;

}