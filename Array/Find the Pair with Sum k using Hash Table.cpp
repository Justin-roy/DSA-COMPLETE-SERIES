#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 6 3 8 10 16 7 5 2 9 14
// Time is O(n)
int H[16];
void Find_Pair(int A[],int n,int k)
{
    for(int i=0;i<n-1;i++)
    {
        if(H[k-A[i]]!=0)
cout<<"A["<<A[i]<<"]"<<" + "<<"A["<<k-A[i]<<"]"<<" = "<<k<<endl;

    H[A[i]]++;
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
