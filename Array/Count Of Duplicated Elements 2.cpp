#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 3 6 8 8 10 12 15 15 15 20
/*
 Time Complexity of this Code is O(n)
*/
int H[100];
void Find_Dup2(int A[],int n)
{
    int Maxi = A[n-1];
    H[Maxi];
    for(int i=0;i<n;i++)
    {
        H[A[i]]++;
    }
    for(int j=0;j<=Maxi;j++)
    {
        if(H[j]>1)
    cout<<"Duplicate "<<j<<" Present at "<<H[j]<<" Times"<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Sorted Array Elements: ";
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    Find_Dup2(A,n);
return 0;
}


