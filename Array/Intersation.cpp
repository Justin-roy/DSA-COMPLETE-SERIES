#include <iostream>
#include <bits/stdc++.h>
#define N 100
using namespace std;
// Copy Common Elements
// Overall O(n) Time
void InterSation_Sort(int A[],int B[],int n,int m)
{
    int C[N];
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(A[i]<B[j])
          i++;
        else if(A[j]<B[i])
          j++;
        else if(A[i]==B[j])
        {
          C[k++] = A[i++];
          ++j;
        }
    }
    // Displaying Elements
    for(int i=0;i<k;i++)
    {
       cout<<C[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the Size of the 1st Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int m;
    cout<<"Enter the Size of the 2nd Array: ";
    cin>>m;
    int B[m];
    cout<<"Enter Elements: ";
    for(int i=0;i<m;i++)
    {
        cin>>B[i];
    }
    InterSation_Sort(A,B,n,m);
return 0;
}


