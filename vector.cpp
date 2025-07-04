// #include <iostream>
// #include <vector>

// using namespace std;

// int main(){
//     vector<int> vec;

//     cout << "Size of vector: " << vec.size()  << endl;
//     vec.push_back(10);
//     vec.push_back(20);
//     cout << "Size of vector:" << vec.size() << endl;
//     vec.pop_back();
//      cout << "Size of vector:" << vec.size() << endl;

//      cout << vec.front() << endl;
//      cout << vec.at(0) << endl;
//     // for (char val : vec) {
//     //     cout << val << " " << endl;
//     // }
//     return 0;
// }



//  Static vs Dynamic arrays    
// #include <iostream>
// #include <vector>

// using namespace std;
// int main(){
//     vector<int> vec;
//     vec.push_back(0);
//     vec.push_back(1);
//     vec.push_back(2);

//     cout << vec.size() << endl;
//     cout << vec.capacity() << endl;
//     return 0;
// }


// kadane's algorithm

#include <iostream>
#include <vector>

using namespace std;
int main(){
int n = 5;
int arr[5] = {1,2,3,4,5};

for(int st= 0; st<n; st++){
for(int end=st; end<n; end++){
    for(int i=st; i<=end; i++){
        cout << arr[i];
    }
    cout << " ";
}
cout << endl;
}
return 0;
}
