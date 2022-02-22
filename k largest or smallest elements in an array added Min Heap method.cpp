#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;
/*For example, if given array is [1, 23, 12, 9, 30, 2, 50]
and you are asked for the
largest 3 elements i.e., k = 3 then your program
should print 50, 30, and 23.*/
void K_Largest(int A[],int n,int k)
{
    //1 23 12 9 30 2 50
    while(k){// k times
     sort(A,A+n);//nlogn times
     int t = A[n-1];
     n = n-1;
     cout<<t<<" ";
     k--;
    }
    // Time Complexity = k*nlogn
    cout<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<A[i]<<" ";
    }
    cout<<endl;
}
void K_Smallest(int A[],int n,int k)
{
    //1 23 12 9 30 2 50
    while(k){// k times
     sort(A,A+n);//nlogn times
     int t = A[0];
     A[0] = 1000000;
     cout<<t<<" ";
     k--;
    }
    // Time Complexity = k*nlogn
    cout<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    int k;
    cout<<"How many Largest Element You Want: ";
    cin>>k;
    cout<<"K Largest: ";
    K_Largest(A,n,k);
    cout<<"K Smallest: ";
    K_Smallest(A,n,k);
return 0;
}
