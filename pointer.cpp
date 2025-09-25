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

    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p << endl;
    cout << **q << endl;
    cout << &a << endl;
    cout << *q << endl;

    return 0;
}