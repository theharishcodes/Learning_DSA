#include <iostream>
#include <bits/stdc++.h>//This include all the libraries in c++ but it is not recommended to use this header file because it increases the compilation time and also it is not portable.
using namespace std;
int main() {
    cout << "Hello guys, its harish here" << "\n";// This \n can be used as general to save time//
    cout << "Hello guys, its harish here" << std ::endl;
    cout << "Hello guys, its harish here" << "\n" << "This is new thing." << std ::endl;
    
    int x, y;
    cin >> x >> y;
    cout << "Value of x : " << x << " and y : " << y << "\n";
    
    cout << "\n" << "End!" << "\n";
    return 0;
}