#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Time is O(N^2)
int Next_Largest(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
      {
         if(A[j]>A[i]){
            cout<<A[j]<<" ";
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
    cout<<Next_Largest(A,n);
return 0;
}
