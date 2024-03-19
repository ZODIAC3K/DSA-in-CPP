
#include<bits/stdc++.h>
using namespace std;


void print(int ar[], int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        cout << ar[i];
        if (i < n - 2)
        {
            cout << " ";    
        }
    }
}

int main()
{
   int t = 1;
//    cin>>t;
  while(t--)
   {
     int ar[100001]={0};
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
      cin>>ar[i];
      print(ar,n);
      cout<<endl;
     }

return 0;
}
