#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;
void BinarySorting(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
      {
          if(A[j]<A[i]){
            int temp = A[j];
            A[j] = A[i];
            A[i] = temp;
          }
      }
    }
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void BinarySorting2(int A[],int n)
{
    int c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
       if(A[i]==0)
        c1 += 1;
       if(A[i]==1)
        c2 += 1;
    }
    for(int i=0;i<c1;i++)
        A[i] = 0;
    for(int i=c1;i<n;i++)
        A[i] = 1;
    for(int i=0;i<n;i++)
    {
       cout<<A[i]<<" ";
    }
    cout<<endl;
}
void BinarySorting3(int A[],int n)
{
    int l = 0;
    int mid = 0;
    int h = n-1;
    while(mid<=h)
    {
        if(A[mid]==0)
        {
            swap(A[l],A[mid]);
            l++;
            mid++;
        }
        else if(A[mid]==1)
        {
            mid++;
        }
        else if(A[mid]==2)
        {
            swap(A[mid],A[h]);
            h--;
        }
    }
    for(int i=0;i<n;i++)
    {
       cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int T;
    cout<<"Enter Test Case: ";
    cin>>T;
    while(T){
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    //Binary Sort
    //BinarySorting(A,n);
    //BinarySorting2(A,n);
    BinarySorting3(A,n);
    --T;
    }
return 0;
}
