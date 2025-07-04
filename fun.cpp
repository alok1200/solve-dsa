// # include <iostream>

// using namespace std;

// int main(){
// int size = 5;
// int marks[size];

// for ( int i = 0; i < size; i++){
//     cin >> marks[i];
// }

// // int size = 5;
// // cout << sizeof(marks)/ sizeof(int) << endl;
// for ( int i = 0; i < size; i++){
//     cout << marks[i] << endl;
// }
// return 0;

// }


// // loop in array


// # include <iostream>
// using namespace std;

// int main(){
//     int nums[] = {10,20,-30,40,50};
//     int size = 5;



//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//     int smallestIndex = -1;
//     int largestIndex = -1;

//     for (int i = 0; i < size; i++){

//         // smallest = min( smallest, nums[i]);
//         // largest = max( largest, nums[i]);
//         if (nums[i] < smallest){
//             smallest = nums[i];
//             smallestIndex = i;
//         }
//         if (nums[i] > largest){
//             largest = nums[i];
//             largestIndex = i;


//         }
//     }
//     cout << "Smallest number is: " << smallest << "SmallestIndex number is:"<< smallestIndex << endl;
//     cout << "Largest number is: " << largest << "LaegestIndex number is: " << largestIndex << endl;
//         return 0;
// }



// #include <iostream>
// using namespace std;

// // Function Declaration
// int multiply(int, int);

// // Main Function
// int main() {
//     int x = 4, y = 5;
//     int product = multiply(x, y);
//     cout << "Product is: " << product << endl;
//     return 0;
// }

// // Function Definition
// int multiply(int a, int b) {
//     return a * b;
// }

// #include <iostream>
// using namespace std;

// // Function to be passed
// int square(int x) {
//     return x * x;
// }

// // Function that takes another function as a parameter
// void compute(int (*func)(int), int value) {
//     cout << "Result: " << func(value) << endl;
// }

// int main() {
//     compute(square, 5); // Pass the function
//     return 0;
// }

// function pass by reference

#include <iostream>
using namespace std;

void doSomething(int &x){
    cout << x << endl;
    x += 5;
    cout << x << endl;
    x += 5;
    cout << x << endl;

}

int main(){
   int x = 10;
   doSomething(x);
   cout << x << endl;
   return 0;
}
