#include <iostream>
#include <vector>

using namespace std;

int main(){
    // int a = 10;
    // int* ptr = &a;
    int a = 10;
    int* ptr = &a;

    cout << *(&a) << endl;
    cout << *(ptr) << endl;
    return 0;
}