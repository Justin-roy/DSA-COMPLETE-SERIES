#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void IsSorted(int A[],int n)
{
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        if(A[i]>A[i+1])
            flag=1;
    }
    if(flag==0)
        cout<<"Array is Sorted";
    else
        cout<<"Array is Not Sorted";
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
    IsSorted(A,n);
return 0;
}
