# include <iostream>

using namespace std;

int main(){
    int n = 5;
    for (int i = 0; i < n; i++){
        cout << "O(n) Time Complexity" << endl;
        // Big-o notation is used to describe the upper bound of an algorithm's time complexity.
        // O(n) means that the time taken by the algorithm increases linearly with the size
        // of the input. In this case, the time complexity is linear because we are iterating
        // through the input n times, performing a constant amount of work for each iteration.
        // This is a common time complexity for algorithms that involve iterating through an array or list
        // of size n, where n is the number of elements in the input.
        cout << "O(n^2) Time Complexity" << endl;
        // O(n^2) means that the time taken by the algorithm increases quadratically with
        // the size of the input. In this case, the time complexity is quadratic because we
        // are using a nested loop, where for each iteration of the outer loop, we iterate
        // through the input n times in the inner loop. This results in a total of n * n = n^2 iterations,
        // which is why the time complexity is O(n^2). This is common in algorithms that involve
        // comparing every element with every other element,
        // such as bubble sort or selection sort.               
    }
}