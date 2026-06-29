#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

void print_int_vector(vector<int> vec)
{
    cout << "{";
    for(auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it);
        if(it!=(vec.end() - 1))
        {
            cout << ", ";
        }
    }
    cout << "}\n";
}

void print_count_all_digits(int t)
{
    for (int i = 1; i <= t; i++)
    {
        // Take input
        int input;
        cin.ignore();
        cout << "Test Case " << i << " :\n";
        cout << "Input : ";
        cin >> input;

        // Logic to find output
        int digits = (int)(log10(input) + 1);

        // Print output
        cout << "Output : " << digits << "\n";
        cout << "Explanaion : The number " << input << " has " << digits << " digits.\n\n"; // This is used to move to the next line after printing each test case.
    }
}

void print_reverse_number(int t)
{
    for (int i = 1; i <= t; i++)
    {
        // string input;
        int input;
        cin.ignore();
        cout << "Test Case " << i << " :\n";
        cout << "Input : ";
        cin >> input;
        /*
        int limit;
        if(input.size()%2 == 0)
        {
            limit = input.size()/2;
        }
        else
        {
            limit = (input.size()/2)+1;
        }
        for(int i = 0; i < limit; i++)
        {
            char temp = input[i];
            input[i] = input[input.size() - 1 - i];
            input[input.size() - 1 - i] = temp;
        }
        */

        int revno = 0;
        while(input > 0)
        {
            int lastdigit = input%10;
            revno = (revno*10) + lastdigit;
            input = input/10;
        }
        cout << "Output : " << revno << "\n";
        //cout << "Explanaion : The number " << input << " has " << digits << " digits.\n\n"; // This is used to move to the next line after printing each test case.
    }
}

void print_ispalindrome(int t)
{
    for (int i = 1; i <= t; i++)
    {
        // Take input
        int input;
        cin.ignore();
        cout << "Test Case " << i << " :\n";
        cout << "Input : ";
        cin >> input;

        // Logic to find output
        int inputcopy = input;
        int revno = 0;
        while(inputcopy > 0)
        {
            int last_digit = inputcopy%10;
            revno = (revno*10) + last_digit;
            inputcopy = inputcopy/10;
        }

        // Print output
        if(input == revno)
        {
            cout << input << " is Palindrome.\n";
        }
        else
        {
            cout << input << " is not a Palindrome.\n";
        }
        cout << "\n";
    }
}

void print_isarmstrong(int t)
{
    for (int i = 1; i <= t; i++)
    {
        // Take input
        int input;
        cin.ignore();
        cout << "Test Case " << i << " :\n";
        cout << "Input : ";
        cin >> input;

        // Logic to find output
        int inputcopy = input;
        int sum = 0;
        while(inputcopy > 0)
        {
            int last_digit = inputcopy%10;
            sum = sum + (last_digit*last_digit*last_digit);
            inputcopy = inputcopy/10;
        }

        // Print output
        if(input == sum)
        {
            cout << input << " is Armstrong Number.\n";
        }
        else
        {
            cout << input << " is not an Armstrong Number.\n";
        }
        cout << "\n";
    }
}

void print_divisors(int t)
{
    for (int i = 1; i <= t; i++)
    {
        // Take input
        int input;
        cin.ignore();
        cout << "Test Case " << i << " :\n";
        cout << "Input : ";
        cin >> input;

        // data structure to store the divisors.
        vector<int> divisorsvec;

        
        // Logic to find output
        for(int i = 1; (i*i)<=input; i++)
        {
            if(input%i == 0)
            {
                divisorsvec.push_back(i);
                if(input/i != i)
                {
                    divisorsvec.push_back(input/i);
                }
            }
        }
        sort(divisorsvec.begin(), divisorsvec.end());

        // Print Output
        cout << "Divisors of " << input << " are : ";
        print_int_vector(divisorsvec);
    }

}

void print_isprime(int t)
{
    for (int i = 1; i <= t; i++)
    {
        // Take input
        int input;
        cin.ignore();
        cout << "Test Case " << i << " :\n";
        cout << "Input : ";
        cin >> input;
        
        // Logic to find output
        int count = 0; // counts the no. of factors of input.
        for(int i = 1; (i*i)<=input; i++)
        {
            if(input%i == 0)
            {
                count++;
                if(input/i != i)
                {
                    count++;
                }
            }
        }
        

        // Print Output
        if(count == 2)
        {
            cout << input << " is Prime Number.\n";
        }
        else
        {
            cout << input << " is not a Prime Number.\n";
        }
        cout << "\n";
    }

}

int gcdfunc(int a, int b)
{
    // Euclid's theorem.
    // gcd(a, b) = gcd(a-b, b)
    
    // Using Recursion.
    /*
    int temp = a; 
    a = max(a,b); 
    b = min(temp, b);
    int output;
    if(a!=b)
    {
        a = a-b;
        output = gcdfunc(a,b);
    }
    else
    {
        output = a;
    }
    return output;
    */

    // Eulid's Algorithm
    while(a>0 && b>0)
    {
        if(a>b)
        {
            a = a%b;
        }
        else
        {
            b = b%a;
        }
    }
    if(a>0)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}
void print_gcd(int t)
{
    for (int k = 1; k <= t; k++)
    {
        // Take input
        int num1, num2;
        cin.ignore();
        cout << "Test Case " << k << " :\n";
        cout << "Input : ";
        cin >> num1 >> num2;
        
        // Logic to find output
        int gcd = 1;
        if(num1>0 && num2>0)
        {
            // gcd = gcdfunc(num1, num2);
            while(num1>0 && num2>0)
            {
                if(num1>num2)
                {
                    num1 = num1%num2;
                }
                else
                {
                    num2 = num2%num1;
                }
            }
            if(num1>0)
            {
                gcd = num1;
            }
            else
            {
                gcd = num2;
            }
        }
        else
        {
            cout << "Wrong Input!!\n";
            continue;
        }
        
        /*
        for(int j = min(num1, num2); j >= 1; j--)
        {
            if(num1%j == 0 && num2%j == 0)
            {
                gcd = j;
                break;
            }
        }
        */
        
        // Print Output
        cout << gcd << " is GCD.\n";
        cout << "\n";
    }

}

int main()
{
    int t;
    cout << "Enter the number of test cases : ";
    cin >> t;
    // print_count_all_digits(t);
    // print_reverse_number(t);
    // print_ispalindrome(t);
    // print_isarmstrong(t);
    // print_divisors(t);
    // print_isprime(t);
    print_gcd(t);

    // This is the End of the program.
    // And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}