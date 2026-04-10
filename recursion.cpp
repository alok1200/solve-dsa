#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    // Always show a demo output so you can verify recursion works.
    int demo = 5;
    cout << "Demo: Factorial of " << demo << " is " << factorial(demo) << endl;

    int n;
    cout << "Enter a number (or press Ctrl+D to skip): ";

    if (!(cin >> n))
    {
        cout << "No input given. Demo output shown above." << endl;
        return 0;
    }

    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    cout << "Factorial of " << n << " is " << factorial(n) << endl;
}
