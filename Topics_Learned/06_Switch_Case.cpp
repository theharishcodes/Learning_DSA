#include <iostream>
using namespace std;

int main()
{
    // To Find the day of the week based on the day number.
    int day;
    cout << "Enter the day number (1-7) : ";
    cin >> day;// This will take input from the user and store it in the variable day.

    // Switch case statement is used when we have multiple conditions to check based on the value of a single variable.
    switch (day)
    {
        case 1 : // If day is 1, then it is Monday.
            cout << "Day : Monday\n";
            break;
        case 2 : // If day is 2, then it is Tuesday.
            cout << "Day : Tuesday\n";
            break;
        case 3 : // If day is 3, then it is Wednesday.
            cout << "Day : Wednesday\n";
            break;
        case 4 : // If day is 4, then it is Thursday.
            cout << "Day : Thursday\n";
            break;
        case 5 : // If day is 5, then it is Friday.
            cout << "Day : Friday\n";
            break;
        case 6 : // If day is 6, then it is Saturday.
            cout << "Day : Saturday\n";
            break;
        case 7 : // If day is 7, then it is Sunday.
            cout << "Day : Sunday\n";
            break;
        default : // If day is not between 1 and 7, then it is an invalid day number. Default case is executed when none of the above cases are matched.
            cout << "Invalid day number\n";
            //break; // This break statement is not necessary as it is the last case in the switch statement, but it is good practice to include it to avoid any accidental fall through in the future if more cases are added.
        //cout << "End inside switch case\n"; // This will be executed when there is no break statement after default case.
    }
    
    
    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}