#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Insertion(int A[],int n,int idx,int ele)
{
    for(int i=n-1;i>=idx-1;i--)
    {
       A[i+1] = A[i];
    }
    A[idx-1] = ele;
    cout<<"Value Inserted at Position "<<idx;
    cout<<endl;
    for(int i=0;i<=n;i++)
    {
       cout<<A[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the Array Size: ";
    cin>>n;
    int A[n];
    cout<<"Enter Array Elements\n";
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    int idx;
    cout<<"Enter the Index Position(0 to "<<n<<"): ";
    cin>>idx;
    int ele;
    cout<<"Enter Element You want to Insert: ";
    cin>>ele;
    Insertion(A,n,idx,ele);
return 0;
}
