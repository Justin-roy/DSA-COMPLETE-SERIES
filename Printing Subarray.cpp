#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    cout<<"Subarray: \n";
    for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
          for(int k=i;k<=j;k++){
            cout<<arr[k]<<" ";//printf("%d ",arr[k]);
          }
          cout<<endl;//printf("\n");
       }
    }
return 0;
}
