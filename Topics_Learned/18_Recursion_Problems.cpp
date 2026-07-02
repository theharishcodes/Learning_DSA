#include <iostream>
#include <vector>
using namespace std;

void print_name_n_times(string name, int n)
{
    if(n>0)
    {
        cout << name << " ";
        print_name_n_times(name, n-1);
    }
}

void print_1_to_n(int initial, int n)
{
    if(initial <= n)
    {
        cout << initial << " ";
        print_1_to_n(initial+1, n);
    }
}

void print_n_to_1(int n)
{
    if(n<1)
    {
        return;
    }
    cout << n << " ";
    print_n_to_1(n-1);
}

void print_1_to_n_backtrack(int n)
{
    if(n<1)
    {
        return;
    }
    print_1_to_n_backtrack(n-1);
    cout << n << " ";

    // The last recursive block will print the number, which will be 1. Then last second will print 2. and so on...we come to the end with printing n.
}

void print_sum_of_n_parametarised(int n, int sum)
{
    if(n < 1)
    {
        cout << "Sum : " << sum << "\n";
        return;
    }
    print_sum_of_n_parametarised(n-1, sum + n);
    // We assume that "print_sum_of_functional(n-1)" returns the sum of numbers from 1 to n-1.
    // So "n + sum of numbers from 1 to n-1" is sum of numbers from 1 to n.
}

int print_sum_of_n_functional(int n)
{
    if(n == 0)
    {
        return 0; // sum(0) = 0;
    }

    // We assume that "print_sum_of_functional(n-1)" returns the sum of numbers from 1 to n-1.
    // So "n + sum of numbers from 1 to n-1" is sum of numbers from 1 to n.
    return (n + print_sum_of_n_functional(n-1));
}

int print_factorial(int n)
{
    if(n == 1)
    {
        return 1; // factorial(1) = 1.
    }

    // We assume that "print_factorial(n-1)" returns the factorial of n-1.
    // So "n*(factorial of n-1)" is factorial of n.
    return (n*print_factorial(n-1));
}

void reverse_array(int arr[], int n, int i)
{
    if(i == (n/2))
    {
        // cout << ".";
        return;
    }
    int temp = arr[n-1 - i];
    arr[n-1 - i] = arr[i];
    arr[i] = temp;
    // cout << arr[i];
    // cout << arr[n-1 - i];
    // cout << "_";
    reverse_array(arr, n, i+1);
}

void isstringpalindrome(string str, int n)
{
    if(n == str.size()/2)
    {
        cout << "YES\n";
        return;
    }

    if(str[n] == str[str.size() - 1 - n])
    {
        isstringpalindrome(str, n+1);
    }
    else
    {
        cout << "NO\n";
    }
}

int fibonacci(int n)
{
    // Base Condition
    if(n<=1)
    {
        return n;
    }
    
    // Recursive call
    int fibonaccinum = fibonacci(n-1) + fibonacci(n-2);
    return fibonaccinum;

}

void print_subsequences(int idx, int arr[], int n, vector<int>& subseq)
{
    // Base Condition
    if(idx >= n)
    {
        // Print Subsequence
        cout << "{";
        for(auto it = subseq.begin(); it < subseq.end(); it++)
        {
            cout << *(it);
            if(it != subseq.end() - 1)
            {
                cout << ", ";
            }
        }
        cout << "}\n";

        // Return
        return;
    }

    // Add and look for next element in array.
    subseq.push_back(arr[idx]);
    print_subsequences(idx+1, arr, n, subseq);

    // Remove and look for next element in array.
    subseq.pop_back();
    print_subsequences(idx+1, arr, n, subseq);
}
int main()
{
    // Print Name n times.
    /*
    string name;
    cout << "Name : ";
    getline(cin, name);
    int num;
    cout << "Repeat for : ";
    cin >> num;
    print_name_n_times(name, num);
    */
   
    // Print 1 to N
    /*
    int n;
    cin >> n;
    print_1_to_n(1, n);
    */
    
    // Print N to 1
    /*
    int n;
    cin >> n;
    print_n_to_1(n);
    */

    // Print 1 to N Using Backtracking
    /*
    int n;
    cin >> n;
    print_1_to_n_backtrack(n);
    */

    // Sum of n numbers -- Functional
    /*
    int n;
    cout << "Input : ";
    cin >> n;
    int sum = print_sum_of_n_functional(n);
    cout << "Sum : " << sum;
    */

    // Sum of n numbers -- Parametarised Way
    /*
    int n;
    cout << "Input : ";
    cin >> n;
    print_sum_of_n_parametarised(n, 0);
    */

    // Factorial of n
    /*
    int n;
    cout << "Input : ";
    cin >> n;
    cout << "Factorial : " << print_factorial(n) << "\n";
    */

    // Reverse Array
    /*
    int n;
    cout << "Size of Array : ";
    cin >> n;
    int arr[n];
    cout << "Array : ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverse_array(arr, n, 0);

    cout << "Reversed Array : {";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i];
        if(i!=n-1)
        {
            cout << ", ";
        }
    }
    cout << "}";
    */

    // String Palindrome
    /*
    string str;
    cin >> str;
    isstringpalindrome(str, 0);
    */

    // Fibonacci Number
    /*
    int n;
    cout << "Input : ";
    cin >> n;
    cout << n << "th Fibonacci : " << fibonacci(n) << "\n";
    */

    // Print all Subsequences.
    // A contigious or non contigious sequences, which follows the order.
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "Array : ";
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    vector<int> output = {};
    print_subsequences(0, arr, n, output);


    // This is the End of the program.
    // And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}