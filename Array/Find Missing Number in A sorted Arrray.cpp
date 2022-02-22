#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Find_missing(int A[],int n)
{
    int Sum=0;
    for(int i=0;i<n;i++)
    {
        Sum += A[i];
    }
    int N = A[n-1];
    int s = N*(N+1)/2,t=0;
      t = s - Sum;
    cout<<"Missing Element is: "<<t;

}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    Find_missing(A,n);
return 0;
}
