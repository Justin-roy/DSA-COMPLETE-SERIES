#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter 2d array(NxM): ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter 2d Array: \n";
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
          cin>>arr[i][j];
        }
    }
    system("cls");
    cout<<"Displaying 2d Array: \n";
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int tar,r = 0,c = m-1;
    bool flag = false;
    cout<<"Enter element to found in 2d array: ";
    cin>>tar;
    while(r < n && c>=0)
    {
        if(arr[r][c]==tar)
            flag=true;
        if(arr[r][c]>tar)
            c--;
        else
            r++;
    }
    if(flag)
        cout<<"Element Found!";
    else
        cout<<"Element Not Found!";
return 0;
}
