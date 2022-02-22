#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Insertion(int A[],int n,int idx)
{
    if(idx>n){
      cout<<"Deletion Not Possible Wrong Index";
      exit(0);
    }
    for(int i=idx-1;i<n-1;i++)
    {
       A[i] = A[i+1];
    }
    cout<<"Value Deleted at Position "<<idx;
    cout<<endl;
    for(int i=0;i<n-1;i++)
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
    cout<<"Enter the Index Position You want to Delete(0 to "<<n<<"): ";
    cin>>idx;
    Insertion(A,n,idx);
return 0;
}
