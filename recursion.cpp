#include <iostream>

using namespace std;

void printNams(int n) {
    if (n == 1) {
        cout << n << endl;
        return;
    }

    cout << n << endl;
    printNams(n - 1);
}

int main(){
    printNams(100);
    return 0;
}