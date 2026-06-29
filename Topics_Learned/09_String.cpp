#include <iostream>
using namespace std;

int main()
{
    string str = "Hey Harish!";
    int len = str.size(); // This will return the length of the string str, which is 12.
    cout << "str[2] : " << str[2] << "\n"; // This will print the character at index 2 of the string str, which is 'y'.
    cout << "str[3] : " << str[3] << "\n"; // This will print the character at index 3 of the string str, which is ' '
    cout << "Length of the string str : " << len << "\n"; // This will print the length of the string str, which is 11.
    //If we want to print the last character of the string, we can use the index len-1, which is 11th index in this case.
    cout << "Last character of the string str : " << str[len-1] << "\n"; // This will print the last character of the string str, which is '!'.
    str[len - 1] = '.'; // This will change the last character of the string str to '.', so now str will be "Hey Harish.".
    cout << "New String : " << str << "\n"; // This will print the new string str, which is "Hey Harish.".

    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}