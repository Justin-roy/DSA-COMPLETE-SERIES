#include <iostream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;
void Max_Heap(int A[],int index,int n)
{
   for(int i=1;i<=n;i++)
   {
      cout<<A[i]<<" ";
   }
  // }
  cout<<endl;
   int temp = A[index],i=index;
   while(i>1 && temp>A[i/2])
   {
       A[i] = A[i/2];
       i = i/2;
   }
   A[i] = temp;
//if(index==n){
   for(int i=1;i<=n;i++)
   {
      cout<<A[i]<<" ";
   }
  // }
  cout<<endl;
}
int main()
{
    int A[] = {0,10,20,30,25,5,40,35};
    for(int i=2;i<=7;i++)
    {
      Max_Heap(A,i,7);
    }
return 0;
}
