
#include <bits/stdc++.h>
using namespace std;



class Solution{
public: 
    bool checkSorted(int N, vector<int> A)
    {
    // =====================  SOLUTION TYPE  =====================
    // Brute Force Solution...........
    // =====================  SOLUTION TYPE  =====================

    //     int count = 0;
    //     for(int i = 0; i < N-1; i++)
    //     {
    //         int min_value = INT_MAX, min_index = -1;
    //         for(int j = i+1; j < N; j++)
    //         {
    //             // cout << "A[i] " << A[i] << endl;
    //             // cout << "A[j] " << A[j] << endl;
    //             // cout << "Current Min " << min_value << endl;
    //             min_value = min(min_value,A[j]);
    //             // cout << "Min Value " << min_value << endl;
    //             // cout << " ==== " << endl;
    //             if(min_value == A[j])
    //             {
    //                 min_index = j;
    //             }
    //         }

    //         if(min_index != -1)
    //         {
    //             if(A[i] > A[min_index])
    //             {
    //                 int temp = A[i];
    //                 A[i] = A[min_index];
    //                 A[min_index] = temp;
    //                 count++;
    //             }
    //         }
    //     }
    //     for(int i = 0; i < N; i++)
    //     {
    //         cout << A[i] << " ";
    //     }
    //     if(count > 2)
    //     {
    //         return false;
    //     }
    //     else{
    //         return true;
    //     }
    // }   


    // =====================  SOLUTION TYPE  =====================
    // Optimized Solution...........
    // =====================  SOLUTION TYPE  =====================


    int count = 0, temp, index = 0;
        while(index < N)
        {
            if(A[index] != index+1)
            {
                if(N == 649){
                    cout << "A[index]: "<< A[index] << " " << "index: " << index << endl;
                }
                while (A[index] != index+1) 
                { 
                    int temp = 0; 
                    temp = A[A[index]-1];
                    A[A[index]-1] = A[index];
                    A[index] = temp;
                    count++;
                }
            }
            index++;
        }
        if(count == 2 || count == 0){
            return true;
        }
        else
        {
            return false;
        }
    }
};


int main() 
{
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        vector<int> A(N);
        for(int i = 0; i < N; i++)
            cin >> A[i];

        Solution ob;
        if(ob.checkSorted(N, A))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    
    return 0;
}  
