#include <bits/stdc++.h>
using namespace std;

// Novice approach

// long long factorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }

// int main(){
//     long long val;
//     cin >> val;
    
//     long long n =  factorial(val);

//     long long r = 0;
//     long long count = 0;

//     while(r == 0 && n>=0){

//         r = n%10;

//         if (r == 0){
//             count++;
//         }
//         n = n/10;
//     }

//     cout << count << endl;
// }

// Optimized approach
int main (){
    long long val, count = 0;
    cin >> val;
    
    // we are solving without calculating the factorial. 
    // Total no of 5's is always less than the no of 2's in the factorial of a numbe so we are counting the no of 5's in the factorial of the given number. we are adding questient of val/5, val/25, val/125, val/625, val/3125, val/15625, val/78125, val/390625, val/1953125 which is the total no of 5's in the factorial of the given number.

    for (long long i = 5; i <= val; i = i * 5){ 
        count = count + val/i;
    }
    cout << count << endl;
}

