#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age; // This will take input from the user and store it in the variable age.
    if (age<18)
    {   // If age is less than 18, then the person is not eligible for job.
        cout << "You are not eligible for job." << "\n";
    }
    else if (age <= 57)
    {   
        {   // Nested if statement to check if the person is eligible for retirement or not.
            if (age < 55)
            {   // If age is greater than or equal to 18 but less than 55, then the person is eligible for job.
                cout << "You are eligible for job." << "\n";
            }
            else
            {   // If age is greater than or equal to 55 and less than or equal to 57, then the person is about to retirement.
                cout << "Eligible for Job, but Retirement soon." << "\n";
            }
        }
    }
    else
    {   // If age is greater than 57, then the person is eligible for retirement.
        cout << "Retirement Time!" << "\n";
    }
    
    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}