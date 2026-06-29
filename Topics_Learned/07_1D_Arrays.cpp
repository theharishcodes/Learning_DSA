#include <iostream>
using namespace std;
int main()
{
    //If I want to store 5 numbers, I can declare 5 variables like this.
    //int a, b, c, d, e;
    //cin >> a >> b >> c >> d >> e; // This will take input from the user and store it in the variables a, b, c, d, and e respectively.
    //cout << "The numbers you entered are : " << a << " " << b << " " << c << " " << d << " " << e << "\n";


    //A better way to store multiple values of the same type is to use an array.
    int arr[5];
    cout << "Enter 5 numbers : ";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];// This will take input from the user and store it in the array arr at index 0, 1, 2, 3, and 4 respectively.
    cout << "The numbers in the array are : " << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << "\n";
    // We can also access, modify the elements and perform operations on the array using their index.
    arr[2] = 10;
    cout << "arr[2] = " << arr[2] << "\n"; 
    arr[4] += 5;
    cout << "After adding 5 to arr[4], arr[4] = " << arr[4] << "\n";

    // We don't know the exact memory of arr[0]. But we know that other array members will be store in the consecutive memory locations.

    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}