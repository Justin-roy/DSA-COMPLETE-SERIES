#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool Triplate_Sum(int A[],int n,int Target)
{
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        for(int k=j+1;k<n;k++)
        {
           if(A[i]+A[j]+A[k]==Target)
            return true;
        }
      }
    }
    return false;
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
    int tar;
    cout<<"Enter the Target: ";
    cin>>tar;
    cout<<Triplate_Sum(A,n,tar);
return 0;
}
