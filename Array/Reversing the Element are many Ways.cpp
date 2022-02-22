#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Reverse(int A[],int n)
{
    int j,i;
    int B[n];
    for(i=n-1,j=0;i>=0;i--,j++)
    {
        B[j] = A[i];
    }
    for(i=0;i<n;i++)
    {
       A[i] = B[i];
    }
    for(j=0;j<n;j++)
    {
       cout<<A[j]<<" ";
    }
}
void Swap_Reverse(string A[],int n)
{
    int i,j;
    for(i=0,j=n-1;i<j;i++,j--)
    {
//       string temp = A[i];
//       A[i] = A[j];
//       A[j] = temp;
         swap(A[i],A[j]);
    }
    for(i=0;i<n;i++)
    {
       cout<<A[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    string A[n];
    cout<<"Enter String Elements\n";
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    //Reverse(A,n);
    Swap_Reverse(A,n);
return 0;
}
