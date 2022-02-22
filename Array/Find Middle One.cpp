#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    if(n%2==0)
      cout<<A[(n-1)/2];
    else
      cout<<A[n/2];
return 0;
}
