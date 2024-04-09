
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
        vector<int> value (2,0);
        int small = 0, large = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(arr[i] <= x){
                small++;
            }
            if(arr[i] >= x){
                large++;
            }
        }
        
        value[0] = small;
        value[1] = large;
        
        return value;
	}
};


int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}