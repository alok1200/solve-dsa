// #include <iostream>

// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     int row = 1;
//     while( row <= n){
//         int col = 1;

//         while( col <= row){
//             cout << "$";
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
// }

// #include <iostream>

// using namespace std;

// int main(){
//     int n;

//     cin >> n;
    
//     int row = 1;

//     while( row <= n){
//         int col = 1;

//         while( col<= row){
//             cout << row << " ";
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
// }




// #include <iostream>

// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int row = 1;
//     int count = 1;

//     while( row <= n){

//         int col = 1;

//         while( col <= row){
//             cout << count  << "";
//             count++;
//             // cout << row ;
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
// }

// #include <iostream>

// using namespace std;

// int main (){
//     int n; 
//     cin >> n;

//     int row = 1;

//     while( row <= n){

//         int col = 1;    
//         while (col <= row){
//             cout << row + col -1 << " "; 
//             col++; 

//         }
//         cout << endl;
//         row++;
        
//     }
// }





// #include <iostream>

// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     int i = 1;

//     while (i <= n){
//         int j = 1;

//         while (j <= i){
//             cout << (i - j + 1) << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

// }




// #include <iostream>

// using namespace std;

// int main(){
//  int n;                  //thakin input for user
//   cin >> n;
//   int p = 1;
//   char count = 'A';

//   while( p <= n){          // outer loop for rows
//   int s = 1;
//   while( s <= n){          // inner loop for coloumns  and (s <= p) is the inner loop count
//     cout << count << " ";  // printing the value of count
//     count++;
//     s++;
//   }
//   cout << endl;
//    p++;
//   }
// }





// # include <iostream>

// using namespace std;

// int main(){
//    int n;
//     cin >> n;
// int x = 1;

//     while( x <= n ){
//         int y = 1;
//         char count = 'A'+ y+ x - 2;

//         while( y <= x){
//             cout << count << " ";
//             count++;
//             y++;

//         } 
//         cout << endl;
//         x++;

//     }
// }


#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    int row = 1;

    while ( row <= n){
        int col = 1;
        char count = 'A' + row -1;

        while ( col <= row){
           
            cout << count << " ";
           
            col++;
        }
        cout << endl;
        row++;
    }

}