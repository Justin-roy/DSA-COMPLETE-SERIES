#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Time is O(N^2)
int Next_Smaller_To_Right(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
      {
         if(A[i]<A[j]){
            cout<<A[i]<<" ";
            break;
         }
         else{
            cout<<"-1"<<" ";
            break;
         }
      }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    cout<<Next_Smaller_To_Right(A,n);
return 0;
}

