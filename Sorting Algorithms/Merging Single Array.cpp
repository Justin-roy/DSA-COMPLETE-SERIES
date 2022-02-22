#include <iostream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;
void Merging(int A[],int l,int mid,int h)
{
    int i,j,k;
    int B[100];
    i = l,j = mid+1,k = l;
    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
         B[k++] = A[i++];
        else
         B[k++] = A[j++];
    }
    for(;i<=mid;i++)
    {
       B[k++] = A[i];
    }
    for(;j<=h;j++)
    {
       B[k++] = A[j];
    }
    for(i=l;i<=h;i++)
    {
      A[i] = B[i];
    }
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    int Mid = n/2;
    Merging(A,0,Mid-1,n);
    for(int i=0;i<n;i++)
    {
      cout<<A[i]<<" ";
    }
return 0;
}
