

#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
        long long sumUnderModulo(long long a,long long b)
    {
        const int MOD = 1000000007;
        long long sum = (a % MOD + b % MOD) % MOD;
        return sum;
    }
};

int main() {
	int T = 1; // Number of test cases
	// cin>>T;
	while(T--)
	{
	    long long a =9223372036854775807; 
	    long long b =9223372036854775807; 
	    // cin>>a>>b;
	    Solution ob;
	    cout<<ob.sumUnderModulo(a,b)<<endl;
	}
	return 0;
}
