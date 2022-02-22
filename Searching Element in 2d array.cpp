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
    system("cls");
    cout<<"Displaying Elements: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
       cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int f;
    cout<<"Enter Elements You want to Find In 2d array "<<n<<"x"<<k<<": ";
    cin>>f;
    int counter=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            if(arr[i][j]==f){
                cout<<"Row = "<<i<<" "<<"Column = "<<j;
                counter=1;
            }
        }
        }
    if(counter==1)
        cout<<"\nElement Found!"<<endl;
    else
        cout<<"\nElement Not Found!"<<endl;
    system("pause>0");
return 0;
}
