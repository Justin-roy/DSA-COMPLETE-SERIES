#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void BinarySearch(int A[],int l,int h,int k)
{
    while(l<=h)
    {
        int mid = (l+h)/2;
        if(A[mid]==k)
            cout<<"value Found at Position"<<mid<<endl;
           // return mid;
        else if(k<A[mid])
            h = mid-1;
        else
            l = mid+1;
    }
    //return -1;
}
int Recursive_BinarySearch(int A[],int l,int h,int k)
{
    if(l<=h)
    {
        int mid = (l+h)/2;
        if(A[mid]==k)
            return mid;
        else if(k<A[mid])
          return Recursive_BinarySearch(A,l,mid-1,k);
        else
          return Recursive_BinarySearch(A,mid+1,h,k);
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter sorted Array: ";
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    int low = 0;
    int High = n;
    int k;
    cout<<"Enter Element You Want to Found: ";
    cin>>k;
    BinarySearch(A,low,High,k);
    //cout<<"Key Found at Index Position: "<<BinarySearch(A,low,High,k);
   // cout<<"Key Found at Index Position: "<<Recursive_BinarySearch(A,low,High,k);
return 0;
}
