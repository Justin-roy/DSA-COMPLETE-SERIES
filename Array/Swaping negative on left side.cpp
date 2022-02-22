#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Time Complexity is O(n)
void Swapping_Negative(int A[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        while(A[i]<0){i++;} //Negative Number
        while(A[j]>=0){j--;}//Positive Number
    //If Both or single is False it's goes to if condition
        if(i<j)
        swap(A[i],A[j]);
    }
    cout<<"After Swapping Negative on Left: ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter sorted Array Elements: ";
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    Swapping_Negative(A,n);
return 0;
}
