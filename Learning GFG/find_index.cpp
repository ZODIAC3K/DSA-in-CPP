//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 


class Solution
{
  public:
    vector<int> findIndex(int arr[], int n, int key)
    {
        int j = n-1, i = 0,first = -1,last = -1;
        vector<int> value;
        
        for(i; i<n; i++)
        {
            if(first == -1 && key == arr[i])
            {
                first = i;
            }
            if(last == -1 && key == arr[j])
            {
                last = j;
            }
            j--;
        }
        
        if(first == -1 && last == -1)
        {
            value.push_back(-1);
            value.push_back(-1);
            return value;
        }else{
            value.push_back(first);
            value.push_back(last);
            return value;
        }
    }
  
};

int main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cout << "Enter the size of array: ";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cout << "Enter " << i+1 << " element: ";
            cin>>arr[i];
        }
        int key;
        cout << "Enter the search key: ";
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}
