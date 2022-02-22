#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Time is O(N^2)
void Next_Largest_To_Left(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(i==0){
            cout<<"-1"<<" ";
            continue;
        }
      for(int j=i-1;j>=0;j--)
      {
         if(A[j]<A[i]){
            cout<<A[j]<<" ";
            break;
         }
         else if(A[j]>A[i]){
            continue;
         }
         else{
            cout<<"-1"<<" ";
            break;
         }
      }
    }
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
    Next_Largest_To_Left(A,n);
return 0;
}


