#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 3 6 8 8 10 12 15 15 15 20
void Find_Dup(int A[],int n)
{
    int Dup = 0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==A[i+1] && A[i]!=Dup)
        {
            cout<<"Duplicate '"<<A[i]<<"' Found at Index "<<i<<endl;
            Dup = A[i];
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
    Find_Dup(A,n);
return 0;
}
