#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;
void Find_missing(int A[],int n)
{
    int m = INT_MIN;
    for(int i=0;i<n;i++)
    {
      if(A[i]>m)
        m = A[i];
    }
    A[m];
    int diff = A[0] - 0;
    for(int i=0;i<m;i++)
    {
        if(A[i]-i!=diff){
          while(diff<A[i]-i){
        cout<<"Missing element is found "<<i+diff<<endl;
        ++diff;
          }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    sort(A,A+n);
    Find_missing(A,n);
return 0;
}
