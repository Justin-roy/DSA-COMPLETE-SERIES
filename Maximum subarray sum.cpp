#include <iostream>
#include <fstream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;
// Brute force approach
// Time Complexity is O(n^3)
int main()
{
    int n,sum=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    //int maxSum=arr[0];
    int maxSum = INT_MIN;
    cout<<"Maximum of subarray: \n";
    for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
            sum=0;
          for(int k=i;k<=j;k++){
              sum+=arr[k];
              maxSum = max(maxSum,sum);
//              if(sum>maxSum)
//                maxSum=sum;
          }
       }
    }
    cout<<maxSum;
return 0;
}
