#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Sorted_array(int A[],int n,int k)
{
    int i = n-1;
    while(A[i]>k)
    {
        A[i+1] = A[i];
        --i;
    }
    A[i+1] = k;
    for(int i=0;i<=n;i++)
    {
       cout<<A[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter sorted Array Elements: ";
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    int k;
    cout<<"Enter Element You want to Insert: ";
    cin>>k;
    Sorted_array(A,n,k);
return 0;
}
