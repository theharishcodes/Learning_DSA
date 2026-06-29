#include <iostream>
#include <cmath>
using namespace std;
// Functions - A block of code that performs a specific task. It can be reused in the program at different places.
/*
    There are 4 Types of Functions in C++:
    1. Void Functions - A function that does not return any value. It performs a task and then exits.
    2. Return - A function that returns a value after performing a task.
    3. Parametric - A function that takes parameters as input and performs a task based on those parameters.
    4. Non-Parametric - A function that does not take any parameters as input and performs a task.
*/

/* Function Skeleton

return_type function_name(parameter_list)
{
    body of the function;
    return statement; (if return type is not void)
}

If the function does not return any value,
then we use void as the return type.

And if there are no parameters,
then we can leave the parameter list empty.
*/

void printstart() // Void Non-Parametric Function.
{
    cout << "Hello People. This is Code written by Harish." << endl;

}

void printName(string name) // Void Parametric Function.
{
    cout << "Ohh, so you are " << name << ". I was looking for you only. Glad to see, you found me yourself.\n";
}

int sum(int num1, int num2) // Return Parametric Function.
{
    int num3;
    num3 = num1 + num2;
    return num3; // returns the value of num3 to the caller function(main function in this case).
}

int sum() // Return Non-Parametric Function.
{  
    int num1, num2, num3;
    cout << "Enter 2 numbers :\na = ";
    cin >> num1;
    cout << "b = ";
    cin >> num2;
    num3 = num1 + num2;
    return num3; // returns the value of num3 to the caller function(main function in this case).
}

int maxx(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
        /*  if we remove this else statement, then the function will return garbage value when num1 is less than num2. So, it is important to have an else statement in this case.
            Or we would need to return num2 at the end of function, without else statement. But it is better to have an else statement for better readability and understanding of the code.
        */
    }
}

void dosomething(int num) // Pass by Value Function.
{
    cout << "num = " << num << endl;
    num += 4;
    cout << "num = " << num << endl;
    num += 4;
    cout << "num = " << num << endl;
}

void dosomething_2(int &num) // Pass by Reference Function.
{
    cout << "num = " << num << endl;
    num += 5;
    cout << "num = " << num << endl;
    num += 5;
    cout << "num = " << num << endl;
    // Here, we are passing the address, so every thing happens with the variable at that address, which is n in this case. So, the value of n will be modified in the main() function as well.
}

void dosomething_3(int array[], int size) // Pass by Reference Function for Array.
{
    cout << "Array inside the function : ";
    for (int i=0; i<size; i++)
    {
        array[i] += 10;
        cout << "array[" << i << "] = " << array[i] << "\n";
    }
}

int main()
{
    int x, y;

    string name1;
    printstart(); // printstart function is called here. printstart() is a void non-parametric functions.

    cout << "What's your name?\n";
    //cin.ignore(); // If ever any input is taken before getline() function, then use this to ignore the newline character left in the input buffer by the previous input function.
    getline(cin, name1);
    printName(name1); // printName function is called here. printName() is a void parametric function.

    // The example of Return Parametric Function.
    cout << "\nEnter 2 numbers :\na = ";
    cin >> x;
    cout << "b = ";
    cin >> y;
    cout << "\nThe sum is : " << sum(x,y) << "\n"; // sum function is called here.
    // Or you can store sum(x,y) in a variable and then print it.
    // int result = sum(x,y);
    // cout << "The sum is : " << result << "\n";

    // The example of Return Non-Parametric Function.
    // int result = sum(); // sum() functions is called here and returned value is stored in result variable.
    // cout << "The sum is : " << result << "\n";

    // In-built Functions.
    // 1. sqrt() - It is used to find the square root of a number. //sqrt(number)
    // 2. pow() - It is used to find the power of a number. //pow(base, exponent)
    // 3. abs() - It is used to find the absolute value of a number. //abs(number)
    // 4. ceil() - It is used to round up a number to the nearest integer. //ceil(number)
    // 5. floor() - It is used to round down a number to the nearest integer. //floor(number)
    // 6. min() - It is used to find the minimum of two numbers. //min(number1, number2)
    // 7. max() - It is used to find the maximum of two numbers. //max(number1, number2)

    // We can also create these functions by ourselves. For example, we can create a function to find the maximum of two numbers.
    if ( x == y)
    {
        cout << "Both numbers are equal.\n";
    }
    else
    {
        cout << "The maximum of x and y is : " << maxx(x,y) << "\n";
    }

    //Pass by Reference - It is a method of passing arguments to a function by reference. In this method, the address of the variable is passed to the function, and the function can modify the value of the variable directly.
    int n;
    cout << "\nNow enter the value of n : ";
    cin >> n;
    dosomething(n);
    cout << "n = " << n << " The value of n in main() function is not modified." << "\n\n";
    /*
        In the above code, we are passing the value of n to the function dosomething(). But the value of n is not modified in the main() function, because we are passing the value of n to the function, and the function is working with a copy of n.
        So, any modification made to n inside the function will not affect the value of n in the main() function. This is called pass by value.
        But if we want to modify the value of n inside the function, then we need to pass the address of n to the function. This is called pass by reference.
    */
    dosomething_2(n);
    cout << "n = " << n << " The value of n in main() function is modified." << endl;

    // If we are passing an array to a function, it is always passed by reference.
    n = 6;
    int arr[n];
    cout << "\nEnter " << n << " elements in the array : \n";
    for (int i=0; i<n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    dosomething_3(arr, n);
    cout << "Array outside the function : ";
    for (int i=0; i<n; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << "\n";
    }


    //This is the End of the program.
    //And this "End!" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}