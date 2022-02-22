#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 8 3 6 4 6 5 6 8 2 7
/*
 Time Complexity of this Code is O(n)
*/
int H[100];
void Find_Dup4(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        H[A[i]]++;
    }

    for(int i=0;i<=100;i++)
    {
       if(H[i]>1)
    cout<<"Duplicate "<<i<<" Present at "<<H[i]<<" Times"<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    Find_Dup4(A,n);
return 0;
}



