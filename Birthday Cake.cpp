#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array Elements\n";
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    int counter=0;
    int match;
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if(arr[i]==arr[j]){
            match = arr[i];
           }
       }
    }
    for(int i=0;i<n;i++)
    {
       if(arr[i]==match)
        counter++;
    }
    cout<<"Count: "<<counter<<endl;
    cout<<match;
return 0;
}
