#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}
int findMaximum(int arr[], int n){
    // code here
//    int l=arr[0];
//    int h=arr[n-1];
//    return(max(arr[l],arr[h]));
        for(int i=0;i<n-1;i++)
	    {
	        if(arr[i]>arr[i+1])
	        return arr[i];
	    }
	    return arr[n-1];
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    cout<<findMaximum(arr,n);
return 0;
}
