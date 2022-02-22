#include <iostream>
#include <bits/stdc++.h>
using namespace std;
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
    system("cls");
    cout<<"Before Reverse\n";
    for(int i=0;i<n;i++)
    {
     cout<<A[i]<<" ";
    }
    cout<<"\nAfter Reverse\n";
    for(int i=n-1;i>=0;i--)
        cout<<A[i]<<" ";
return 0;
}
