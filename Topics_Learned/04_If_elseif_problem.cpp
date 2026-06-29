#include <iostream>
using namespace std;
int main()
{
    // To Find the grade of a student based on marks.
    int marks;
    char grade = 'G'; // G means grade is not assigned yet.

    cout << "Enter your marks : ";
    cin >> marks;
    // && : AND : Both conditions should be true.
    // || : OR : At least one condition should be true.

    //If elseif ladder is used when we have multiple conditions to check.
    {
        if (marks < 25)
        {
            grade = 'F';
        }
        else if (marks < 45)
        {
            grade = 'E';
        }
        else if (marks < 50)
        {
            grade = 'F';
        }
        else if (marks < 60)
        {
            grade = 'C';
        }
        else if (marks < 80)
        {
            grade = 'B';
        }
        else if (marks < 100)
        {
            grade = 'A';
        }
        else
        {   // If marks are greater than or equal to 100, then it is invalid.
            cout << "You have entered invalid marks."<< "\n"; 
        }
    }

    // If grade is not G, then print the grade.
    if (grade != 'G')
    {
        cout << "Your grade is : " << grade << "\n";
    }

    //This is the end of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}