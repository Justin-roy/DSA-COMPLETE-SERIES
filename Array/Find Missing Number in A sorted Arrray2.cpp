#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Find(int A[],int n)
{
    int diff = A[0] - 0;
    for(int i=0;i<n;i++)
    {
        if(A[i]-i!=diff){
        cout<<"Missing element is found "<<i+i;
        break;
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
    Find(A,n);
return 0;
}
