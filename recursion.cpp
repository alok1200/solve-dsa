// #include <iostream>

// using namespace std;

// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

// int main()
// {
//     // Always show a demo output so you can verify recursion works.
//     int demo = 5;
//     cout << "Demo: Factorial of " << demo << " is " << factorial(demo) << endl;

//     int n;
//     cout << "Enter a number (or press Ctrl+D to skip): ";

//     if (!(cin >> n))
//     {
//         cout << "No input given. Demo output shown above." << endl;
//         return 0;
//     }

//     if (n < 0)
//     {
//         cout << "Factorial is not defined for negative numbers." << endl;
//         return 0;
//     }

//     cout << "Factorial of " << n << " is " << factorial(n) << endl;
// }

#include <iostream>
using namespace std;

bool linearSearch(int arr[], int x, int index, int N)
{
    if (index == N)
    {
        return false;
    }
    if (arr[index] == x)
    {
        return true;
    }
    return linearSearch(arr, x, index + 1, N);
}

int main()
{
    int arr[] = {2, 3, 6, 7, 1, 5};
    int N = sizeof(arr) / sizeof(arr[0]);

    int x;
    cout << "Enter value to search: ";
    cin >> x;

    bool found = linearSearch(arr, x, 0, N);

    cout << "\nOutput:\n";

    // Print as 0 or 1
    cout << "Returned (0/1): " << found << endl;

    // Print as true or false
    cout << "Returned (true/false): " << boolalpha << found << endl;

    if (found)
    {
        cout << "Value " << x << " is in the array." << endl;
    }
    else
    {
        cout << "Value " << x << " is not in the array." << endl;
    }

    return 0;
}