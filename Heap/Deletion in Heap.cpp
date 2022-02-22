#include <iostream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;
int Delete_Heap(int A[],int n)
{
    int x,i,j,val,temp;
    x = A[n];
    val = A[1];
    A[1] = A[n];
    A[n] = val;
    i=1,j=2*i;
    while(j<n-1)
    {
        if(A[j+1]>A[j])
            j = j+1;
        if(A[i]<A[j])
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i = j;
            j = 2*j;
        }
        else
            break;
    }
    return val;
}
void Max_Heap(int A[],int index)
{
   int temp = A[index],i=index;
   while(i>1 && temp>A[i/2])
   {
       A[i] = A[i/2];
       i = i/2;
   }
   A[i] = temp;
}
int main()
{
    int A[] = {0,10,20,30,25,5,40,35};
    for(int i=2;i<=7;i++)
    Max_Heap(A,i);
    cout<<"Deleted Element is: "<<Delete_Heap(A,7)<<endl;
    cout<<"Deleted Element is: "<<Delete_Heap(A,6)<<endl;
    cout<<"Deleted Element is: "<<Delete_Heap(A,5)<<endl;
    cout<<"Deleted Element is: "<<Delete_Heap(A,4)<<endl;
    cout<<"Deleted Element is: "<<Delete_Heap(A,3)<<endl;
    cout<<"Deleted Element is: "<<Delete_Heap(A,2)<<endl;
    cout<<"Deleted Element is: "<<Delete_Heap(A,1)<<endl;
    for(int i=1;i<=7;i++)
    {
      cout<<A[i]<<" ";
    }
return 0;
}
