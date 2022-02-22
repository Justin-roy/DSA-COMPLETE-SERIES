#include <iostream>
#include <fstream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;
// Cumulative sum approach
// Time Complexity is O(n^2)
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
    int currentSum[n+1];
    currentSum[0] = 0;
    for(int i=1;i<=n;i++){
       currentSum[i] = currentSum[i-1] + arr[i-1];
    }
//    cout<<"Printing Current elements: \n";
//    for(int i=0;i<=n;i++){
//       cout<<currentSum[i]<<"  ";
//    }
    int maxSum = INT_MIN;
    for(int i=1;i<=n;i++){
       int sum=0;
       for(int j=0;j<i;j++){
          sum = currentSum[i] - currentSum[j];
          cout<<sum<<"  ";
          maxSum = max(maxSum,sum);
        }
    }
    cout<<"\nPrinting Maximum Subarray sum: "<<maxSum;
return 0;
}

