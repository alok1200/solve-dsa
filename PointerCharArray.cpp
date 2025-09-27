#include <iostream>
#include <string>
#include <vector>   // required for vector

using namespace std;

int binarySearch(vector<int> arr, int tar)
{
    int st = 0, end = arr.size() - 1;

    while (st <= end)
    {
        int mid = st + (end-st) / 2;

        if (tar > arr[mid])
        {
            st = mid + 1; // missing semicolon fixed
        }
        else if (tar < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid; // found
        }
    }
    return -1; // not found
}

int main()
{
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;
    cout << "Index of " << tar1 << " is: " << binarySearch(arr1, tar1) << endl;

    vector<int> arr2 = {-1, 0, 3, 4, 5, 9, 12};
    int tar2 = 9;
    cout << "Index of " << tar2 << " is: " << binarySearch(arr2, tar2) << endl;

    return 0;
}
