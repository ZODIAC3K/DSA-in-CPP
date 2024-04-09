
#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int sum = 0, actual_sum = 0, missing_number = -1;
        for(int i = 0; i<n; i++){
            sum += array[i];
            cout << "Sum: " << sum << endl;
            cout << "Array[i]: " << array[i] << endl;
        }
        actual_sum = (n * (n + 1)) / 2;
        cout << "Sum: " << sum << endl;
        cout << "Actual Sum: " << actual_sum << endl;
        missing_number = actual_sum - sum;
        return missing_number;
    }
};

int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
