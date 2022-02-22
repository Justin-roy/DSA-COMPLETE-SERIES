#include <iostream>
#include <bits/stdc++.h>
#include <climits>
#define m 12
// 3 7 4 9 12 6 1 11 2 10
using namespace std;
int H[m];
void Finding(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
       H[A[i]]++;
    }
    for(int i=1;i<=m;i++)
    {
       if(H[i]==0)
        cout<<"Missing element is found "<<i<<endl;
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
    Finding(A,n);
return 0;
}
