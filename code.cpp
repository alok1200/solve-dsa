// #include <iostream>

// using namespace std;

// int main(){
//     int n = 10;
//     int a = 1;

//     while( a <= n){
//         cout << a << " ";
//         a++;
//     }
//     cout << endl;
//     return 0;
// }

//   using sum in this for loop

// #include <iostream>

// using namespace std;

// int main(){

//     int n = 50;
//     int sumadd = 0;

//     for(int i = 1; i<=n; i++){
//         if(i%2 != 0){
//           sumadd  +=i;
//         }
//     }

//     cout << "sumadd = " << sumadd << endl;
//     return 0;
// }

//  adding nven number using whilw loop

// #include <iostream>

// using namespace std;

// int main() {
//     int n = 5;
//     int sumeven = 0;

//     int i = 2;

//     while (i <= n) {
//         sumeven += i;
//         i += 2;
//     }

//     cout << "sumeven = " << sumeven << endl;
//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main(){

//     int n = 5;
//     bool isPrime = true;

//     for(int i = 2; i<=n-1; i++){
//         if(n%i == 0){
//             isPrime == false;
//             break;
//         }

//         if(isPrime == true){
//             cout << "prime number\n";
//         }else{
//             cout << "not prime number\n";
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num[] = {10, 60, 30, 40, 50};
//     int size = 5;
//     bool found = false;

//     for (int i = 0; i < size; i++)
//     {
//         if (num[i] == 20)
//         {
//             cout << "We found 20";
//             found = true;
//             break;
//         }
//     }

//     if (!found)
//     {
//         cout << "20 is not present in the array";
//     }

//     return 0;
// }
