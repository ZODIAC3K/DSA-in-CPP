#include <bits/stdc++.h>
using namespace std;

class Array {
public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }
        getchar();
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

class Solution {
public:
    bool isPerfect(int n, vector<int> &arr) {
        vector<int> rev;
        bool value = false;
        
        for (int i = n - 1; i >= 0; i--) {
            rev.push_back(arr[i]);
        }
        for (int i = 0; i < n; i++) {
            if (rev[i] == arr[i]) {
                value = true;
            } else {
                value = false;
                break;
            }
        }
        return value;
    }
};

int main() {
    int t = 1;
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<int> arr(n);
        Array::input(arr, n);
        Solution obj;
        bool res = obj.isPerfect(n, arr);
        if (res) 
            cout << "PERFECT" << endl;
        else 
            cout << "NOT PERFECT" << endl;
    }
}
