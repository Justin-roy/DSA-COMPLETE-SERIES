#include <iostream>
#include <climits>
#include <bits/stdc++.h>
// Time is O(n+m)
using namespace std;
void Merging(int A[],int B[],int n,int m)
{
    int i,j,k;
    i = j = k = 0;
    int C[n+m];
    while(i<n && j<m)
    {
        if(A[i]<B[j])
         C[k++] = A[i++];
        else
          C[k++] = B[j++];
    }
    for( ;i<n;i++)
    {
      C[k++] = A[i];
    }
    for(;j<m;j++)
    {
      C[k++] = B[j];
    }
    cout<<"\nAfter Merging Elements\n";
    for(int l=0;l<(n+m);l++)
    {
      cout<<C[l]<<" ";
    }
}
int main()
{
    int n,m;
    cout<<"Enter the Size of the First Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Elements\n";
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    cout<<"Enter the Size of the Second Array: ";
    cin>>m;
    int B[m];
    cout<<"Enter Elements\n";
    for(int j=0;j<m;j++)
    {
      cin>>B[j];
    }
    Merging(A,B,n,m);
return 0;
}
