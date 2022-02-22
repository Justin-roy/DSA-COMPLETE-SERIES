#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cout<<"Enter the 2D size of array(NxK): ";
    cin>>n>>k;
    int arr[n][k];
    cout<<"Enter 2D array Elements: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
       cin>>arr[i][j];
        }
    }
    int row_start=0,row_end=n-1,column_start=0,column_end=k-1;
    while(row_start <= row_end && column_start <= column_end)
    {
        // For row_start
        for(int col=column_start;col<=column_end;col++)
            cout<<arr[row_start][col]<<" ";
        row_start++;
        // For column_end
        for(int row=row_start;row<=row_end;row++)
            cout<<arr[row][column_end]<<" ";
        column_end--;
        // For row_end
        for(int col=column_end;col>=column_start;col--)
            cout<<arr[row_end][col]<<" ";
        row_end--;
        // For column_start
        for(int row=row_end;row>=row_start;row--)
            cout<<arr[row][column_start]<<" ";
        column_start++;
    }
return 0;
}
