// #include <iostream>
// #include <string>
// #include <vector>   // required for vector

// using namespace std;

// int binarySearch(vector<int> arr, int tar)
// {
//     int st = 0, end = arr.size() - 1;

//     while (st <= end)
//     {
//         // int mid = (st-end)/2    //this is un optimized one way to using this formula it show error 
//         int mid = st + (end-st) / 2;  // we using this formula this is optimize formula

//         if (tar > arr[mid])
//         {
//             st = mid + 1; // missing semicolon fixed
//         }
//         else if (tar < arr[mid])
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             return mid; // found
//         }
//     }
//     return -1; // not found
// }

// int main()
// {
//     vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
//     int tar1 = 12;
//     cout << "Index of " << tar1 << " is: " << binarySearch(arr1, tar1) << endl;

//     vector<int> arr2 = {-1, 0, 3, 4, 5, 9, 12};
//     int tar2 = 9;
//     cout << "Index of " << tar2 << " is: " << binarySearch(arr2, tar2) << endl;

//     return 0;
// }


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int recBinarySearch(vector<int> arr, int tar, int st, int end){
    if(st <= end){
        int mid = st + (end -st)/2;

        if(tar > arr[mid]){
            return recBinarySearch(arr, tar, mid+1, end);
        }else if(tar < arr[mid]){
            return recBinarySearch(arr, tar, st, mid-1);
        }else{
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int tar = 40;

    int result = recBinarySearch(arr, tar, 0, arr.size() - 1);

    cout << result << endl; // prints -1 if not found, index if found

    return 0;
}