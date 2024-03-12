#include <bits/stdc++.h>
using namespace std;

long long factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    long long val;
    cin >> val;
    
    long long n =  factorial(val);

    long long r = 0;
    long long count = 0;

    while(r == 0 && n>=0){

        r = n%10;

        if (r == 0){
            count++;
        }
        n = n/10;
    }

    cout << count << endl;
}



