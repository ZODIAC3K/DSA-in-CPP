#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
       
        std::vector<int> roots;
        
        double r1, r2;
        double discriminant = b * b - 4 * a * c;
        double sqrt_val = sqrt(abs(discriminant));
      
        if (a == 0) {
            cout << "Invalid";
        }

        if (discriminant > 0) {
            r1 = floor((-b + sqrt_val) / (2 * a));
            r2 = floor((-b - sqrt_val) / (2 * a));
            // cout << "r1 = " << r1 << "r2 = " << r2 << endl; 
            
        } else if (discriminant == 0) {
            r1 = r2 = floor(-b / (2 * a));
            // cout << "r1 = " << r1 <<  endl << "r2 = " << r2 << endl; 
        }else{
            roots.push_back(-1);
            return roots;
        }

        if(r2>r1){
            double temp = r2;
            r2 = r1;
            r1 = temp;
        }

        roots.push_back(r1);
        roots.push_back(r2);
        return roots;
    }
};
//{ Driver Code Starts.

int main() {
    int T = 1;
    // cin >> T;
    while (T--) {
        // -264 -750 504
        int a = -264, b = -750, c = 504;
        // cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}
