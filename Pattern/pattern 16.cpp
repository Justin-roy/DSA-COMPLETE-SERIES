#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n; // n = 6
    int s = 2 * n-1; // (2 * 6) - 1 = 12-1 => 11
    int start = 0;
    int endd = s-1;
    int a[s][s]; // a[11][11]
    while(n!=0)
    {
        for(int i=start;i<=endd;i++){
           for(int j=start;j<=endd;j++){
           if(i==start || i==endd || j==start || j==endd)
                a[i][j]=n;
            }
        }
        ++start;
        --endd;
        --n;
    }
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
return 0;
}
