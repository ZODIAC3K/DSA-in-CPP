
#include<bits/stdc++.h>

using namespace std;

class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    
	    vector<int> result;
    
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] == i + 1) //
            {
                result.push_back(arr[i]);
            }
        }
        
        return result;
	}
};


int main() {
    int t =1;
    // cin >> t;
    while (t--) {
        int n = 5;;
        // cin >> n;
        int arr[n] = {15,2,45,12,7};
        // for (int i = 0; i < n; i++) {
        //     cin >> arr[i];
        // }
        Solution ob;
        auto ans = ob.valueEqualToIndex(arr, n);
        if (ans.empty()) {
            cout << "Not Found";
        } else {
            for (int x: ans) {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
