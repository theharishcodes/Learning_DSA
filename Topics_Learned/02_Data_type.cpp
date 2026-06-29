#include <iostream>
#include <string>
using namespace std;
int main() {
    // int : integers from -2,147,483,648 to 2,147,483,647.
    int x =10; //around from -10^9 to 10^9.
    long y =15;// long : integers from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807. Around from -10^12 to 10^12.
    long long z =20;// double : 8 bytes, 15 decimal places. Around from -10^18 to 10^18.
    // float : 4 bytes, 6 decimal places.
    // double : 8 bytes, 15 decimal places.

    // char : 1 byte, stores a single character.
    char c = 'A';

    // string : a sequence of characters.
    string s = "Hello World";
    cout << s << "\n";

    // Or 
    
    string s1;
    cin >> s1;// This will take input until the first whitespace character is encountered.
    cout << "s1 : " << s1 << "\n";
    // If we want to take input until the end of the line, we can use getline() function.

    cin.ignore();// This will ignore the newline character left in the input buffer by the previous cin statement.
    
    string str;
    getline(cin, str);
    cout << "str : " <<str << "\n";
}