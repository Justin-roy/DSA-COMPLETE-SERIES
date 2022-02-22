#include <iostream>
using namespace std;
int MissingPos(int A[],int n)
{
    int i = 0;
    while(i<n)
    {
       int CurrentIndex = A[i] - 1;
//A[i] <= n This Condition Will Check If Array in Sorted Order
       if(A[i] > 0 && A[i] <= n && A[i] != A[CurrentIndex])
          swap(A[i],A[CurrentIndex]);
       else
        i++;
    }
    for(int i=0;i<n;i++)
    {
      if(A[i] != i+1)
        return i+1;
    }
    return n + 1;
}
int main()
{
   int A[4] = {3,4,-1,1};
   int B[5] = {7,8,9,11,12};
   int C[6] = {1,2,3,4,5,6};
   cout<<MissingPos(A,4);cout<<endl;
   cout<<MissingPos(B,5);cout<<endl;
   cout<<MissingPos(C,6);
return 0;
}
