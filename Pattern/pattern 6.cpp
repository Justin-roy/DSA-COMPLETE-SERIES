#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m = 1;
    int n;
    cout<<"Enter the value of N: ";
    cin>>n;
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
return 0;
}


