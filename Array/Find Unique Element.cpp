#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Hash[10];
// 2 4 6 7 4 5 6 2
void Find_Unique(int A[],int n)
{
   for(int i=0;i<n;i++)
   {
      Hash[A[i]]++;//HashArray
   }
   for(int i=0;i<n;i++)
   {
    if(Hash[i]==1)
    cout<<"The Unique Element is: "<<i<<endl;
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
    Find_Unique(A,n);
return 0;
}
