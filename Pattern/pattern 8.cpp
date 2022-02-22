#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m = 1;
    int n,m1;
    cout<<"Enter the value of N: ";
    cin>>n;
    m1=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        cout<<" ";
        for(int j=1;j<=i-1;j++)
            cout<<" ";
        for(int k=1;k<=m;k++)
            cout<<"*";
        cout<<endl;
        m++;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<" ";
        for(int j=1;j<=i-1;j++)
            cout<<" ";
        for(int k=1;k<=m1;k++)
            cout<<"*";
        cout<<endl;
        m1--;
    }
return 0;
}

