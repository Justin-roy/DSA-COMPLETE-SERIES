#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Find_Missing(int A[],int n)
{
    int HashArr[n] = {0};
    int t = 0;
     for(int i=0;i<n-1;i++)
     {
       HashArr[A[i]]++;
     }
     for(int i=1;i<=n;i++)
     {
         cout<<HashArr[i]<<" ";
        if(HashArr[i]==0)
            t = i;
     }
     cout<<endl;
     return t;
//     int sum =0;
//    for(int i=0;i<n-1;i++)
//    {
//        sum += A[i];
//    }
//    // N = 5
//    // 1 2 4 5
//    return (n*(n+1)/2)-sum;
//    // sum = 12
////    5*6/2
////    5*3
////    15 - 12 = 3
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    for(int i=0;i<n-1;i++)
    {
       cin>>A[i];
    }
    cout<<Find_Missing(A,n);
return 0;
}
