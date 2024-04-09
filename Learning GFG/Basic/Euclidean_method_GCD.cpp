#include<bits/stdc++.h>
using namespace std;

// Euclidean method to find GCD of two numbers basic method

// int gcd(int a, int b){
//     while(a!=b){
//         if(a>b)
//             a=a-b;
//         else
//             b=b-a;
//     }


// Euclidean method to find GCD of two numbers advanced version of basic method

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int main(){
    int a, b ;
   cout<<"Enter 1st numbes: ";
    cin>>a;
   cout<<"Enter 2st numbes: ";
    cin>>b;
    cout<< "GCD is: "<<gcd(a, b);
    return 0;
}