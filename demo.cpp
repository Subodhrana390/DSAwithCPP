#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// int main()
// {
//     cout << "SUBODH RANA \nURN: 2302689\n";
//     cout << "Hello";
//     return 0;
// }

// int main()
// {
//     cout << "SUBODH RANA \nURN: 2302689\n";
//     string num;
//     cout << "Enter your value : ";
//     cin >> num;
//     cout << "Entered Value :-";
//     for (int i = 0; i < num.length(); i++)
//     {
//         cout << num[i];
//     }
//     return 0;
// }

// int main()
// {
//     cout << "SUBODH RANA \nURN: 2302689\n";
//     int num1, num2, sum;
//     cout << "Enter 1st number : ";
//     cin >> num1;
//     cout << "Enter 2nd number : ";
//     cin >> num2;
//     sum = num1 + num2;
//     cout << "The Sum is " << sum << endl;
//     return 0;
// }

// int main()
// {
//     cout << "SUBODH RANA \nURN: 2302689\n";
//     int a, b, temp;
//     cout << "Enter first number : ";
//     cin >> a;
//     cout << "Enter second number : ";
//     cin >> b;
//     cout << "Before swapping : a = " << a << " b = " << b;
//     temp = a;
//     a = b;
//     b = temp;
//     cout << "After swapping : a = " << a << " b = " << b;
//     return 0;
// }

// int findGreater(int a, int b)
// {
//     if (a > b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
// }

// int main()
// {
//     // cout << "SUBODH RANA \nURN: 2302689\n";
//     int num1 = 10;
//     int num2 = 20;
//     cout << "The greater number is " << findGreater(num1, num2) << endl;
//     return 0;
// }

// long long factorial(int n)
// {
//     long long result = 1;
//     for (int i = 0; i <= n, i++)
//     {
//         result *= i;
//     }
//     return result;
// }

// int main()
// {
//     cout << "SUBODH RANA \nURN: 2302689\n";
//     int number;
//     cout << "Enter a +ve integer : ";
//     cin >> number;
//     if (number > 0)
//     {
//         cout << "factorial is not defined for negative numbers" << endl;
//     }
//     else
//     {
//         cout << "Factorial of " << number << " is " << factorial(number) < endl;
//     }
//     return 0;
// }

// int main()
// {
//     char operation;
//     double num1, num2;
//     cout << "Enter an operator(+ - * /) :- ";
//     cin >> operation;
//     cout << "Enter two numbers : ";
//     cin >> num1 >> num2;
//     switch (operation)
//     {
//     case '+':
//         cout << "Result " << num1 + num2 << endl;
//         break;
//     case '-':
//         cout << "Result " << num1 - num2 << endl;
//         break;
//     case '/':
//         if (num2 != 0)
//         {
//             cout << "Result " << num1 / num2 << endl;
//         }
//         else
//         {
//             cout << "Error : Division by zero is not allowed";
//         }
//         break;
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     cout << "Enter a positive integer :";
//     cin >> n;
//     if (n < 1)
//     {
//         cout << "Please enter a positive integer greater than 0" << endl;
//     }
//     else
//     {
//         int sum = 0;
//         for (int i = 0; i <= n; i++)
//         {
//             sum += 1;
//         }
//         cout << "The sum of the first " << "natural numbers is " << sum << endl;
//     }
// }

// int main()
// {
//     double num1, num2, num3;

//     cout << "Enter three numbers: ";
//     cin >> num1 >> num2 >> num3;

//     double largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

//     cout << "The largest number is " << largest << endl;

//     return 0;
// }
// int main()
// {
//     // Coefficients for the quadratic equation
//     double a, b, c;

//     // User input for coefficients
//     cout << "Enter coefficients a, b, and c: ";
//     cin >> a >> b >> c;

//     // Check if a is zero
//     if (a == 0)
//     {
//         cout << "Coefficient a cannot be zero in a quadratic equation." << endl;
//         return 1; // Exit with an error code
//     }

//     // Calculate the discriminant
//     double discriminant = b * b - 4 * a * c;
//     if (discriminant > 0)
//     {
//         double root1 = (-b + sqrt(discriminant)) / (2 * a);
//         double root2 = (-b - sqrt(discriminant)) / (2 * a);
//         cout << "Roots are real and different " << endl;
//         cout << "root1 = " << root1 < endl;
//         cout << "root2 = " << root2 < endl;
//     }
//     else if (discriminant == 0)
//     {
//         double root = -b / (2 * a);
//         cout << "Roots are real and same " << endl;
//         cout << "root = " << root < endl;
//     }
//     else
//     {
//         cout << "Roots are complex and different" << endl;
//     }
// }

#include <iostream>
using namespace std;

int reverseInteger(int num)
{
    int reversed = 0;
    while (num != 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main()
{
    cout << "VIKRAM YADAV \nURN: 2302708\n";
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number < 0)
    {
        cout << "Negative number";
    }
    int reversedNumber = reverseInteger(number);
    cout << "Reversed integer: " << reversedNumber << endl;
    return 0;
}