#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Time is O(n)
// 1 3 4 5 6 8 9 10 12 14
void Find_Pair2(int A[],int n,int k)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(A[i]+A[j]==k)
        {
cout<<"A["<<A[i]<<"]"<<" + "<<"A["<<A[j]<<"]"<<" = "<<k<<endl;
         ++i;
         --j;
        }
        else if(A[i]+A[j]<k)
            ++i;
        else
            --j;
    }
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
    int k = 10;
    Find_Pair2(A,n,k);
return 0;
}
