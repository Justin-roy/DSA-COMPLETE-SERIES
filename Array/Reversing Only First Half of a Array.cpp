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
    cout<<"Before Reversing the Elements:\n";
    for(int i=0;i<n;i++)
    {
     cout<<A[i]<<" ";
    }
    //Logic
     for(int i=0,j=(n/2)-1;i<n/4;i++,j--)
     {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
     }
    cout<<"\nAfter Reversing First Half of the Elements:\n";
    for(int i=0;i<n;i++)
    {
       cout<<A[i]<<" ";
    }
return 0;
}
