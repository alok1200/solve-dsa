#include <iostream>
#include <vector>

using namespace std;

int main(){
    float point = 10;
    float* ptr = &point;


    cout << ptr << endl;
    cout << &point << endl;

    return 0;
}