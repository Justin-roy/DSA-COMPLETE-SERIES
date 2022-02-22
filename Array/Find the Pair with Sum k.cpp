#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 6 3 8 10 16 7 5 2 9 14
void Find_Pair(int A[],int n,int k)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]+A[j]==k)
cout<<"A["<<A[i]<<"]"<<" + "<<"A["<<A[j]<<"]"<<" = "<<k<<endl;
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
    int k = 10;
    Find_Pair(A,n,k);
return 0;
}
