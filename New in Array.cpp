#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p;
    p = new int[6];
    cout<<"Enter Elements: ";
    for(int i=0;i<6;i++)
    {
       cin>>p[i];
    }
    cout<<"Array Elements: ";
    for(int i=0;i<6;i++)
    {
       cout<<p[i]<<" ";
    }
    int *q;
    int n;
    cout<<"\nEnter New Size: ";
    cin>>n;
    q = new int[n];
    for(int i=0;i<6;i++)
    {
       q[i] = p[i];
    }
    p = q;
    q = NULL;
    cout<<"New Add Elements: ";
    for(int i=0;i<n;i++)
    {
         cout<<p[i]<<" ";
    }
//    cout<<"Enter Elements: ";
//    for(int i=0;i<n;i++)
//    {
//       cin>>q[i];
//    }
//    cout<<"Array Elements: ";
//    for(int i=0;i<n;i++)
//    {
//       cout<<q[i]<<" ";
//    }
//    delete [] q;
//    q = NULL;
return 0;
}
