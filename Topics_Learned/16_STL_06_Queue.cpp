#include <iostream>
#include <queue>
using namespace std;

void print_int_queue(queue<int> que)
{
    cout << "{";
    while(!que.empty())
    {
        cout << que.front();
        if (que.size() != 1)
        {
            cout << ", ";
        }
        que.pop();
    }
    cout <<"}";
}

int main()
{
    // Queue
    // FIFO : First In First Out
    // In Queue, the data is arrnged as people standing in a queue. First is at front, second is behind it, and last is at back. The one which is exits first is the front one.
    // We can not do index based locating.
    queue <int> qu;
    cout << "initial : "; print_int_queue(qu); cout << "\n";
    qu.push(7); // {7}, insert data at top, i.e, in the back.
    cout << "push: "; print_int_queue(qu); cout << "\n";
    qu.emplace(50); // {7, 50}, insert data at top, i.e, in the back.
    cout << "Emplace : "; print_int_queue(qu); cout << "\n";
    
    cout << "Back : " << qu.back() << '\n'; // access the last element. // 50
    cout << "Front : " << qu.front() << '\n'; // access the the first element. // 7

    qu.pop(); // {50}, Erases the front element.
    cout << "Pop : "; print_int_queue(qu); cout << "\n";
    
    cout << "Size : " << qu.size() << "\n";
    


    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;

}