#include<iostream>
using namespace std;

// We can create our own datatype by creating class.
// There are 3 Modifiers, Private, Public, and Protected. By default, till not mentioned, the class is private.
class Employee
{
    public : // If this was not mentioned, we could not access these data, as it would be 'private', by default.
        string Name; // These are members.
        string Company;
        int Age;
        
        void setage(int age)
        {
            if (age > 0)
            {
                Age = age;
            }
            else
            {
                cout << "Invalid Age.\n";
            }
        }

        void Introduce_Yourself() // Behaviour of Introducing the employee.
        {
            cout << "My name is " << Name << ".\n";
            cout << "I work in " << Company << ".\n";
            cout << "And I am " << Age << " years old.\n";
        }

        Employee(string name, string company, int age) // Constructor. A default constructor is already created, but for our convinience, we create our own constructor and as soon as we do it, the default constructor gets deleted.
        {
        /*  There are 3 rules for constructor.
                1. Constructor doesn't have a return type.
                2. It has the same name as the class it belongs to.
                3. It must be public in many cases, not all.
        */

            Name = name;
            Company = company;
            setage(age);

        }
};

class Bank_Account
{
    private : // No need to write this, but for readibility, I am writing this.
    int Account_Number;
    string Account_Holder_Name;

    public :
    // Setter - Getter. (Not Get Her :) ) : this will be used to manupulate and access data, from outside the class.
    void set_account_number(int acc_num) // This can be used to store data to Account_Number. The data is first stored to acc_num, and then copied to Account_Number.
    {
        
        Account_Number = acc_num;
    }
    int get_account_number() // This can be used to access data from Account_Number.
    {
        return Account_Number;
    }
    void set_account_holder_name(string acc_name)
    {
        Account_Holder_Name = acc_name;
    }
    string get_account_holder_name()
    {
        return Account_Holder_Name;
    }
    
};

int main()
{
    // Employee employee01; // object 'employee01' of the class 'Employee'. The words used may not be accurate, but for learning you can think it in that way.
    /* employee_01.Name = "Raj"; // Name of employee01 got accessed and stored as Raj. The value of data should be of the data type as of the member.
    employee_01.Company = "Microsoft";
    employee_01.setage(45); */

    Employee employee02{"Purva", "Google", 23}; // data stored in object employee02 using constructor.
    employee02.Introduce_Yourself();

    Bank_Account accountholder01;
    accountholder01.set_account_holder_name("Raj Grover");
    accountholder01.set_account_number(78785);
    cout << "My Name is " << accountholder01.get_account_holder_name() << " and I have account in SBI bank with account number " << accountholder01.get_account_number() << ".\n";

    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}