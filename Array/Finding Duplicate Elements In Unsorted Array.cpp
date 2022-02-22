#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
 Time Complexity of this Code is O(n^2)
*/
void Find_Dup3(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int c=1;
        if(A[i]!=-1){
       for(int j=i+1;j<n;j++)
       {
          if(A[i]==A[j]){
            c++;
            A[j] = -1;
          }
       }
        if(c>1)
cout<<"Duplicate "<<A[i]<<" Present at "<<c<<" Times"<<endl;
    }
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
    Find_Dup3(A,n);
return 0;
}


