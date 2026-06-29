#include <bits/stdc++.h>
using namespace std;
int main() {
    //To Find if you are eligible to vote or not.
    int age;
    cout << "Enter your age : ";
    cin >> age;
    cout << "\n";
    if (age >0) {
        if (age >=18){
            cout << "You are adult, you can vote." << "\n";
        }
        else {
            cout << "Sorry you cannot vote. Wait for "<<(18 - age) << " years to vote." << "\n";
        }
    }
    else {
        cout << "Enter a value greater than 0" << "\n";
    }

    cout <<"\n" << "End!";
    return 0;
}