#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Find_Max_Min(int A[],int n)
{
    int Min=A[0];
    int Max=A[0];
    for(int i=0;i<n;i++)
    {
       if(A[i]<Min)
        Min = A[i];
       else if(A[i]>Max)
        Max = A[i];
    }
    cout<<"Maximum is: "<<Max<<endl;
    cout<<"Minimum is: "<<Min;
}
int main()
{
   int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Sorted Array Elements: ";
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    Find_Max_Min(A,n);
return 0;
}
