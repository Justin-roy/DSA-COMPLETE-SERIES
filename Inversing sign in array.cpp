#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
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
    for(int i=0;i<n;i++){
       cout<<-arr[i]<<"  ";
    }
return 0;
}
