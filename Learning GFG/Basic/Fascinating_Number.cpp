//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	
	bool fascinating(int n) {
	    
	    string val = to_string(n) + to_string(n*2) + to_string(n*3);
	    
	    if(n < 100){
	        return false;
	    }
	    cout << val << endl;
	    for(int i = 1; i <= 9; i++)
	    {
            cout << val.find('0' + i)  << endl;
	        // Check if the character representing the digit (0 + i) is not found in the string 'val'.      
            // where 'i' represents digits from 1 to 9. 
            // '0' + i generates the character corresponding to the digit 'i'.
            // string::npos indicates that the character is not found in the string.
           if(val.find('0' + i) == string::npos)
           {
               return false;
           }
        }
	    
	    return true;
	}
};


int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}
