#include <iostream>
#include <vector>

using namespace std;

int main(){
    // int a = 10;
    // int* ptr = &a;
    // int a = 10;
    // int* ptr = &a;
    // cout << *(&a) << endl;
    // cout << *(ptr) << endl;

    //-----------------------------------
    //Null Pointer              thsy always stor garbage value that we use Null value
    // int** ptr = NULL;

    // cout << ptr << endl; 
    // return 0;

    //-----------------------------------
    // solve quistion of pointer

    // int a = 5;
    // int *p = &a;
    // int **q = &p;

    // cout << *p << endl;
    // cout << **q << endl;
    // cout << &a << endl;
    // cout << *q << endl;
    //-----------------------------------
    // pass by reference

    int arr [5] = {1,2,3,4,5};
    int *ptr = arr;

    cout << arr << endl;
    cout << *arr << endl;
    cout << &ptr[0] << endl;
    cout << ptr << endl;
    cout << ptr + 1 << endl;
    cout << &ptr[1] << endl;


    for(int i = 0; i<5; i++){
        cout << arr+i << endl;
    }

    for(int i = 0; i<5; i++){
        cout << *(arr+i) << endl;
    }

    return 0;
}