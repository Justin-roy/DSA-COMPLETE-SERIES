#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fun()
{
    int **A;
    A = new int *[3];
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];
    cout<<"Enter 2D Array:\n";
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<4;j++)
       {
           cin>>A[i][j];
       }
    }
    cout<<"2D Array: \n";
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<4;j++)
       {
           cout<<A[i][j]<<" ";
       }
       cout<<endl;
    }
}
int main()
{
    int *A[3];
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];
    cout<<"Enter 2D Array:\n";
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<4;j++)
       {
           cin>>A[i][j];
       }
    }
    cout<<"2D Array: \n";
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<4;j++)
       {
           cout<<A[i][j]<<" ";
       }
       cout<<endl;
    }
       fun();
    return 0;
}
