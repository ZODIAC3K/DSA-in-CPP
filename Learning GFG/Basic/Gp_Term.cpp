#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double termOfGP(int A, int B, int N)
    {
        assert(A >= -100 && A <= 100 && B >= -100 && B <= 100 && N >= 1 && N <= 5);
    
        double a = static_cast<double>(A);
        double b = static_cast<double>(B);
    
        double r = b / a;
    
        return A * power(r, N - 1);
    }

    double power(double a, int n)
    {
        double ans = 1, x = a;
        while (n != 0) 
        {
            if (n & 1)
                ans *= x;
            x *= x;
            n >>= 1;
        }
    return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    int T = 1; //testcases total


    for(int i=0;i<T;i++) //white testcases are not exhausted
    {
        int A,B;
        cin>>A>>B; //input first and second term of gp
        int N;
        cin>>N; //input n
        Solution ob;
        cout<<floor(ob.termOfGP(A,B,N))<<endl;
    }

    return 0;
}
