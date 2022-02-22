#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
// Kadane's Algorithm
// Time Complexity is O(n)
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
    int maxSum = INT_MIN;
    int CurrentSum=0;
    for(int i=0;i<n;i++){
       CurrentSum+=arr[i];
       if(CurrentSum<0)
       {
           CurrentSum=0;
       }
       maxSum = max(maxSum,CurrentSum);
    }
    cout<<maxSum;
return 0;
}
